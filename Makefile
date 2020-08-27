CXXFLAGS+=-m32 -std=c++11 -ggdb
LFLAGS+=-ldl -Wl,materialsystem_valve.so -Wl,-rpath,'$$ORIGIN'

# recompile every time
.PHONY: materialsystem.so

#make sure you run this from steamrt, or else tf2 may not like it.
materialsystem.so: materialsystem.cpp
	$(CXX) $(CXXFLAGS) $(LFLAGS) -shared -o $@ $^
