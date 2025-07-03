add_library(calculator src/calculator.cpp src/run_app.cpp)
target_include_directories(calculator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(run_app src/run_app.cpp)
target_link_libraries(run_app PUBLIC calculator)