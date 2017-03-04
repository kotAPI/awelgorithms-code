
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
/* 05_PatternChallenge
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void printPattern_05(int);

int main(){
	// user input
	int userInput;

	cout<<"Enter number of lines."<<endl;
	cin>>userInput;

	printPattern_05(userInput);
	return 0;
}

/**********************************************************
/*                <printPattern_05>
/*
/* @description : Prints a pyramid pattern of decreasing digits, in sequential digits of input n.
/* @param       : Integer<input>
/* @return      : None, void
/* @complexity  : O(n)
/* @explanation : Algorithm that prints the digits in the form of an incremental pyramid. Similar to 
/*				  "03_PatternChallenge". Outer loop loops 'input' number of times. Inner loop iterates
/*                'i' times giving us a pyramid in the end.
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
void printPattern_05(int input){
	// Outer loop loops input number of times
	for(int i=1;i<=input;i++){
		// Inner loop loops i number of times.
		for(int j=i;j>0;j--){
			cout<<j<<" ";
		}
		// Jump to newline when the inner loop has finished executing.
		cout<<endl;
	}
}
