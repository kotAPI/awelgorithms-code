
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
/* Reverse An Array
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
int reverseAnArray(int* arr,int len);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout 
	int arr[] = {5,4,3,2,1};
	int arrayLength = sizeof(arr)/sizeof(arr[0]);
	// Call your algorithms here
	reverseAnArray(arr, arrayLength);
	
	

	return 0;
}

/**********************************************************
/*                <reverseAnArray>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
int reverseAnArray(int* arr,int len){
	// Algorithm content goes here.
	
	for(int i=0;i<len/2;i++){
		int temp = arr[i];
		arr[i] = arr[len-i-1];
		arr[len-i-1] = temp;
	}

	return *arr;
}
