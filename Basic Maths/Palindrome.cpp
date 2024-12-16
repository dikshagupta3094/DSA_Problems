#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n){
    int reverseNum = 0;
    int originalNum = n;
    int num;

    while(n>0){
        num = n%10;
        reverseNum = reverseNum*10+num;
        n = n/10;
    }
    if(originalNum==reverseNum){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    int n;
    cin>>n;
    cout<< checkPalindrome(n);

  
     return 0;
}