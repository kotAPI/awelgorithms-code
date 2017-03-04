
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
/* 02_PatternChallenge
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void printPattern_02(int);

int main(){
	// Lines for I/O for the user input 
	int userInput;
	cout<<"Enter the number of lines"<<endl;
	cin>>userInput;

	//Calling the algorithm functions
	printPattern_02(userInput);

	return 0;
}

/**********************************************************
/*                <printPattern_02>
/*
/* @description : Loops to print nxn pattern of incrementing numbers.. 0-n forming an nxn grid
/* @param       : Integer<input>, 'input' represents the n value in nxn grid.
/* @return      : None, void
/* @complexity  : 0(n^2)
/* @explanation : A straight forward 0(n^2) approach to print the numbers in an nxn grid.
/*  			  since the digits value represent the line number, we print the outer-loop value
/*                'i' in this case over 'input' times, which is iterated and taken care of by the
/*                inner loop 'j' in this case.
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
void printPattern_02(int input){
	for(int i=0;i<input;i++){
		for(int j=0;j<input;j++){
			cout<<i<<" ";
		}
		// Newline on end of inner loop to start printing on a fresh line.
		cout<<endl;
	}
}
