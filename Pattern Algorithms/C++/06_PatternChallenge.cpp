
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
/* 06_PatternChallenge
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void printPattern_06(int);

int main(){
	// user input
	int userInput;

	cout<<"Enter number of lines."<<endl;
	cin>>userInput;

	printPattern_06(userInput);
	return 0;
}

/**********************************************************
/*                <printPattern_06>
/*
/* @description : Prints a pyramid pattern of stars as a centered pyramid.
/* @param       : Integer<input>
/* @return      : None, void
/* @complexity  : O(n)
/* @explanation : Algorithm that prints the digits in the form of an incremental pyramid. Similar to 
/*				  "03_PatternChallenge". Outer loop loops 'input' number of times. Inner loop iterates
/*                'i' times giving us a pyramid in the end. Problem here is that, this challenge demands
/*                the pyramid to be 'centered', call it a 'centered pyramid' if you will. To tackle this,
/*                we push the digits to the right by adding white spaces (" "). So we need another loop inside
/*                the outer loop based on it to push the digits by, say, 'input-i' times in every loop.
/*                This pushes the digits or the pyramind by those many times helping us to 'center' it. 
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
void printPattern_06(int input){
	// Outer loop loops input number of times
	for(int i=1;i<=input;i++){
		
		// Loop to print whitespaces, to 'push' the pyramid so it is 'centered'.
		for(int j=0;j<input-i;j++){
			cout<<" ";
		}

		// Iterate 'k' times with every 'i' iteration to print the stars 'i' times.
		for(int k=0;k<i;k++){
			cout<<"*"<<" ";
		}
		// Jump to newline when the inner loop has finished executing.
		cout<<endl;
	}
}

//TODO
/**********************************************************
/*                <some_function_name>
/*
/* @description : description here
/* @param       : Integer<variable> (Datatype<variable_name>)
/* @return      : datatype (int,float,double etc)
/* @complexity  : Big O notation. (O(n),O(n^2) etc)
/* @explanation : Detailed description about what the algorithm does
/* @author      : <Your name> @<GitHub handle> (John Doe @johndoe)
/**********************************************************/
/*void print_pattern_alt_method(int num){
	// Algorithm content goes here.
	int maxDots = (2*num + 1) - 1;
	for(int i = 0; i < num; i++)
	{
		int hdots = 2*i - 1;
		for(int j = 0 ; j < maxDots ; j++)
		{
			if((num - i) < j && j < (num + i))
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}			
		}
		cout << endl;
	}	
}*/
