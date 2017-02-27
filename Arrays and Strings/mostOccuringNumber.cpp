
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
/* Find most occuring number in an Array
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
int mostOccuringNumber(int* arr,int len);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout 
	int arr[] = {2,2,2,2,1,4,2,2,2,63,1,1,1,1,15,72,4,3,2,6,7,1,3};
	int arrayLength = sizeof(arr)/sizeof(arr[0]);
	// Call your algorithms here
	cout<<mostOccuringNumber(arr, arrayLength);
	
	

	return 0;
}

/**********************************************************
/*                <mostOccuringNumber>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
int mostOccuringNumber(int* arr,int len){
	// Algorithm content goes here.
	
	int occurences = 0;
	int currentOccurences =0;
	int highestOccuringNumber=0;

	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			if(arr[i]==arr[j]){
				currentOccurences++;
			}
		}
		if(currentOccurences>occurences){
			highestOccuringNumber = arr[i];
			occurences = currentOccurences;
		}
		currentOccurences =0;
	}

	return highestOccuringNumber;
}
