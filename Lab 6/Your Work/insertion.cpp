#include<bits/stdc++.h>
using namespace std;

void insertionSort(int ara[], int n){
    for(int i=1; i<n; i++){
        int key = ara[i];
        int j = i-1;

        while(j>=0 && ara[j]>key){
            ara[j+1] = ara[j];
            j = j-1;
        }
        ara[j+1] = key;
    }
}

void printArray(int ara[], int size){
    for(int i=0; i<size; i++){
        cout<<ara[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int ara[] = {12,11,13,5,6};
    int n = sizeof(ara)/sizeof(ara[0]);

    cout<<"Unsorted Array: ";
    printArray(ara,n);

    insertionSort(ara,n);

    cout<<"Sorted Array(Insertion Sort): ";
    printArray(ara,n);
}