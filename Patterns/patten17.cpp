#include<bits/stdc++.h>
using namespace std;

void patten17(int n){
      
        for(int i =1;i<=n;i++){
             char ch ='A';
            for(int j =1;j<2*n;j++){
                if((j>=n+1-i)&&(j<=n-1+i)){
                   cout<<ch;
                    if(j>=(2*n)/2)
                    ch--;
                    else
                    ch++;  
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }

    // for(int i = 1;i<=n;i++){
                 
    //             for(int j=1;j<2*n;j++){
                    
    //                 if((j>=n+1-i)&&(j<=n-1+i)){
    //                     cout<<"*";
    //                 }
    //                 else{
    //                     // if(i+j<n+1)
    //                     cout<<" ";
    //                 }
    //             }
    //             cout<<endl;
    //         }
}

int main(){
    int n =4;
    patten17(n);
    return 0;
}