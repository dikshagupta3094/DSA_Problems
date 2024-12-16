#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
	// Write your code here.
	    // int cnt =0;

		// while(n!=0){
		// 	n = n/10;
		// 	cnt++;
		// }
		// return cnt;//Time complexity - O(n), Space complexity - O(1)

        // string s = to_string(n);
        // return s.length(); //Time complexity - O(1), Space complexity - O(1)
       
       int x = floor(log10(n)+1);//Time complexity - O(1), Space complexity - O(1)
       
       return x;
         
}

int main(){
    int n;
    cin>>n;
    cout<<countDigits(n);

    return 0;
}