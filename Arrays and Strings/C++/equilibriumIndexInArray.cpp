
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
/* Equilibrium index in an array
/************************************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
int equilibriumIndexInArray(int* arr,int len);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout 
	int arr[] = {-7,1,5,2,-4,3,0};
	int arr2[] = {1,2,3,4,5,-15,0,-15,5,4,3,2,1};

	int arrayLength = sizeof(arr)/sizeof(arr[0]);
	int array2Length = sizeof(arr2)/sizeof(arr2[0]);

	
	// Call your algorithms here	
	equilibriumIndexInArray(arr, arrayLength);
	equilibriumIndexInArray(arr2, array2Length);
	

	return 0;
}

/**********************************************************
/*                <equilibriumIndexInArray>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
int equilibriumIndexInArray(int* arr,int len){
	// Algorithm content goes here.
	int leftSum =0;
	int rightSum=0;

	for(int i=0;i<len;i++){

		for(int j=0;j<i;j++){
			leftSum += arr[j];
		}

		for(int k=i+1;k<len;k++){
			rightSum += arr[k];
		}

		if(leftSum==rightSum){
			cout<<"Equilibrium found : "<<i<<endl;
			return i;			
		}
		leftSum=0;
		rightSum=0;
	}

	cout<<"No Equilibrium found";
	return 0;
}
