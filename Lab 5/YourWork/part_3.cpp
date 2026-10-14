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

    int pop(){
        if(top == NULL){
            cout<<"Empty";
            return -1;
        }
        Node *temp = top;
        int popValue = temp->value;

        top = top->next;
        delete temp;

        return popValue;
    }

    void printStack(){
        if(top == NULL){
            cout<<"Stack is Empty";
            return;
        }
        Node *cur = top;
        while(cur != NULL){
            cout<<cur->value<<" ";
            cur = cur->next;
        }
    }
};

int main(){
    Stack s;

    s.push(1000);
    s.push(2000);
    s.push(3000);

    cout<<endl<<"After pushes: "<<endl;
    s.printStack();

    cout<<endl<<"Popped element: "<<s.pop()<<endl;

    cout<<endl<<"After popping: "<<endl;
    s.printStack();

    return 0;
}