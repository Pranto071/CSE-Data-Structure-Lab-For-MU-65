#include<bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    int id;
    int age;
};

int main()
{
    
    student s1;
    cin>>s1.name>>s1.id>>s1.age;
    cout<<"Name: "<<s1.name<<endl<<"ID: "<<s1.id<<endl<<"Age: "<<s1.age<<endl;
    return 0;
}