
/*******************************************************************************************************
/*      ___                   _                      _  _    _                      
/*     / _ \                 | |                    (_)| |  | |                     
/*    / /_\ \__      __  ___ | |  __ _   ___   _ __  _ | |_ | |__   _ __ ___   ___  
/*    |  _  |\ \ /\ / / / _ \| | / _` | / _ \ | '__|| || __|| '_ \ | '_ ` _ \ / __| 
/*    | | | | \ V  V / |  __/| || (_| || (_) || |   | || |_ | | | || | | | | |\__ \ 
/*    \_| |_/  \_/\_/   \___||_| \__, | \___/ |_|   |_| \__||_| |_||_| |_| |_||___/ 
/*                                __/ |                                             
/*                               |___/                                                                                                                                             
/******************************************************************************************************/

/***********************************
/* Get minimum element in an array
/***********************************/

#include<iostream>
using namespace std;

// Function Prototype
int GetMinimumElementInArray(int*, int);

int main(){
	int testArr[] = {10,9,5,6,7,8,2,1,3,4};

	// Calculating array size to pass to the argument of the algorithm function,
	// since you can't really find out the length of an array since you pass the pointer
	// of the array as an argument and the size of the whole array is lost
	// to avoid this, we calculate the length before hand and pass it as an argument.
	int arrSize = sizeof(testArr)/sizeof(testArr[0]); 

	cout<<GetMinimumElementInArray(testArr,arrSize); 

	return 1;
}


/**********************************************************
/*                <printPattern_02>
/*
/* @description : Loops through the array and returns the minimum element
/* @param       : Integer<input>, 'input' represents the n value in nxn grid.
/* @return      : None, void
/* @complexity  : 0(n)
/* @explanation : An algorithm that iterates over the array and tracks the least element it's
                  encountered, reassigns the new, lower element if its lower than the current lower
                  value. The lowest value is found upon completion of iteration in the end. 
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
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




