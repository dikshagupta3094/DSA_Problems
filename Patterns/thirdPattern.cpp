#include<iostream>
using namespace std;

int main(){

    for(int i=1;i<=5;i++){
        for(int j=1;j<=9;j++){
            if(j>=(9-(3+i-1))&&j<=(5+i)){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
//(9-(3+i-1))