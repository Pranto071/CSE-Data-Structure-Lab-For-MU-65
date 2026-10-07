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
        head = NULL;
        tail = NULL;
    }

    void elementTail(int x){
        node *cur = new node;
        cur->value = x;
        cur->next = NULL;
        cur->previous = NULL;

        if(head == NULL && tail == NULL){
            head = tail = cur;
            return;
        }

        tail->next = cur;
        cur->previous = tail;
        tail = cur;
    }

    void elementHead(int x){
        node *cur = new node;
        cur->value = x;
        cur->next = NULL;
        cur->previous = NULL;

        if(head == NULL && tail ==NULL){
            head = tail = cur;
            return;
        }

        cur->next = head;
        head->previous = cur;
        head = cur;
    }

    void printListForward(){
        cout<<"Forward: NULL <-";
        node *current = head;
        if(current == NULL){
            cout<<"List is Empty"<<endl;
            return;
        }
        while (current != NULL){
            cout<<current->value;
            if(current->next != NULL){
                cout<<" <-> ";
            }
            current = current->next;
        }
        cout<<"-> NULL"<<endl;
    }

    void printListInverse(){
        cout<<"Reverse: NULL <-";
        node *cur = tail;
        if(cur == NULL){
            cout<<"List is Empty."<<endl;
            return;
        }
        while (cur != NULL){
            cout<<cur->value;
            if(cur->previous != NULL){
                cout<<" <-> ";
            }
            cur = cur->previous;
        }
        cout<<"-> NULL"<<endl;
    }
};

int main(){
    DoublyLinkedList d1;

    d1.elementTail(40);
    d1.elementTail(50);

    d1.elementHead(10);
    d1.elementHead(20);

    d1.printListForward();
    d1.printListInverse();
}
