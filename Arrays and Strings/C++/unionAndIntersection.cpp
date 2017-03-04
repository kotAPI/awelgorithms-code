
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
int unionAndIntersection(int* arr,int len, int* arr2,int len2);
void someSortingAlgorithm(int*,int);
int removeDuplicates(int*,int);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout 
	int arr[] = {1, 3, 4, 5, 7};
	int arr2[] = {2, 3, 5, 6};

	int arrayLength = sizeof(arr)/sizeof(arr[0]);
	int arrayLength2 = sizeof(arr2)/sizeof(arr2[0]);
	// Call your algorithms here
	unionAndIntersection(arr, arrayLength, arr2, arrayLength2);
	
	// Union[]        = {1, 2, 3, 4, 5, 6, 7}
	// Intersection[] = {3,5}

	return 0;
}

/**********************************************************
/*                <unionAndIntersection>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
int unionAndIntersection(int* arr,int len, int* arr2,int len2){ //simple one first
	// Algorithm content goes here.
	// 
	int unionArray[len+len2];
	int counter = 0;

	// UNION START
	// *************************************************************
	for(int i=0;i<len;i++){
		unionArray[i] = arr[i];
	}

	for(int j=0; j<len2; j++){
		unionArray[j+len] = arr2[j];
	}

	cout<<endl;

	someSortingAlgorithm(unionArray, len+len2);
	
	int totalLen = removeDuplicates(unionArray,len+len2);

	cout<<"Union: ";
	for(int i=0;i<totalLen;i++){
		cout<<unionArray[i]<<" ";
	}
	cout<<endl;
	//UNION END
	//// *************************************************************

	// INTERSECTION START
	// *************************************************************
	cout<<"Intersection: ";
	for(int i=0;i<len;i++){
		for(int j=0;j<len2;j++){
			if(arr[i]==arr2[j]){
				cout<<arr[i]<<" ";
			}
		}
	}
	cout<<endl;
	return* arr;
}


void someSortingAlgorithm(int* arr,int len){

	//Bubble sort. Yeah, don't use this in real life situations
	for(int i=0;i<len-1;i++){
		for(int j=i;j<len;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}		
	}
}

int removeDuplicates(int *arr,int len){
	int temp[len];
	int counter =0;	

	for(int i=0;i<len;i++){
		if(arr[i]==arr[i+1]){
			continue;
		}
		else{
			temp[counter++]=arr[i];
		}
	}

	//Transferring values from temp array to original pointer
	for(int i=0;i<counter;i++){
		arr[i]=temp[i];
	}
	//Returning the original array.
	return counter;
}