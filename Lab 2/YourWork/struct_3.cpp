#include<bits/stdc++.h>
using namespace std;

struct student{
    int id;
    float cgpa;
};


int main()
{
    student ar[3];
    ar[0].id = 1; ar[0].cgpa = 3.75;
    ar[1].id = 2; ar[1].cgpa = 3.25;
    ar[2].id = 3; ar[2].cgpa = 3.95;

    for(int i=0; i<3; i++){
        cout<<"Student "<<i+1<<" ID: "<<ar[i].id<<", CGPA: "<<ar[i].cgpa<<endl;
    }

    return 0;
}