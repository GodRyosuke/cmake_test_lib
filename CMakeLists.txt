# CMakeList.txt : 最上位の CMake プロジェクト ファイル。グローバル構成を行います
# また、サブプロジェクトをここに含めます。
#
cmake_minimum_required (VERSION 3.8)

project ("cmake_test_lib" VERSION 1.0)

option(RILEY_CPP_UTILS_WITH_TESTS "Build and run RileyCppUtils test executables" ON)

add_subdirectory(src/main/wander_lib)
# add_subdirectory(src/main/r3/validation)


if (${RILEY_CPP_UTILS_WITH_TESTS})
	enable_testing()
	add_subdirectory(src/test/wander_lib)
	# add_subdirectory(src/test/r3/validation)
endif()
