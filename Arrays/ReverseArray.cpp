#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int start = 0;
    int end = size-1;
    int temp;
    while(start<=end){
       temp = arr[start];
       arr[start] = arr[end];           // we can also used swap() function to swap an array
       arr[end] =  temp;                //swap(arr[start],arr[end])
             start++;                   //start++;
             end--;                     //  end--;      
    }
}

void printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5] = {-1,2,3,4,-5};
      
    reverseArray(arr,5);
    printArray(arr,5);

    return 0;
    
}