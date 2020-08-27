#ifndef InsertionSort_h
#define InsertionSort_h

#include "Swap.h"

// Declare and define the insertion sort function below
// You *MUST* use the swap operation defined in Swap.h to swap elements
void insertion_sort(int arr[], int size){
	int n = size;

	for(int i = 1; i < n; i++){

		if(i > 0 && (arr[i-1] > arr[i])){
			swap(arr, arr[i-1], arr[i]);
		}
	}

}


// Do not write any code below this line
#endif