#include<bits/stdc++.h>
using namespace std;

struct address{
    string city;
    int zipcode;
};

struct student{
    string name;
    address studentAddress;
};


int main()
{
    student s1;
    cin>>s1.name>>s1.studentAddress.city>>s1.studentAddress.zipcode;
    cout<<s1.name<<" lives in "<<s1.studentAddress.city<<". Post code: "<<s1.studentAddress.zipcode<<endl;
    return 0;
}