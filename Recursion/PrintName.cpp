#include<bits/stdc++.h>
using namespace std;
int cnt =0;
void fun(int n){
  if(n==cnt) return;

  cout<<"Diksha"<<endl;
  cnt++;
  fun(n);
}

int main(){
    fun(5);
    return 0;
}