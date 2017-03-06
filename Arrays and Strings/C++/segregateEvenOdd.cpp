
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
/* Segregate even and odd numbers
/************************************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
int segregateEvenOdd(int* arr,int len);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout 
	int arr[] = {12, 34, 45, 9, 8, 90, 3,22, 31, 991, 112, 366, 424,411, 565, 566};
	int arrayLength = sizeof(arr)/sizeof(arr[0]);
	// Call your algorithms here
	segregateEvenOdd(arr, arrayLength);
	
	

	return 0;
}

/**********************************************************
/*                <segregateEvenOdd>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,doub etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
int segregateEvenOdd(int* arr,int len){
	// Algorithm content goes here.	
	int left=0,right=len-1;

	while(left<right){
		
		if(arr[left]%2==0 ){
			left++;
		}
		if(arr[right]%2!=0){
			right--;
		}
		if(arr[left]%2!=0 && arr[right]%2==0  ){
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}

		
	}

	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
}
