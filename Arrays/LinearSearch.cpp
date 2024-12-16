#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int ele){
    
    for(int i =0;i<size;i++){
        if(ele==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[50];
    cout<<"Enter arrays element"<<endl;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int x;
     cout<<"Element that to be search:";
      cin>>x;
     cout<<"Element found at "<<linearSearch(a,n,x);
     

     return 0;
    }

    //Time complexity: O(n) where n is number of input 