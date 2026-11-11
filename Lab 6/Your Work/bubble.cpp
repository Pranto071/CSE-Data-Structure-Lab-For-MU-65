#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

void printArray(int a[], int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(a)/sizeof(a[0]);

    cout<<"Unsorted Array: ";
    printArray(a,n);

    bubbleSort(a,n);

    cout<<"Sorted Array(Bubble sort): ";
    printArray(a,n);
}