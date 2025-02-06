
cmake_minimum_required(VERSION 3.10)  # 指定 CMake 最低版本
project(HelloSLAM)                    # 项目名称


# 添加可执行文件
add_library( hello libHelloSLAM.cpp )
add_library( hello_shared SHARED libHelloSLAM.cpp)
add_executable( useHello useHello.cpp )
target_link_libraries(useHello hello_shared )
