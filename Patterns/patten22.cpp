#include <bits/stdc++.h>
using namespace std;

void patten22(int n){
         for(int i =1;i<=n;i++){
            for(int j=1;j<i+1;j++){ 
                cout<<(i*(i-1)/2)+j<<" ";
            }
            cout<<endl;
         }
}


int main(){
    patten22(6);
    return 0;
}