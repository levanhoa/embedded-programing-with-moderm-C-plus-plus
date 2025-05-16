SET(PROJECT_NAME "hello_work")
PROJECT(${PROJECT_NAME} CXX)
CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

#indicate the entry point for the executable
add_executable (${PROJECT_NAME}
                src/main.cpp)

SET_TARGET_PROPERTIES(${PROJECT_NAME}
	PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")