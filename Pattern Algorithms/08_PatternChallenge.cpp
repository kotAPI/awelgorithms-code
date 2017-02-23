
/*******************************************************************************************************
/* ▄▄▄       █     █░▓█████  ██▓      ▄████  ▒█████   ██▀███   ██▓▄▄▄█████▓ ██░ ██  ███▄ ▄███▓  ██████ 
/*▒████▄    ▓█░ █ ░█░▓█   ▀ ▓██▒     ██▒ ▀█▒▒██▒  ██▒▓██ ▒ ██▒▓██▒▓  ██▒ ▓▒▓██░ ██▒▓██▒▀█▀ ██▒▒██    ▒ 
/*▒██  ▀█▄  ▒█░ █ ░█ ▒███   ▒██░    ▒██░▄▄▄░▒██░  ██▒▓██ ░▄█ ▒▒██▒▒ ▓██░ ▒░▒██▀▀██░▓██    ▓██░░ ▓██▄   
/*░██▄▄▄▄██ ░█░ █ ░█ ▒▓█  ▄ ▒██░    ░▓█  ██▓▒██   ██░▒██▀▀█▄  ░██░░ ▓██▓ ░ ░▓█ ░██ ▒██    ▒██   ▒   ██▒
/* ▓█   ▓██▒░░██▒██▓ ░▒████▒░██████▒░▒▓███▀▒░ ████▓▒░░██▓ ▒██▒░██░  ▒██▒ ░ ░▓█▒░██▓▒██▒   ░██▒▒██████▒▒
/* ▒▒   ▓▒█░░ ▓░▒ ▒  ░░ ▒░ ░░ ▒░▓  ░ ░▒   ▒ ░ ▒░▒░▒░ ░ ▒▓ ░▒▓░░▓    ▒ ░░    ▒ ░░▒░▒░ ▒░   ░  ░▒ ▒▓▒ ▒ ░
/*  ▒   ▒▒ ░  ▒ ░ ░   ░ ░  ░░ ░ ▒  ░  ░   ░   ░ ▒ ▒░   ░▒ ░ ▒░ ▒ ░    ░     ▒ ░▒░ ░░  ░      ░░ ░▒  ░ ░
/* ░   ▒     ░   ░     ░     ░ ░   ░ ░   ░ ░ ░ ░ ▒    ░░   ░  ▒ ░  ░       ░  ░░ ░░      ░   ░  ░  ░  
/*      ░  ░    ░       ░  ░    ░  ░      ░     ░ ░     ░      ░            ░  ░  ░       ░         ░                                                                                                       
/******************************************************************************************************/

/***********************************
/* 08_PatternChallenge
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void printPattern_08(int);

int main(){
	// user input
	int userInput;

	cout<<"Enter number of lines."<<endl;
	cin>>userInput;

	printPattern_08(userInput);
	return 0;
}

/**********************************************************
/*                <printPattern_08>
/*
/* @description : Prints a pyramid pattern of stars as a centered pyramid.
/* @param       : Integer<input>
/* @return      : None, void
/* @complexity  : O(n)
/* @explanation : Algorithm similar to that of 06_PatternChallenge. The only difference is, we've an extra for-loop
/*                inside the outer for-loop to print the extra decreasing digits on every iteration in the end to 
/*                to print the right half of the centered pyramind. 
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
void printPattern_08(int input){
	// Outer loop loops input number of times
	for(int i=1;i<=input;i++){
		
		// Loop to print whitespaces, to 'push' the pyramid so it is 'centered'.
		for(int j=input;j>i;j--){
			cout<<" "<<" ";
		}

		// Iterate 'k' times with every 'i' iteration to print the numbers.
		for(int k=1;k<=i;k++){
			cout<<k<<" ";
		}

		// Loop to print the right half of the pyramid in decreasing order digits.
		for(int l=i-1;l>0;l--){
			cout<<l<<" ";
		}
		
		// Jump to newline when the inner loops have finished executing.
		cout<<endl;
	}
}
