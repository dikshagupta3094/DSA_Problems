#include<iostream>
using namespace std;

int factorail(int n){
    int fact = 1;

    for( int i =1;i<=n;i++){
        fact= fact*i;
    }
    return fact;
}

int permutation(int n, int r){
    int numerator = factorail(n);
    int denomenator = factorail(r)*factorail(n-r);
    int ans = numerator/denomenator;

    return ans;
}

int main(){
    int n,r;
    cout <<" Enter n and r";
    cin>> n>>r;
  
    cout<<"Permutation of "<<n <<" "<< r<<" is "<<permutation(n,r);

    return 0;
}