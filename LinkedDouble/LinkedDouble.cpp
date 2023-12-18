//
// Created by Esteban on 18/12/2023.
//

#include "LinkedDouble.h"

#include <iostream>
#include "LinkedDouble.h"

template<class T>
LinkedDouble<T>::~LinkedDouble() {


}

template<class T>
vector<T> LinkedDouble<T>::getList(bool reverse) {
    std::vector<T> out;
    Node<T>* aux = reverse ? head : last;
    while( aux != NULL ){
        out.push_back( aux->info );
        aux = reverse ? aux->next : aux->previous;
    }
    return out;
}

template<class T>
void LinkedDouble<T>::addAfterTo(Node<T>* targetNode, T info) {
    if (targetNode == nullptr) {
        std::cout << "Error: El nodo objetivo es nulo." << std::endl;
        return;
    }
    Node<T>* newNode = new Node<T>(info);

    if (isEmpty()) {
        head = newNode;
        last = newNode;
    } else {
        newNode->next = targetNode->next;
        newNode->previous = targetNode;

        if (targetNode->next != nullptr) {
            targetNode->next->previous = newNode;
        } else {
            last = newNode;
        }
        targetNode->next = newNode;
    }
}


template<class T>
void LinkedDouble<T>::addNodeLast(T info) {

    Node<T>* newNode = new Node<T>(info);
    if ( isEmpty( ) ){
        head = newNode;
        last = newNode;
    }else{
        last->next = newNode;
        newNode->previous = last;
        last = newNode;
    }

}

template<class T>
void LinkedDouble<T>::addNodeFirst(T info) {

    Node<T>* newNode = new Node<T>(info);
    if ( isEmpty( ) ){
        head = newNode;
        last = newNode;
    }else{
        head->previous = newNode;
        newNode->next = head;
        head = newNode;
    }
}

template <class T>
void LinkedDouble<T>::addNodeBeforeTo(Node<T>* targetNode, T info) {
    if (targetNode == nullptr) {
        std::cout << "Error: El nodo objetivo es nulo." << std::endl;
        return;
    }

    Node<T>* newNode = new Node<T>(info);

    if (isEmpty()) {
        head = newNode;
        last = newNode;
    } else {
        if (targetNode->previous != nullptr) {
            targetNode->previous->next = newNode;
            newNode->previous = targetNode->previous;
        } else {
            head = newNode;
        }

        newNode->next = targetNode;
        targetNode->previous = newNode;
    }
}

template <class T>
void LinkedDouble<T>::addNodeSorted(T info) {
    Node<T>* newNode = new Node<T>(info);

    if (isEmpty() || info.getId() < head->info.getId()) {
        addNodeFirst(info);
        return;
    }

    Node<T>* current = head;
    while (current->next != nullptr && current->next->info.getId() < info.getId()) {
        current = current->next;
    }

    newNode->next = current->next;
    newNode->previous = current;

    if (current->next != nullptr) {
        current->next->previous = newNode;
    } else {
        last = newNode;
    }

    current->next = newNode;
}
template<class T>
Node<T> *LinkedDouble<T>::findNode(std::string criteria) {
    Node<T>* current = head;

    while (current != nullptr) {
        if (current->info.getId() == criteria) {
            return current;
        }

        current = current->next;
    }
    return nullptr;
}

template<class T>
T* LinkedDouble<T>::findInfo(std::string& criteria) {
    Node<T>* current = head;

    while (current != nullptr) {
        if (current->info.getId() == criteria) {
            return &(current->info);
        }

        current = current->next;
    }

    return nullptr;
}

template<class T>
T LinkedDouble<T>::deleteNode(Node<T>* targetNode) {
    if (targetNode == nullptr) {
        throw std::invalid_argument("Error: El nodo objetivo es nulo.");
    }

    if (isEmpty()) {
        throw std::runtime_error("Error: La lista está vacía.");
    }

    T deletedInfo = targetNode->info;

    if (targetNode->previous != nullptr) {
        targetNode->previous->next = targetNode->next;
    } else {
        head = targetNode->next;
    }

    if (targetNode->next != nullptr) {
        targetNode->next->previous = targetNode->previous;
    } else {
        last = targetNode->previous;
    }

    delete targetNode;

    return deletedInfo;
}

template<class T>
int LinkedDouble<T>::getSize()  {
    int count = 0;
    Node<T>* current = head;

    while (current != nullptr) {
        count++;
        current = current->next;
    }

    return count;
}

template<class T>
T* LinkedDouble<T>::getObject(int index) {
    if (index < 0) {
        return nullptr;
    }

    int count = 0;
    Node<T>* current = head;

    while (current != nullptr && count < index) {
        current = current->next;
        count++;
    }

    return (current != nullptr) ? &(current->info) : nullptr;
}

template<class T>
T* LinkedDouble<T>::getFirst() {
    if (head != nullptr) {
        return head->info;
    } else {

        return *T();
    }
}

template<class T>
T* LinkedDouble<T>::getLast(){
    if (last != nullptr) {
        return last->info;
    } else {
        return *T();
    }
}

template<class T>
bool LinkedDouble<T>::isEmpty() {
    return head == NULL && last == NULL;
}

template<class T>
LinkedDouble<T>::LinkedDouble() {

    head = NULL;
    last = NULL;

}