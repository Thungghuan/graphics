project(Rasterizer1)

find_package(OpenCV REQUIRED)

add_executable(Rasterizer1 main.cpp rasterizer.hpp rasterizer.cpp Triangle.hpp Triangle.cpp)
target_link_libraries(Rasterizer1 ${OpenCV_LIBRARIES})
