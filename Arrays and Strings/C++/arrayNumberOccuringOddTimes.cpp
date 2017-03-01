
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
int arrayNumberOccuringOddTimes(int* arr,int len);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout 
	int arr[] = {2,2,2,2,2,2,1,1,1,1,2,3,4,3,4,6,7,6,7,8,9,8,9};
	int arrayLength = sizeof(arr)/sizeof(arr[0]);
	// Call your algorithms here
	cout<<arrayNumberOccuringOddTimes(arr, arrayLength)<<endl;
	
	

	return 0;
}

/**********************************************************
/*                <arrayNumberOccuringOddTimes>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
int arrayNumberOccuringOddTimes(int* arr,int len){
	// Algorithm content goes here.	
	int occurences = 0;
	
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			if(arr[i]==arr[j]){
				occurences++;
			}
		}
		if(occurences%2!=0){
			return arr[i];
		}
		else{
			occurences=0;
		}
	}
}
