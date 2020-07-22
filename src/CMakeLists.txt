set(MYLIB_MOD myLib)

set(MYLIB_SRC src/ctor.cpp)
add_library(${MYLIB_MOD} SHARED ${MYLIB_SRC})

target_include_directories(${MYLIB_MOD} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

add_subdirectory(julia)
