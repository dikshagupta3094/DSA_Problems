#include <bits/stdc++.h>
using namespace std;

int lenOfLongSubarr(int A[], int N, int K)
{
    cout<<"Hello"<<endl;
    // Complete the function
    int cnt = 0;
    int sum = 0;
    int  res = 0;
    int i =0;
    int j =0;
    while (i < N)
    {   
        if (sum != K && j < N)
        {
            sum += A[j];
            cnt++;
            j++;
        }
        if (sum == K)
        {
            sum = 0;
            j = 0;
            i++;
            j = i;
            cout<<"J:"<<j<<endl;
            cout<<"I:"<<j<<endl;
            res = max(res, cnt);        
        }
    }

    return res;
}

int main()
{
    int a[5] = {2 ,3, 5, 1, 9};
    long long k = 10;
    int len = lenOfLongSubarr(a, k,5);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}