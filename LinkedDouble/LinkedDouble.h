//
// Created by Esteban on 18/12/2023.
//

#include <vector>
#include <string>
#include "Node.h"

using namespace std;


template <class T>

class LinkedDouble {


public:

    LinkedDouble();
    bool isEmpty();
    void addNodeFirst(T info);
    void addNodeLast(T info);
    vector<T> getList(bool);
    void addAfterTo(Node<T>* targetNode, T info);
    void addNodeBeforeTo(Node<T>* targetNode, T info);
    void addNodeSorted(T info);
    Node<T>* findNode( std::string);
    T* findInfo( std::string& criteria);
    T deleteNode(Node<T>* targetNode);
    int getSize();
    T* getObject(int index) ;
    T* getFirst();
    T* getLast();
    virtual ~LinkedDouble();

private:

    Node<T>* head;
    Node<T>* last;

};


#endif //DATASTRUCTURES_LINKEDDOUBLE_H
