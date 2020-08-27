gdb.execute("break dlopen")
# grab the materialsystem.so handle from dlopen
for i in range(0, 28):
    gdb.execute("continue")
    file = gdb.parse_and_eval("file").string()
gdb.execute("finish")
handle=int(gdb.parse_and_eval("$"))
gdb.execute("disable 2")
gdb.execute("break dlsym")
fout = open("/tmp/msys.txt", "w")

while True:
    # grab any dlsym calls that are using the materialsystem.so handle
    gdb.execute("continue", to_string=True)
    handle2 = int(gdb.parse_and_eval("handle"))
    if handle == handle2:
        name = gdb.parse_and_eval("name").string()
        fout.write("{}\n".format(name))
        fout.flush()

    # old: printed out all failed dlsym calls
    '''
    name = gdb.parse_and_eval("name").string()
    gdb.execute("continue", to_string=True)
    gdb.execute("finish", to_string=True)
    addr=int(gdb.parse_and_eval("$"))
    if addr==0 and name is not "":
        #print("Fail: {}".format(name))
        fout.write("{}\n".format(name))
        fout.flush()
        #break
    '''
