//
// Created by Esteban on 18/12/2023.
//

#ifndef DATASTRUCTURES_NODE_H
#define DATASTRUCTURES_NODE_H
#include <cstdlib>

template <class T>class LinkedDouble;

template <class T>
class Node {

    friend class LinkedDouble<T>;

public:

    Node(){
        next = NULL;
        previous = NULL;
    }

    Node(T info) : info(info) {
        next = NULL;
        previous = NULL;
    }

    virtual ~Node();

private:

    T info;
    Node<T>* next;
    Node<T>* previous;


};


#endif //DATASTRUCTURES_NODE_H
