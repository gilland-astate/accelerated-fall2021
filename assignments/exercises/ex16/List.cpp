#include "List.h"

void List::addAtBack(int payload) {
    Node* newNode = new Node{payload};

    if( head == nullptr )
        head = newNode;
    else {
        Node* current = head;
        Node* previous = current;

        while( current != nullptr ) {
            previous = current;
            current = current->getNext();
        }

        previous->setNext(newNode);
    }
}

void List::addAtFront(int payload) {
    Node* newNode = new Node{payload};

    if( head == nullptr )
        head = newNode;
    else {
        newNode = head;
        head = newNode;
    }
}

void List::empty() {
    while( head != nullptr ) {
        Node* target = head;
        head = head->getNext();
        delete target;
    }
}

List::~List {
    empty();
}