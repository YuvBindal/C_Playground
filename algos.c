#include <stdio.h>
#include <math.h>
double calculateMean(int[], int);
double calculateStd(int[], int);
int maxRecursive(int[], int , int);
int maxRecurse(int[], int , int);
int factorial(int);
int summate(int[], int, int);
int power(int,int);
int main() {
	int arrayLength = 10;
	int myInts[] = {1,2,3,4,5,6,7,10,9,2};

	int min =myInts[0];
	int max = myInts[0];
	for (int i =0 ; i< arrayLength; i++ ) {
		if (myInts[i] < min) {
			min = myInts[i];
		}
		if (myInts[i] > max) {	
			max = myInts[i];
		}

	}
	

	printf("%d\n", max);
	printf("%d\n", min);
	printf("%d\n", max-min);
	double myMean = calculateMean(myInts, arrayLength);
	printf("%lf\n", myMean);
	double myStd = calculateStd(myInts, arrayLength);
	printf("%lf\n", myStd);
	int myMax = maxRecurse(myInts, 0, arrayLength-1);
	printf("%d\n", myMax);
	printf("%d\n", factorial(5));
	printf("%d\n", summate(myInts, 0 , arrayLength-1));
	printf("%d\n", power(10,3));


	return 0;
}

//calculating arithemtic sum
double calculateMean(int* myArray, int size) {
	int sum = 0;
	for (int i =0 ; i< size; i++) {
		sum += myArray[i];
	}

	return (double)sum/size;

}

double calculateStd(int* myArray, int size) {
	double summation = 0;
	double mean = calculateMean(myArray, size);
	for (int i=0; i< size;i++) {
		summation += (myArray[i] - mean) * (myArray[i] - mean);
	}
	return summation/size;

}
//divide and conquer approach
int maxRecursive(int* myArray, int start, int end) {
	if (start == end) {
		return myArray[start];
	} else {
		int mid = (start+end)/2;
		int leftRecursiveMax = maxRecursive(myArray, start, mid);
		int rightRecursiveMax = maxRecursive(myArray, mid +1, end);
		return (leftRecursiveMax > rightRecursiveMax)? leftRecursiveMax: rightRecursiveMax;
	}

}
int maxRecurse(int* myArray, int start, int end) {
	if (start == end) {
		return myArray[start];
	} 
	
	if (start +1 == end) {
		return (myArray[start] > myArray[end])? myArray[start]: myArray[end];
	}
	return maxRecurse(myArray, start + 1, end);	
	

}

int factorial(int n) {
	if (n<=1) {
		return 1;
	} else {
		return n * factorial(n-1);
	}

}

int summate(int* myArray, int start, int end) {
	if (start == end) {

		return myArray[end];
	} else {
		return myArray[start] + summate( myArray, start+1, end);


	}


}

int power(int i, int j) {
	if (j <= 1) {
		return i;
	} else {
		
		return i * power(i , j-1);
	}

}
