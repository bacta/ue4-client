# ue4-client
Unreal Engine 4 client.


Create a symbolic link to the Dropbox location.

###Windows
Run a command-line console instance as Administrator, then enter the following command after replacing `<username`> with your windows profile name):
```
mklink /J "c:\users\<username>\documents\unreal projects\ue4-client\Content" "c:\users\<username>\dropbox\Content"
```
The first path above is the symbolic link path, and the second path is the physical path of the dropbox directory. If your paths are different, then adjust accordingly.

If you don't have write permission to the dropbox, then you may want to just copy the files manually from the dropbox link:

https://www.dropbox.com/sh/dp8wsv0dlkpuob5/AACUgZqGbteGSPRuSkJBGDLXa?dl=0