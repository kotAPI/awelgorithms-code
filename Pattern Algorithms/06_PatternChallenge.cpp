
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
