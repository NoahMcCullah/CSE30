#ifndef FindMin_h
#define FindMin_h

// Declare and define the findMin function here
int findMin(int arr[], int begin, int end){

	int max = 2147483647;


	int currentMin;

	for(int i = begin; i < end; i++){
			if(arr[i] < max){
				max = arr[i];
				currentMin = arr[i];
			}
	}
	return currentMin;
}
// Do not write any code below this line
#endif