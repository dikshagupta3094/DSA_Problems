#include<bits/stdc++.h>
using namespace std;

void patten20(int n){
    int space = 2*n-2;
        
        for(int i =1;i<=2*n;i++){
            int star = i;
            if(i>n) star = 2*n-i;

            for(int j =1;j<=star;j++){
                cout<<"*";
            }
            
            for(int j = 1;j<=space;j++){
                cout<<" ";
            }
            for(int j =1;j<=star;j++){
                cout<<"*";
        }
          cout<<endl;

          if(i<n) space-= 2;
          else space+= 2;
    }    
}

int main(){
    patten20(2);
    return 0;
}