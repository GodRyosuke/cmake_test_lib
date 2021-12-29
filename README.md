# visual studioを用いたtest library
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
# 実行ファイルを動かしたい場合
```bash
$ cd src\test\wander_lib
$ WanderLibTests.exe
# On linux distribution↓
$ cd src/test/wander_lib
$ ./WanderLibTests
```
