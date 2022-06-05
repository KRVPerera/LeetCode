project(container_with_most_water)

set(SOURCE_FILES Solution.cpp Solution.h)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

add_executable(test_${PROJECT_NAME} test.cpp Solution.cpp Solution.h)
target_link_libraries(test_${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain)