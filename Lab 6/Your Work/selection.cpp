#include<bits/stdc++.h>
using namespace std;

void selectionSort(int ara[], int n){
    for(int i=0; i<n-1; i++){
        int min_index = i;
        for(int j=i+1; j<n; j++){
            if(ara[j]<ara[min_index]){
                min_index = j;
            }
        }
        if(min_index!=i){
            swap(ara[min_index],ara[i]);
        }
    }
}

void printArray(int ara[], int size){
    for(int i=0; i<size; i++){
        cout<<ara[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int ara[] = {64,25,12,22,11};
    int n = sizeof(ara)/sizeof(ara[0]);

    cout<<"Unsorted Array: ";
    printArray(ara,n);

    selectionSort(ara,n);

    cout<<"Sorted Array: ";
    printArray(ara,n);

    return 0;
}