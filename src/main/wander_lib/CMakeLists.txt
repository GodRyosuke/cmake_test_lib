set(R3_STRING_UTILS_EXPORT_ALL_SYMBOLS ${CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS})
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS true)

set(WANDER_LIB_SOURCES
	wander_lib.cpp
)


# static‚Æshared‚Ì“ñ‚Â‚ð—pˆÓ‚·‚é
add_library(wander-lib STATIC
	${WANDER_LIB_SOURCES}
)
target_include_directories(wander-lib PUBLIC "${PROJECT_SOURCE_DIR}/include")

add_library(wander-lib-shared SHARED
	${WANDER_LIB_SOURCES}
)
target_include_directories(wander-lib-shared PUBLIC "${PROJECT_SOURCE_DIR}/include")

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ${R3_STRING_UTILS_EXPORT_ALL_SYMBOLS})