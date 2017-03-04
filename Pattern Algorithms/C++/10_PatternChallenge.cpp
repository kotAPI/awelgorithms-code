
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
/* 10_PatternChallenge
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void printPattern_10(int);
void print_pattern10_method2(int);

int main(){
	// user input
	int userInput;

	cout<<"Enter number of lines."<<endl;
	cin>>userInput;

	printPattern_10(userInput);
	return 0;
}

/**********************************************************
/*                <printPattern_10>
/*
/* @description : Prints an inverse pyramid pattern of digits in increasing order terminating at an odd number depending
/*                on the user-input value.
/* @param       : Integer<input>
/* @return      : None, void
/* @complexity  : O(n)
/* @explanation : Algorithm that prints digits in incremental way that terminates at an odd number at every iteration loop
/*                depending on the input number. We use the outer loop to increment up to 'input' number of times. In the
/*                loop, we check if the 'i' value is an odd number. If yes, we use an inner loop to print 'i' whitespaces.
/*                followed by another inner loop that prints the digits up to an odd number. If input is an odd number
/*                though, the numbers will terminate as even numbers.
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
void printPattern_10(int input){
	// Outer loop loops input number of times
	for(int i=1;i<input;i++){
		// Execute inner loop only if even
		if(i%2!=0){
			// Loop to print whitespaces
			for(int k=0;k<i;k++){
				cout<<" ";
			}
			// Loop to print the digits
			for(int j=1;j<=input-i;j++){
				cout<<j<<" ";
			}
			// Newline to print when inner loops are done executing
			cout<<endl;
		}		
		
	}
}


/**********************************************************
/*                <print_pattern10_method2>
/*
/* @description : Prints an inverse pyramid pattern of digits in increasing order terminating at an odd number depending
/*                on the user-input value.
/* @param       : Integer<input>
/* @return      : None, void
/* @complexity  : O(n)
/* @explanation : Algorithm not very much different from print_pattern10 method, except, this uses while loops.
/*                We use the outer loop to increment up to 'num. number of times. MaxNumInLine maintains the max num that 
/*                needs to be printed for each line, which gets decremented by 2 in each iteration.Loop counter maintains the 
/*                count of the lines covered. Each line has 'loopCounter' no. of spaces in the beginning.
/*                'horCounter' tracls count of each element, and prints until the 'maxNumInLine'.
/* @author      : Ravi Kanth Kaja
/**********************************************************/
void print_pattern10_method2(int num){
	// Algorithm content goes here.
	int maxNumInLine = num;
	int loopCounter = 0;
	while(maxNumInLine > 0)
	{
		int horCounter = 1;
		while(horCounter < maxNumInLine + loopCounter + 1)
		{
			if(horCounter <= loopCounter)
			{
				cout << " ";
			}
			else
			{
				cout << horCounter - loopCounter;
			}
			horCounter++;
		}
		cout << endl;
		loopCounter++;;
		maxNumInLine = maxNumInLine - 2;
	}
}
