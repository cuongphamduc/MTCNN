cmake_minimum_required(VERSION 3.13)
project(MTCNN)

set(CMAKE_CXX_STANDARD 17)
include_directories(/home/chienthan1997/OpenBLAS/build/include)
link_directories(/home/chienthan1997/OpenBLAS/build/lib)

find_package(OpenCV REQUIRED)

AUX_SOURCE_DIRECTORY(./src DIR_SRCS)
add_executable(MTCNN ${DIR_SRCS})
target_link_libraries(MTCNN ${OpenCV_LIBS})
target_link_libraries(MTCNN openblas)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/data/Onet.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/data/Pnet.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/data/Rnet.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})