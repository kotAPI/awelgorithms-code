
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
/* 14_PatternChallenge
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void printPattern_14(int);

int main(){
	// user input
	int userInput;

	cout<<"Enter number of lines."<<endl;
	cin>>userInput;

	printPattern_14(userInput);
	return 0;
}

/**********************************************************
/*                <printPattern_14>
/*
/* @description : Prints a pyramid pattern in increasing and then in a decreasing way after reaching the mid point,vice versa.
/* @param       : Integer<input>
/* @return      : None, void
/* @complexity  : O(n)
/* @explanation : Algorithm to print incrementing and decrementing lines in a single line up til mid point of 
/*                in an increasing order of the pyramid length then repeat the same pattern, now now in increasing 
/*                length after the mid point. We calculate mid point of the pyramid 'mid' depending if its even or odd
/*                We execute two conditional loops, one for increasing digits, one for decreasing, depending on the 
/*                value of i, up til mid point. And then execute another pair of loops in else condition block to do
/*                the reverse of the if-block. One loop for incrementing and another for decrementing the digits, but 
/*                now, the length increases instead of decreasing like in the if-block by using 'mid-i' as a limit.
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
void printPattern_14(int input){
	
	int mid;
	// Check if the user input is even or odd, choose a valid mid point depending on the input
	if(input%2==0){
		// Mid/2 if the input is even. (if input is 8, mid is 4, 8/2 = 4).
		mid = input/2; 
	}
	else{
		// Mid/2+1 if the input is odd. (if input is 9, mid is 5, 9/2+1 = 5).
		mid = input/2 +1;
	}

	// Outer loop loops input number of times
	for(int i=0;i<=input;i++){

		// Skip iteration to avoid blank execution, when mid==i, mid-i=0. This renderes the inner loops useless.
		// Call it a hack if you will to skip the mid==i execution.
		if(i==mid){continue;}

		// Execute this loop if i<mid
		if(i<mid){
			// Top pyramid left incremental loop
			for(int j=1;j<=mid-i;j++){
				cout<<j;
			}
			// Top pyramid right decremental loopo 
			for(int k=mid-i;k>0;k--){
				cout<<k;
			}
		}
		// If i>mid
		else{
			// Bottom pyramid left incremental loop
			for(int j=1;j<=i-mid;j++){
				cout<<j;
			}
			// Bottom pyramid right decremental loop
			for(int k=i-mid;k>0;k--){
				cout<<k;
			}
		}
		// Add a newline once the inner loops have finished executing.
		cout<<endl;
	}
	
}
