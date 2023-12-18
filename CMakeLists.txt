cmake_minimum_required(VERSION 3.26)
project(DataStructures)

set(CMAKE_CXX_STANDARD 14)

include_directories(LinkedDouble)

add_executable(DataStructures
        .idea/.gitignore
        .idea/DataStructures.iml
        .idea/modules.xml
        .idea/vcs.xml
        LinkedDouble/LinkedDouble.cpp
        LinkedDouble/LinkedDouble.h
        LinkedCircle/Node.h
        LinkedCircle/LinkCircled.cpp
        Linked/Node.h
        Linked/LinkedList.h
        Linked/LinkedList.cpp)
