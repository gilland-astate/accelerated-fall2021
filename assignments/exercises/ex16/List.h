#pragma once
#include "Node.h"

class List {
    private:
        Node* head = nullptr;
    public:
        void addAtBack(int payload);
        void addAtFront(int payload);
        ~List();
        void empty();
};