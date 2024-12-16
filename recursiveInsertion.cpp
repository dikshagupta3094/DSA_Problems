#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    if(n==0) return ;

    for(int i = n-1;i>=0;i--){
        if(arr[n-1]<arr[i]){
            swap(arr[n-1],arr[i]);
        }
    }
    insertionSort(arr,n-1);
}

int main(){
    int arr[5] = {4,1,3,9,7};
    insertionSort(arr,5);
    cout<<"Array after insertion sort ";
    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}