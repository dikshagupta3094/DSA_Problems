#include<iostream>
using namespace std;

int getMin(int arr[],int size){
    int min = arr[1];
    for(int i =1;i<size;i++ ){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int getMax(int arr[],int size){
    int max = arr[1];
    for(int i =1;i<size;i++ ){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"maximum: "<<getMax(arr,n)<<endl;
     cout<<"minimum: "<<getMin(arr,n)<<endl;

     return 0;
}