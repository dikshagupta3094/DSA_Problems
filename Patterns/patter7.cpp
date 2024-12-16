#include<bits/stdc++.h>
using namespace std;

void patten7(int n){
                for(int i = n;i>0;i--){
                for(int j=1;j<2*n;j++){
                    if(j>=n+1-i&&j<=n-1+i){
                        cout<<"*";
                    }
                    else{
                        if(i+j<n+1)
                        cout<<" ";
                    }
                }
                cout<<endl;
            }
}


void patten8(int n){
    for(int i =1;i<=n;i++){
        for(int j =1;j<=(n+1-i);j++){
            cout<<" ";
        }

         for(int j =1;j<=(i*2)-1;j++){
            cout<<"*";
        }
        
         for(int j =1;j<=(n+1-i);j++){
            cout<<" ";
        }

     cout<<endl;
    }
}
    // void printTriangle(int n) {
    //     // code here
    //     for(int i =1;i<=n;i++){
            
    //         for(int j =1;j<=i;j++){
    //             char ch = 'A'+j-1;
    //             cout<<ch;
                
    //         }
    //         cout<<endl;
    //     }
    // }
int main(){
    int n;
    cin>>n;
   patten7(n);
   patten8(n);

    return 0;
}