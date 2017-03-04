
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
/* Find two repeating elements in an Array
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void repeatingElementsInArray(int* arr,int arrLen);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout 
	int testArray[] ={4, 2, 4, 5, 2, 3, 1};
	
	int arrayLength = sizeof(testArray)/sizeof(testArray[0]);

	// Call your algorithms here
	repeatingElementsInArray(testArray,arrayLength);

	return 0;
}

/**********************************************************
/*                <repeatingElementsInArray>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
void repeatingElementsInArray(int* arr,int arrLen){
	// Algorithm content goes here.
	for(int i=0;i<arrLen;i++){
		for(int j=i+1;j<arrLen;j++){
			if(arr[i]==arr[j]){
				cout<<arr[i]<<" ";
			}
		}
	}
	cout<<endl;
}
