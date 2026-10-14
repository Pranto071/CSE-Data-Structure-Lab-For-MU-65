#include<bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node *next;
};

struct Queue{
    Node *front;

    Queue(){
        front = NULL;
    }

    void push_back(int x){
        Node *newNode = new Node;
        newNode->value = x;
        newNode->next = NULL;

        if(front == NULL){
            front = newNode;
            cout<<x<<endl;
            return;
        }
        Node *cur = front;
        while(cur->next != NULL){
            cur = cur->next;
        }
        cur->next = newNode;

        cout<<"Pushed "<< x <<" to the back."<<endl;
    }
};


int main(){
    Queue q;

    q.push_back(1000);
    q.push_back(30);
    q.push_back(40);
    return 0;
}