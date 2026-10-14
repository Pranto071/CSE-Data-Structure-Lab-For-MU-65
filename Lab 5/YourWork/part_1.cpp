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

    bool isEmpty(){
        return top == NULL;
    }
};


int main()
{
    Stack s;

    if(s.isEmpty()){
        cout<<"The Stack is Empty"<<endl;
    }
}