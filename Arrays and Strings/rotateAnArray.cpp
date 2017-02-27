
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
/* Find a number that occurs odd number of times
/************************************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
int rotateAnArray(int* arr,int len, int d);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout 
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	int arrayLength = sizeof(arr)/sizeof(arr[0]);

	int difference = 3;
	// cout<<"How many times do you want to rotate an Array by? has to be less than "<<arrayLength;
	// cin>>difference;
	if(difference>arrayLength){
		// exit program if the input is invalid
		return 0;
	}
	// Call your algorithms here
	
	rotateAnArray(arr, arrayLength,difference);
	
	

	return 0;
}

/**********************************************************
/*                <rotateAnArray>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
int rotateAnArray(int* arr,int len, int d){
	// Algorithm content goes here.	
	int tempArr[d];

	for(int i=0;i<d;i++){
		tempArr[i] = arr[i];		
	}

	for(int i=0;i<len-d;i++){
		arr[i] = arr[i+d];
	}

	for(int i=0;i<d;i++){
		arr[len-d+i] = tempArr[i];
	}

	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}

	return *arr;
}
