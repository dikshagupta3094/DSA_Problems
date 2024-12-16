// #include<iostream>
// using namespace std;

// int main(){
//     int total_amout = 1330;

//     int ch;

//     cout<<"Enter the num";
//     cin>>ch;

// switch (ch)
// {
// case 1:{
//  int val = total_amout/100;
//     int newVal = val*100;
//     int finall = total_amout-newVal;
//     cout<<val<<" notes required";
//     break;
// }
      
//    default:{
//       cout<<"Invalid choice";
//        break; 
//  }
    
//   }
// }



#include <bits/stdc++.h>
using namespace std;

double diff(double n,double mid)
{
	if (n > (mid*mid*mid)){
          return (n-(mid*mid*mid));
    }	
	else{
            return ((mid*mid*mid) - n);
        }
}
double cubicRoot(double n)
{
	double start = 0, end = n;
	double e = 0.0000001;

	while (true){
		double mid = (start + end)/2;
		double error = diff(n, mid);

		if (error <= e)
			return mid;
		if ((mid*mid*mid) > n)
			end = mid;
		else
			start = mid;
	}
}

int main(){
	double n = 3;
	printf("Cubic root of %lf is %lf\n",
           n, cubicRoot(n));
	return 0;
}
