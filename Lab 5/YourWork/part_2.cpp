#include<bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node *next;
};

struct Stack{
    Node *top;

    Stack(){
        top = NULL;
    }

    void push(int x){
        Node *newNode = new Node;
        newNode->value = x;

        newNode->next = top;
        top = newNode;

        cout<<x<<endl;
    }
};

int main(){
    Stack s;

    s.push(1000);
    s.push(2000);
    s.push(3000);

    return 0;
}