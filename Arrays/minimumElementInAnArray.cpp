#include<iostream>

using namespace std;

int GetMinimumElementInArray(int* array, int size){
	int minElement=array[0]; //Initialize the minimum element it to first element of the array
	
	//Loop through the array
	for(int i=0;i<size;i++){
		// If an element is lesser than the present minElement, reassign minElement to curr element.
		if(minElement > array[i]){ 
			minElement = array[i];
		}
	}

	// Return minElement on completion
	return minElement; 
}


int main(){
	int testArr[] = {10,9,5,6,7,8,2,1,3,4};

	int arrSize = sizeof(testArr)/sizeof(testArr[0]); // Size of the passed array. 
	cout<<GetMinimumElementInArray(testArr,arrSize); 

	return 1;
}

