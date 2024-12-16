#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n==0){
        return 0;
    }
    else{
        fun(n-1); //It will print from 1 to n
        cout<<n<<endl;
        //fun(n-1)   It will printfrom n to 1
        
    }
}
int main(){
    fun(5);
    return 0;
}