
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
/* Pair of Numbers add up to another in an array 
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void findPairofNumbersToAddUpToAnother(int* ,int, int);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout 
	int arr[] = {2,4,5,7,1,3};
	int additionNumber = 12;
	int arrayLength = sizeof(arr)/sizeof(arr[0]);
	// Call your algorithms here
	findPairofNumbersToAddUpToAnother(arr, arrayLength, additionNumber);
	
	

	return 0;
}

/**********************************************************
/*                <findPairofNumbersToAddUpToAnother>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
void findPairofNumbersToAddUpToAnother(int* arr,int len, int targetAdditionSum){
	// Algorithm content goes here.
	
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			//cout << arr[i] << " " << arr[j]<<endl;
			if(arr[i] + arr[j] == targetAdditionSum){
				cout<< arr[i] << " "<< arr[j]<<endl;
				return ;
			}
		}
	}

	
}
