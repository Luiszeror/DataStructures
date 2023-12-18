//
// Created by Esteban on 18/12/2023.
//

#ifndef DATASTRUCTURES_LINKCIRCLED_H
#define DATASTRUCTURES_LINKCIRCLED_H

#include <vector>
#include <string>
#include "Node.h"

template <class T>
class LinkCircled {
public:
    LinkCircled();
    bool isEmpty();
    void addNodeFirst(T);
    void addNodeLast(T);
    void addNodeBeforeTo(Node<T>*, T);
    void addNodeAfterTo(Node<T>*, T);
    void addNodeSorted(T);
    void deleteNode(std::string id);
    std::vector<T> getLinked();
    std::vector<T> roamLinked(Node<T>*);
    Node<T>* findNode(std::string);
    T* findInfo(std::string);

    virtual ~LinkCircled();

private:
    Node<T>* head;
};



#endif //DATASTRUCTURES_LINKCIRCLED_H
