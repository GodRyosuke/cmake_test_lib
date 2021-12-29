# 実行ファイル生成に関する情報
add_executable(
	WanderLibTests
	wander_lib_main.cpp
)
target_link_libraries(WanderLibTests PRIVATE wander-lib)
target_include_directories(WanderLibTests PUBLIC "${PROJECT_SOURCE_DIR}/include")

# testに関する情報
add_test(NAME WanderLib COMMAND WanderLibTests)