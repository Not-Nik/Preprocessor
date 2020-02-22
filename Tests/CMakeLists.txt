enable_language(CXX)

add_executable(PreprocessorCTest ${CMAKE_CURRENT_LIST_DIR}/main.c)
add_executable(PreprocessorCXXTest ${CMAKE_CURRENT_LIST_DIR}/main.cpp)

target_include_directories(PreprocessorCTest PUBLIC ${PREPROCESSOR_INCLUDE_DIRS})
target_include_directories(PreprocessorCXXTest PUBLIC ${PREPROCESSOR_INCLUDE_DIRS})