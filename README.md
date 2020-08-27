# a tf2 materialsystem shim
because using source's headers means agreeing to their license.

Precise vtable is the python script I used to generate two of the files, it's available at
https://github.com/Nopey/ghidra_scripts/blob/master/preciseVTableToCPP.py

(I ran it on the Mac OSX materialsystem.dylib binary, as that has plenty of debugging symbols)
If you'd like mac osx binaries from linux or windows, use the download_depots command from the steam commandline.

msys.py is a GDB script for printing what's being dlopen'd and dlsym'd, as I wanted to ensure that no other symbols were loaded from materialsystem.so
