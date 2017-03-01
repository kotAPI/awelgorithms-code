
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
/* Maximum sum in an Array such that no two elements are adjacent
/************************************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
int maxNonAdjacentSum(int* arr,int len);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout 
	int arr[] = {93,2,1,64,23,65,3,7,8,78,3,85};
	int arrayLength = sizeof(arr)/sizeof(arr[0]);
	// Call your algorithms here
	maxNonAdjacentSum(arr, arrayLength);
	
	

	return 0;
}

/**********************************************************
/*                <maxNonAdjacentSum>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
int maxNonAdjacentSum(int* arr,int len){
	// Algorithm content goes here.	
	int maxSum=0;
	int numA=0;
	int numB=0;

	for(int i=0;i<len-2;i++){
		for(int j=i+2;j<len;j++){

			if(arr[i]+arr[j]>=maxSum){
				
				
				numA = arr[i];
				numB = arr[j];
				maxSum = numA+numB;

				// Max sum and numbers that contribute to it.
				cout<<maxSum<<" "<<numA<<" "<<numB<< endl;
			}

		}
	}

	cout<<maxSum;

	return maxSum;

}
