
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
/* Segregate 0s and 1s in an array
/************************************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
int segregate01(int* arr,int len);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout 
	int arr[] = {0,1,1,1,0,0,0,0,1,1,1,1,1,0,1,0,1,0,0,1,1,1,0,1,0,1,0,0,1};
	
	int arrayLength = sizeof(arr)/sizeof(arr[0]);
	// Call your algorithms here
	segregate01(arr, arrayLength);
	
	

	return 0;
}

/**********************************************************
/*                <segregate01>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
int segregate01(int* arr,int len){
	// Algorithm content goes here.	
	
	int count=0;

	for(int i=0;i<len;i++){
		if(arr[i]==1){
			count++;
		}
	}

	for(int i=0;i<=len;i++){
		if(i<=count){
			arr[i]=0;
		}
		else{
			arr[i]=1;
		}
	}
	
	for(int i=0;i<len;i++){
		cout<<arr[i];
	}

	return *arr;
}
