#include<bits/stdc++.h>
using namespace std;

bool chkPalindrome(string &s, int left, int right){
  
  // if(s[left]==s[right]){
  //   return chkPalindrome(s,++left,--right);
  // }
  // else if(s[left]!=s[right]){
  //     return false;
  // }
  // else{
    
  // }
  if((left>=right)){
    return true;
  }
   if(s[left]!=s[right]){
      return false;
     }
     chkPalindrome(s,++left,--right);
      return true;
     
    }
   
    
int main(){
    string str = "ABBA";
    bool ans = chkPalindrome(str,0, str.length()-1);
   if(ans==false){
    cout<<"Not Palindrome";
   }
   else{
    cout<<"palindrome";
   }
   return 0;
}
