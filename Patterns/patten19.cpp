#include<bits/stdc++.h>
using namespace std;

void patten19(int n){
     int inSpace = 0;
        
        for(int i = 1;i<=n;i++){
            for (int j =1;j<=n-i+1;j++){
                cout<<"*";
            }
            for(int j =1;j<=inSpace;j++){
                cout<<" ";
            }
            for(int j =n+i;j<= 2*n;j++){
                cout<<"*";
            }
            
            inSpace+= 2;
            cout<<endl;
        }  

       inSpace = 2*n-2; 
        for(int i =1;i<=n;i++){
           for(int j =1;j<=i;j++){
                cout<<"*";
            }

           for(int j =1;j<=inSpace;j++){
             cout<<" ";
           }
            for (int j =1;j<=i;j++){
                cout<<"*";
            }
           inSpace-= 2;
           cout<<endl;
        }  
}

int main(){
    patten19(5);
    return 0;
}