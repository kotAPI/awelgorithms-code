
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
/* 09_PatternChallenge
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void printPattern_09(int);

int main(){
	// user input
	int userInput;

	cout<<"Enter number of lines."<<endl;
	cin>>userInput;

	printPattern_09(userInput);
	return 0;
}

/**********************************************************
/*                <printPattern_09>
/*
/* @description : Prints a pyramid pattern of digits in increasing and then decreasing order.
/* @param       : Integer<input>
/* @return      : None, void
/* @complexity  : O(n)
/* @explanation : Algorithm that first prints an incremental pyramid for the first half of the height,
/*                then prints the lower half of the height as a decremental mirror pyramid. 
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
void printPattern_09(int input){
	// Outer loop loops input number of times
	for(int i=1;i<input;i++){
		
		// check for mid point of the pyramid
		if(i<=input/2){
			// for-loop to print the upper half if input <= input/2
			for(int j=1;j<=i;j++){
				cout<<j;
			}
		}else{ // Enter here if the i value is greater than mid point (input/2) of the pyramid height.
			// Print the lower half of the pyramid.
			for(int j=1;j<=input-i;j++){
				cout<<j;
			}
		}
		
		// Jump to newline when the inner loops have finished executing.
		cout<<endl;
	}
}
