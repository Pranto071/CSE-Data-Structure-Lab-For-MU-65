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

    bool isEmpty(){
        return front == NULL;
    }
};


int main(){
    Queue q;

    if(q.isEmpty()){
        cout<<"The Queue is Empty"<<endl;
    }
    return 0;
}