//
// Created by Kang on 11/20/2019.
//  My Linked List
//

#include "Node.hpp"
#ifndef MIDTERM2_MYLINKEDLIST_HPP
#define MIDTERM2_MYLINKEDLIST_HPP
using namespace std;
#include <iostream>

template <typename T>
class MyLinkedList {
public:
    Node<T> *head;      // node points to the head node
    // create new node with the data, make it the head
    void pushFront(T data);
    // create new node with the data, push data to the end
    void pushBack(T data);
    // inserting a newnode with the data to a node
    void insert(Node<T> *prevNode, T data);
};

// creates a new node with its data, and adds it to the front of the linked list
template <typename T>
void MyLinkedList<T>::pushFront(T data) {
    // creating new node
    Node<T> * newNode = new Node<T>();
    // append the data
    newNode->data = data;
    // point newNode to what head pointing to
    newNode->next = head;
    // newNode become the head
    head = newNode;
}

// creates a new node with its data, and adds it to the back of the linked list.
template <typename T>
void MyLinkedList<T>::pushBack(T data) {
    // creating new node
    Node<T> *newNode = new Node<T>();
    // append the data
    newNode->data = data;
    // newNode points to NULL
    newNode->next = NULL;
    // if head is NULL, newNode is the head
    if(head == NULL) {
        head = newNode;
        return;
    }
    // find where the last one is, make it to the new Node
    while(head->next != NULL)
        head = head->next;
    head->next = newNode;
}

// creates a new node with its data, and inserts it after a given node.
template <typename T>
void MyLinkedList<T>::insert(Node<T> *prevNode, T data) {
    // if prevNode is null, gg
    if(prevNode == NULL)
        return;
    // creating new Node
    Node<T> *newNode = new Node<T>();
    // append data
    newNode->data = data;
    // new Node points to what prev Node points to
    newNode->next = prevNode->next;
    // make newNode the prevNode
    prevNode->next = newNode;
}

#endif //MIDTERM2_MYLINKEDLIST_HPP
