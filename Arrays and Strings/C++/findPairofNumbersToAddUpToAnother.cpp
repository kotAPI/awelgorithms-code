
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
/* Pair of Numbers add up to another in an array 
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void findPairofNumbersToAddUpToAnother(int* ,int, int);

// For method 2;
void findPairofNumbersToAddUpToAnother_optimized(int* arr,int len, int targetAdditionSum);
void someSortingAlgorithm(int* arr,int length);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout 
	int arr[] = {1,2,5,5,15,22,55};
	int additionNumber = 20;
	int arrayLength = sizeof(arr)/sizeof(arr[0]);
	// Call your algorithms here
	findPairofNumbersToAddUpToAnother_optimized(arr, arrayLength, additionNumber);
	
	

	return 0;
}

/**********************************************************
/*                <findPairofNumbersToAddUpToAnother>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
void findPairofNumbersToAddUpToAnother(int* arr,int len, int targetAdditionSum){
	// Algorithm content goes here.
	
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			//cout << arr[i] << " " << arr[j]<<endl;
			if(arr[i] + arr[j] == targetAdditionSum){
				cout<< arr[i] << " "<< arr[j]<<endl;
				return ;
			}
		}
	}

	
}


/**********************************************************
/*                <findPairofNumbersToAddUpToAnother>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
void findPairofNumbersToAddUpToAnother_optimized(int* arr,int len, int targetAdditionSum){

	int left=0;
	int right=len-1;

	someSortingAlgorithm(arr,len);

	while(left<right){
		if(arr[left]+arr[right] > targetAdditionSum){
			right--;
		}
		if(arr[left]+arr[right] < targetAdditionSum){
			left++;
		}
		if(arr[left]+arr[right] == targetAdditionSum){

			cout<<"Pair found :"<<arr[left]<< " "<<arr[right]<<endl;
			right--;
			left++;
		}

	}
}


// Need this for Method 2, coz this optimized method only works for a sorted array.
void someSortingAlgorithm(int* arr,int length){
	for(int i=0;i<length;i++){
		for(int j=i+1;j<length;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}