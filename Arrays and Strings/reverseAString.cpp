
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
/* Reverse A String
/***********************************/

// Library imports
#include <iostream>
#include <stdio.h>
#include <cstring> // Import cstring for string operations
using namespace std;

//Prototypes for the algorithms
char* reverseAString(char* inputString);

int main(){
	// Lines to handle user input go here, be descriptive...
	// use cin, cout
	char nonReversedString[] = "this string is not reversed"; 

	// Call your algorithms here
	cout<<reverseAString(nonReversedString)<<endl;

	return 0;
}

/**********************************************************
/*                reverseAString
/*
/* @description : Algorithm function that takes an input string and returns reversed string of it.
/* @param       : Character Array<char>
/* @return      : char (array)
/* @complexity  : O(n)
/* @explanation : First, we calculate the length of the string using strlen.Then we calculate the mid point
/*                of the string and iterate uptil the mid point in our for loop. This is an inplace algorithm
/*                we are avoiding the use of iterating from the reverse of the string to first and storing these
/*                character in a temporary char array. 
/*
/*                Instead we swap the first character of char array with n-1
/*                                the second character of char array with n-2
/*                                the third character of char array with n-3 and so on.
/*
/*                Up on end of completion of the iteration, the char array is successfully swapped and characters
/*                are reversed. The final string is a reverse of the inputString. The function finally returns it.
/* @author      : Pranay Kothapalli @kotAPI 
/**********************************************************/
char* reverseAString(char inputString[]){
	// Algorithm content goes here.
	// Keeping the track of the string length
	int stringLength = strlen(inputString);

	// We need a mid point for our string
	int mid;
	// if even, mid is half the length of string
	if(stringLength%2==0){
		mid = stringLength/2;
	}
	// else mid is half the length of string +1
	else{
		mid = stringLength/2 +1;
	}
	// decrease by one since strings start counting from 0
	mid--; 

	// For loop to iterate over the whole string. 
	for(int i=0;i<mid;i++){
		// temp char variable to store char at 'i'th place of inputString.
		char temporaryChar          = inputString[i];
		// Swapping the first with last character
		inputString[i] = inputString[stringLength-i-1];
		// Swapping the last with temporary char
		inputString[stringLength-i-1] = temporaryChar;		
	}
	
	return inputString;
	

}
