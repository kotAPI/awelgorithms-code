
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
/* Print all the LEADERS in the array
/************************************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
int leadersInAnArray(int* arr,int len);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout 
	int arr[] = {16, 17, 4, 3, 5, 2};
	int arrayLength = sizeof(arr)/sizeof(arr[0]);
	// Call your algorithms here
	leadersInAnArray(arr, arrayLength);
	
	

	return 0;
}

/**********************************************************
/*                <leadersInAnArray>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
int leadersInAnArray(int* arr,int len){
	// Algorithm content goes here.
	if(len ==0){
		return 0;
	}
	
	int great = 0;

	for(int i=0; i<len-1; i++){
		for(int j=i+1; j<len; j++){
			if(arr[i] < arr[j]){
				great = 0;
				break;
			}
			great = 1;
		}

		if(great){
			cout<<arr[i]<< " ";
			great = 0;
		}
		
	}
	cout<< arr[len-1];
	 return  1;
}
