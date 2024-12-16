#include<iostream>
using namespace std;

int MaxPrice(int prices[],int n){
    int mn = prices[0];
    int result = 0;

    if(n<=1){
        return 0;
    }
    else{
          for(int i =1;i<n;i++){
         result = max(prices[i]-mn,result);
          mn = min(prices[i],mn);
       }
           return result;
    }
   
}

int main(){
    int arr[] = {};
   
    cout<<MaxPrice(arr,0);

    return 0;
}