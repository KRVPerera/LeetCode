project(Nonc)

set(SOURCE_FILES Solution.cpp)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/include")

#add_executable(${PROJECT_NAME} ${SOURCE_FILES})
add_executable(test_${PROJECT_NAME} Solution.cpp)
target_link_libraries(test_${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain)

#add_executable(${PROJECT_NAME}_1 Solution1.cpp)
add_executable(test_${PROJECT_NAME}_1 Solution1.cpp)
target_link_libraries(test_${PROJECT_NAME}_1 PRIVATE Catch2::Catch2WithMain)
