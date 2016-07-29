PyV8 - WiP
==========

This is my clone of PyV8. In this branch (updateV8) I'm working on PyV8 to compile against the current V8 branch.

Requirements
------------
Tested with Debian 8 (jessie) and python 2.7

**General**
- `apt-get install curl make gcc g++ binutils libc6-dev systemtap-sdt-dev`
**Python**
- `apt-get install python-dev`
**Boost**
- `apt-get install python-dev libboost-dev libboost-python-dev libboost-thread-dev libboost-system-dev`

Installation
------------
- Compile V8 (https://github.com/v8/v8/wiki/Using%20Git)
```
git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git
export PATH=`pwd`/depot_tools:"$PATH"
gclient
fetch v8
cd v8
make x64.release
```
- git clone -b updateV8 https://github.com/qistoph/pyv8.git
- cd pyv8
- V8_HOME=/path/to/v8/ python setup.py build
- sudo python setup.py install
