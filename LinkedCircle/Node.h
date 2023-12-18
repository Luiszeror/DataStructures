//
// Created by Esteban on 18/12/2023.
//

#ifndef DATASTRUCTURES_NODE_H
#define DATASTRUCTURES_NODE_H

#include <cstdlib>


template <class T> class LinkCircled;

template <class T>

class Node {

    friend class LinkCircled<T>;

public:
    Node() {}

    Node(T info) : info(info) {
        next = NULL;
    }

private:
    T info;
    Node<T>* next;
};






#endif //DATASTRUCTURES_NODE_H
