#include <bits/stdc++.h>
using namespace std;

string decimal2binary(int n)
{
    string res;
    while (n != 0)
    {
        res += to_string(n % 2);
        n = n / 2;
    }
    reverse(res.begin(),res.end());
    return res;  
}

int main()
{
   cout<<"Result:"<<decimal2binary(7);
    return 0;
}

