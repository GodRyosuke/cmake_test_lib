# visual studioを用いたライブラリ
## getting started
```bash
$ git clone this_repo.git
$ cd /path/to/this_repo/
$ mkdir -p "build/mingw"
$ cd build/mingw
$ cmake -G "MinGW Makefiles" -S ../../ -B .
$ cmake --build .
$ ctest
```
実行ファイルを動かしたい場合は、以下を実行
```bash
$ cd src\test\wander_lib
$ WanderLibTests.exe
もしくは、
$ cd src/test/wander_lib
$ ./WanderLibTests
```