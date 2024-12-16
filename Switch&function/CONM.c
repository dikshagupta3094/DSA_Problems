// #include<stdio.h>
// #include<math.h>
// #define EPSILON 0.001

// float f(float x)
// {
//     return x*x - x -1;
// }

// float findValueAt(float x)
// {
//     return (x+(1/x));
// }
// float differentiate(float x)
// {
//     return (-1/pow(x,2));
// }

// int main()
// {
//     int maxIteration,i;
//     float a,b,x,x0;
//     printf("Enter Maximum no of Iterations\n");
//     scanf("%d",&maxIteration);

// //......Compute a and b............. 
   
//    do
//    {
//         printf("Enter the value of a and b(starting boundary)");
//         scanf("%f%f",&a,&b);
//         if(f(a)*f(b)>0)
//         {
//            printf("Boundary Values are Invalid\n");
//            continue;
//         }
//         else
//         {
//             printf("Roots Lie between %f and %f\n",a,b);
//             break;
//         }
//     } while(1);

//     //find x0
//     x0= (a+b)/2;
//     //check if the function form used is valid or invalid
//     if(fabs(differentiate(x0))<1)
//         printf("Function Form is Correct. Iteration Method can be applied\n");
//     else
//     {
//         printf("Function Form is NOT Correct. Iteration Method CAN'T be applied\n");
//         return 0;
//     }

//     //Apply Successive approximation to find the root b/w a and b
//     //..........Find root............   
    
//     for(i=1;i<=maxIteration;i++)
//     {
//       x = findValueAt(x0);   //find the mid point
      
//       if(fabs(x-x0)<EPSILON)
//       {
//            printf("Iterations=%d  Final Root=%f\n",i,x);
//            return 0;
//       }      
//       printf("Iterations=%d  Roots=%f\n",i,x); 
//       x0=x;
//     }
//     printf("Root=%f  Total Iterations=%d",x,--i);
//     return 0;
// }


// C program to find roots of a quadratic equation
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void findRoots(int a, int b, int c)
{
	// If a is 0, then equation is not quadratic, but

	if (a == 0) {
		printf("Invalid");
		return;
	}
	int d = b * b - 4 * a * c;
	double sqrt_val = sqrt(abs(d));

	if (d > 0) {
		printf("Roots are real and different \n");
		printf("%f\n%f", (double)(-b + sqrt_val) / (2 * a),
			(double)(-b - sqrt_val) / (2 * a));
	}
	else if (d == 0) {
		printf("Roots are real and same \n");
		printf("%f", -(double)b / (2 * a));
	}
	else // d < 0
	{
		printf("Roots are complex \n");
		printf("%f + i%f\n%f - i%f", -(double)b / (2 * a),
			sqrt_val / (2 * a), -(double)b / (2 * a),
			sqrt_val / (2 * a));
	}
}

int main()
{
	int a = 1, b = -7, c = 12;
	// Function call
	findRoots(a, b, c);
	return 0;
}
