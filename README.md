## 主机环境

ubuntu22.04

``` zsh
sudo apt-get install ccache debian-archive-keyring debootstrap device-tree-compiler dwarves gcc-arm-linux-gnueabihf jq libbison-dev libc6-dev-armhf-cross libelf-dev libfl-dev liblz4-tool libpython2.7-dev libusb-1.0-0-dev pigz pixz pv swig pkg-config python3-distutils qemu-user-static u-boot-tools distcc uuid-dev lib32ncurses-dev lib32stdc++6 apt-cacher-ng aptly aria2 libfdt-dev libssl-dev
```

## SDK版本

- kernel 5.16.17
- uboot 2021.10

## 编译

直接在项目主目录下运行
``` bash
sudo ./build.sh
```
