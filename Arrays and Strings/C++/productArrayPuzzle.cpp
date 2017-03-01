
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
int productArrayPuzzle(int* arr,int len);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout 
	int arr[] = {10, 3, 5, 6, 2};
	int arrayLength = sizeof(arr)/sizeof(arr[0]);
	// Call your algorithms here
	productArrayPuzzle(arr, arrayLength);
	
	

	return 0;
}

/**********************************************************
/*                <productArrayPuzzle>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
int productArrayPuzzle(int* arr,int len){ //simple one first
	// Algorithm content goes here.
	
	int product =1;

	for(int i=0;i<len;i++){
		product *= arr[i];
	}

	for(int i=0;i<len;i++){
		arr[i] = product/arr[i];

		cout<<arr[i]<<endl;
	}
}
