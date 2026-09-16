#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

int main()
{
    node n1,n2;
    n1.data = 10;
    n2.data = 20;
    n1.next = &n2;
    cout<<"Accessing n2's data through n1: "<<n1.next->data<<endl;

    return 0;
}