
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
/* 16_PatternChallenge
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void printPattern_16(int);

int main(){
	// user input
	int userInput;

	cout<<"Enter number of lines."<<endl;
	cin>>userInput;

	printPattern_16(userInput);
	return 0;
}

/**********************************************************
/*                <printPattern_16>
/*
/* @description : Algorithm to print a chessboard with 'nxn' grid
/* @param       : Integer<input>
/* @return      : None, void
/* @complexity  : O(n^2)
/* @explanation : This algorithm iterates'inputxinput' times. The outer loop iterates input times. 
/*                Inner loop iterates input times too, if the i value is odd, it adds a whitespace character
/*                to push the chars one space ahead giving it the illusion of a chessboard. In the inner loop,
/*                if 'j' is even, we print a "#", else, we print a whitespace. SO its pretty much same loop
/*                in every 'i' iteration, but the whitespace offset for every odd 'i' is what gives the output
/*                the chess board look.
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
void printPattern_16(int input){
	
		// Outer 
	for(int i=0;i<input;i++){
		// Check if i is odd;
		// Push the chars by a whitespace if its even
		if(i%2==0){
			cout<<"  ";
		}

		// Inner loop to print the alternating black and white squares of chessboard
		// black squares are represented by '#'
		// white squares are represented by " " (white space)
		for(int j=0;j<input;j++){
			// If j is even print white square
			if(j%2==0){
				cout<<"#";
			}
			// If j is odd print a black square
			else{
				cout<<"  ";
			}
		}
		// Add a newline once the inner loops have finished executing.
		cout<<endl;
	}
	
}
