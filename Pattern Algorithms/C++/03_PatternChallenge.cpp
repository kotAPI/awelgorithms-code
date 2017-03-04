
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
/* 03_PatternChallenge
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void printPattern_03(int);

int main(){
	// user input
	int userInput;

	cout<<"Enter number of lines."<<endl;
	cin>>userInput;

	printPattern_03(userInput);
	return 0;
}

/**********************************************************
/*                <printPattern_03>
/*
/* @description : Prints a pyramid pattern of increasing digits, in sequential digits of input n.
/* @param       : Integer<input>
/* @return      : None, void
/* @complexity  : O(n^2)
/* @explanation : Algorithm that incrementally increases its digits to print with every iteration.
/*                Outer loop takes care of number of lines to print 'input' in this case, inner loop 
/*                iterates based on inner loop times(j<i times), this helps achieve the incremental step
/*                wise printing of digits finally outputs a pyramid.
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
void printPattern_03(int input){
	// Outer loop loops input number of times
	for(int i=0;i<input;i++){
		// Inner loop loops i number of times.
		for(int j=0;j<=i;j++){
			cout<<j<<" ";
		}
		// Jump to newline when the inner loop has finished executing.
		cout<<endl;
	}
}
