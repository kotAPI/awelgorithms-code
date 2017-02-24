
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
/* 17_PatternChallenge
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void printPattern_17(int);

int main(){
	// user input
	int userInput;

	cout<<"Enter number of lines."<<endl;
	cin>>userInput;

	printPattern_17(userInput);
	return 0;
}

/**********************************************************
/*                <printPattern_17>
/*
/* @description : Algorithm to print alternating increasing and decreasing * lines.
/* @param       : Integer<input>
/* @return      : None, void
/* @complexity  : O(n)
/* @explanation : Algortihm that takes input from the user and prints increasing and decreasing star lines in alternate
/*                lines. The outer loop iterates 'input' number of times. The first inner loop takes care of decreasing
/*                the star lines. The second innner loop takes care of increasing the star lines. These execute alternatingly
/*                one after another in every outer loop iteration. 
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
void printPattern_17(int input){
	
		// Outer 
	for(int i=0;i<input;i++){
		
		//Inner loop to print the decreasing star lines depending on value of 'i'
		for(int k=0;k<i;k++){
			cout<<"*";
		}
		// Inner loop to print the increasing star lines depending on 'input-i'.
		cout<<endl;
		for(int j=0;j<input-i;j++){
			cout<< "*";
		}

		// Add a newline once the inner loops have finished executing.
		cout<<endl;
	}
	
}
