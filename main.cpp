#include "MyLinkedList.hpp"

template <typename DLL, typename T>
void print(DLL type) {
    while(type.head != NULL ) {
        cout << type.head->data << " ";
        type.head = type.head->next;
    }
}

int main() {

    // int list
    int len, mid = 0;
    MyLinkedList<int> intList{};
    intList.pushBack(3);
    intList.pushFront(1);

    // finding the mid point of int List
    Node<int> *prevNodeInt = intList.head;
    while(prevNodeInt != NULL) {
        len++;
        prevNodeInt = prevNodeInt->next;
    }
    mid = ((len % 2) == 0) ? (len / 2) : (len + 1) / 2;
    prevNodeInt = intList.head;
    while(mid-- > 1)
        prevNodeInt = prevNodeInt->next;
    intList.insert(prevNodeInt, 2);
    print<MyLinkedList<int>, int>(intList);

    // string list
    len = 0;    // reset length

    MyLinkedList<string> stringList{};
    stringList.pushBack("c");
    stringList.pushFront("a");

    // finding the mid point of string list
    Node<string> *prevNodeString = stringList.head;
    while(prevNodeString != NULL) {
        len++;
        prevNodeString = prevNodeString->next;
    }
    mid = ((len % 2) == 0) ? (len / 2) : (len + 1) / 2;
    prevNodeString = stringList.head;
    while(mid-- > 1)
        prevNodeString = prevNodeString->next;
    stringList.insert(prevNodeString, "b");
    print<MyLinkedList<string>, string>(stringList);

    return 0;
}