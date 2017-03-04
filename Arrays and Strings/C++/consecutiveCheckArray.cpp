
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

/************************************************
/* Check if numbers in array are consecutive
/************************************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
bool consecutiveCheckArray(int* arr,int len);
void someSortingAlgorithm(int* arr,int length);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout 
	int arr[] = {5, 2, 3, 1, 4};
	int arr2[] = {34, 23, 52, 12, 3};

	int arrayLength = sizeof(arr)/sizeof(arr[0]);
	int array2Length = sizeof(arr2)/sizeof(arr2[0]);

	
	// Call your algorithms here	
	cout<<consecutiveCheckArray(arr, arrayLength)<<endl;
	cout<<consecutiveCheckArray(arr2, array2Length)<<endl;
	

	return 0;
}

/**********************************************************
/*                <consecutiveCheckArray>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
bool consecutiveCheckArray(int* arr,int len){
	// Algorithm content goes here.
	someSortingAlgorithm(arr,len);

	int minElement =arr[0];

	for(int i=0;i<len;i++){
		if(arr[i]==minElement){
			minElement++;			
		}
		else{
			return false;
		}		
	}
	return true;
}

void someSortingAlgorithm(int* arr,int length){

	for(int i=0;i<length;i++){
		for(int j=i+1;j<length;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
