#include<iostream>
using namespace std;

int reverse(int arr[],int low,int high,int k){
    int temp;
    while(low<=high){
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low--;
        high++;
    }
      return arr;
}