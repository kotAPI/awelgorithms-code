
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
/* 12_PatternChallenge
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void printPattern_12(int);

int main(){
	// user input
	int userInput;

	cout<<"Enter number of lines."<<endl;
	cin>>userInput;

	printPattern_12(userInput);
	return 0;
}

/**********************************************************
/*                <printPattern_12>
/*
/* @description : Prints a pyramid pattern in increasing and then in a decreasing way after reaching the mid point.
/* @param       : Integer<input>
/* @return      : None, void
/* @complexity  : O(n)
/* @explanation : Algorithm that iterates the first half of the pyramid with whitespaces upto 'mid' times, and the
/*                lower half of the pyramid is decremented again after middle(mid). First, we keep a track of the
/*                middle of the pyramid. we increment the numbers with every iteration and decrease the whitespaces.
/*                similar to '11_PatternChallenge', we add another loop to print a pyramid to the right to the existing.
/*                once the outer loop reaches mid, we use an if statement to check if 'i' is greater than mid. if yes,
/*                we increment the whitespaces and decrement the digits with every iteration, same as above but opposite. 
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
void printPattern_12(int input){
	// Outer loop loops input number of times
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

	for(int i=1;i<input;i++){
		// if i hasn't reached the mid point of the pyramid
		// execute this block
		if(i<=mid){
			// decrementing white spaces on iteration depending on mid-i
			for(int j=mid-i;j>0;j--){
				cout<<" ";
			}
			// incrementing digits with every iteration depending on i
			for(int k=1;k<=i;k++){
				cout<<k;
			}
			// loop to print the upper right pyramid based on i;
			for(int l=i-1;l>0;l--){
				cout<<l;
			}
		}
		// if i is greater than mid.
		// execute this code block
		else{
			// Incrementing white spaces with every iteration depending on i-mid
			for(int j=1;j<=i-mid;j++){
				cout<<" ";
			}
			// decrementing the digits with every iteration depending on input-i. forming a reverse pyramid.
			for(int k=1;k<=input-i;k++){
				cout<<k;
			}
		}
		// Add a newline once the inner loops have finished executing.
		cout<<endl;
	}
}
