#pragma once

class Node {
    private:
        int payload;
        Node* next;
    public:
        void setNext(Node* next) { this->next = next; }
        Node* getNext() { return next; }
        Node(int payload) : payload{payload}, next{nullptr} {}
        Node() = delete;
};