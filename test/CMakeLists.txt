include(AddCatch2)

set(UNIT_TEST unittest)
add_executable(${UNIT_TEST} src/test_calc.cpp src/test_run_app.cpp)
target_link_libraries(${UNIT_TEST} PRIVATE run_app Catch2::Catch2WithMain)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/build/_deps/catch2-src/extras")
include(Catch)
catch_discover_tests(${UNIT_TEST})