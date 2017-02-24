
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
/* 15_PatternChallenge
/***********************************/

// Library imports
#include <iostream>
#include <cstring> // Import cstring for string operations
using namespace std;

//Prototypes for the algorithms
void printPattern_15(char*);

int main(){
	// input str
	char str[]= "program";

	printPattern_15(str);
	return 0;
}

/**********************************************************
/*                <printPattern_15>
/*
/* @description : print a string pyramid, incremental first, then decremental after reaching the mid point
/* @param       : character string<input>
/* @return      : None, void
/* @complexity  : O(n)
/* @explanation : We iterate twice the length of string, once the loop reaches mid point(length of the string).
/*                One loop in the if block takes care of incrementing the string with every iteration, another
/*                for loop to decrement the count to 0, helping to form a decremental pyramid.
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
void printPattern_15(char* input){

	// Length of the string supplied as an argument to the function
	int stringLength = strlen(input);	

	// Outer loop loops input number of times	
	for(int i=0;i<stringLength*2;i++){
		// if i<mid of the pyramid, that is the length of the string.
		if(i<=stringLength){
			// Incremental for loop after the mid pyramid for the upper pyramid
			for(int j=0;j<i;j++){
				cout<<input[j]<<" ";
			}
		}
		// if i > mid of pyramid, thats the string Length
		else{
			// Decremental for loop for the lower pyramid
			for(int j=0;j<2*stringLength - i;j++){
				cout<<input[j]<<" ";
			}
		}
		// Add a newline once the inner loops have finished executing.
		cout<<endl;
				
	}
}
