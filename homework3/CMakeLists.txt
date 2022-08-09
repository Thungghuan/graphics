project(Rasterizer3)

find_package(OpenCV REQUIRED)

add_executable(Rasterizer3 main.cpp rasterizer.hpp rasterizer.cpp global.hpp Triangle.hpp Triangle.cpp Texture.hpp Texture.cpp Shader.hpp OBJ_Loader.h)

target_link_libraries(Rasterizer3 ${OpenCV_LIBRARIES})

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E create_symlink ${PROJECT_SOURCE_DIR}/models/  ${CMAKE_CURRENT_BINARY_DIR}/models)
#target_compile_options(Rasterizer PUBLIC -Wall -Wextra -pedantic)
