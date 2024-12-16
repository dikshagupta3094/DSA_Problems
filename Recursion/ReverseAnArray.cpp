#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
        // cout<<"Diksha";
    }
}

void revArray( int low ,int high, int arr[]){
     if(low<=high){
        swap(arr[low],arr[high]);
        cout<<arr[low]<<" "<<arr[high]<<" ";
       revArray(low++, high--, arr);
       
     } 
}

int main(){
    int arr[5] = {1,2,3,4,5}; 
      revArray(0,5-1,arr);
    //   printArray(arr,5);
    return 0;
}