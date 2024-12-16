#include<iostream>
using namespace std;

int main(){
int n;

cout<<"Enter n";
cin>>n;
    for(int i =1;i<=n;i++){

        for(int j=1;j<=n;j++){
          cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// for reverse print
//    for(int i =n;i>0;i--){

//         for(int j=n;j>0;j--){
//           cout<<j<<" ";
//         }
//         cout<<endl;
//     }