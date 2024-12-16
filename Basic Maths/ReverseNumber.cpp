#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n){
int num;
int reverseNum = 0;

while(n!=0){
   
   num = n%10;
   reverseNum = reverseNum*10+num;
    n = n/10;
}
  return reverseNum;
}

int main(){
    int n;
    cin>>n;
    cout<< reverseNumber(n)<<endl;
    return 0;
}