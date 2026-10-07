#include <bits/stdc++.h>
using namespace std;

struct  node
{
     int value;
     node *next;
     node *previous;
};

struct DoublyLinkedList
{
    node *head, *tail;

    DoublyLinkedList(){
        head==NULL;
        tail==NULL;
        cout<<"Doubly Linked List.";
    }
};

int main(){
    DoublyLinkedList d1;
    return 0;
}
