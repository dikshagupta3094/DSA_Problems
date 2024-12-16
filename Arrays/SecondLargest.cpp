#include<iostream>
using namespace std;

	int print2largest(int arr[], int n) {
	   
	   int largest = arr[0];
	   int secondLargest = -1;
	   
	   for(int i =1;i<n;i++){
	       if((arr[i]>largest) && (largest>secondLargest)){
	         
	           secondLargest = largest;
                 largest = arr[i];
	       }
	       else{
	           if(arr[i]<largest && arr[i]>secondLargest){
	                secondLargest = arr[i];
	           }
	       }
	   }
	   return secondLargest;
	}

    int main(){
        int a[6] = {12 ,35,1, 10, 34, 1};

         cout<< print2largest(a,6);

         return 0;
    }