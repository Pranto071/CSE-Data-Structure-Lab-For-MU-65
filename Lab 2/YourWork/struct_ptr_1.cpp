#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
};

int main()
{
    node n1;
    n1.data = 50;

    node *ptr = &n1;
    cout<<ptr<<endl;

    return 0;
}