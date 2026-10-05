#include<bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    node *next;
};

struct SinglyLinkedList
{
    node *head, *tail;

    SinglyLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void enqueue(int x){
        node *current = new node;
        current->value = x;
        current->next = NULL;

        if(head == NULL && tail == NULL){
            head = tail = current;
            return;
        }

        tail->next = current;
        tail = current;
    }

    void printList(){
        node *current = head;

        if(current == NULL){
            cout<<"Empty"<<endl;
            return;
        }

        while(current != NULL){
            cout<<current->value<<" -> ";
            current = current->next;
        }
        cout<<"NULL"<<endl;
    }
};


int main(){
    SinglyLinkedList s;

    s.enqueue(10);
    s.enqueue(20);
    s.enqueue(30);
    s.printList();
}