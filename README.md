# visual studio��p�������C�u����
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
���s�t�@�C���𓮂��������ꍇ�́A�ȉ������s
```bash
$ cd src\test\wander_lib
$ WanderLibTests.exe
�������́A
$ cd src/test/wander_lib
$ ./WanderLibTests
```
