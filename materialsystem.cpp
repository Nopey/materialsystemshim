#include <dlfcn.h>
#include <assert.h>
#include <stdio.h>
#include "materialsystem_shim.cpp"

typedef void * (*CIFun_t)(const char *, int *);
static void *valve = 0;
static CIFun_t valve_ci;
FILE *fout;

static void check_valve(){
    if( valve ) return;
    // XXX: hardcoded the materialsystem_valve location because I'm lazy
    assert( valve = dlopen("/home/magnus/.local/share/Steam/steamapps/common/Team Fortress 2/bin/materialsystem_valve.so", RTLD_LOCAL ) );
    valve_ci = (CIFun_t) dlsym(valve, "CreateInterface");
    // at some point, this should be done:
    // dlclose( valve );
    fout = fopen("/tmp/matsys.txt", "w");
}

extern "C"{
    void *CreateInterface(const char *iname, int *returnVal) {
        check_valve();
        fprintf(fout, "%s\n", iname);
        fflush(fout);
        //XXX: We don't bother checking what the iname is,
        // as we know the only one that is requested from materialsystem.so is VMaterialSystem081
        void *valve_ms = valve_ci(iname, returnVal);
        return new CMaterialSystemShim((IMaterialSystem*)valve_ms);
    }
}
