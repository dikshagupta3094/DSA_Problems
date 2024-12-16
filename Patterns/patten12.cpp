#include <bits/stdc++.h>
using namespace std;

// void patten12(int n){
//     for(int i =1;i<=n;i++){
//         for(int j =1;j<=i;j++){
//             cout<<j<<" ";
//         }

//         for(int j=i+1; j<=(n*2)-i; j++){
//                 cout << "  ";
//        }
//         for(int j =i;j>0;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//  }

// void pattern8(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<2*n-1;j++){
//           if(j<i || j>=2*n-1-i){
//              cout<<" ";
//           }
//           else{
//             cout<<"*";
//           }
//         }
//         cout<<endl;
//     }
// }

void pattern9(int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (i < n)
            {
                if (j < (n - 1 - i) || j > (n - 1 + i))
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            else
            {
                if (j < i - n || j >= 3 * n - 1 - i)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }
}
int main()
{
    int n = 4;
    pattern9(5);
    return 0;
}