
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
/* 07_PatternChallenge
/***********************************/

// Library imports
#include <iostream>
using namespace std;

//Prototypes for the algorithms
void printPattern_07(int);

int main(){
	// user input
	int userInput;

	cout<<"Enter number of lines."<<endl;
	cin>>userInput;

	printPattern_07(userInput);
	return 0;
}

/**********************************************************
/*                <printPattern_07>
/*
/* @description : Prints integer tables of the respective lines upto 9
/* @param       : Integer<input>
/* @return      : None, void
/* @complexity  : O(n^2)
/* @explanation : Algorithm that prints tables of integers upto 'input' numbers from 1-9 multiples.
/*                The outer loop iterates 'input' number of times. The inner loop iterates 'input'
/*                number of times, outputs i*j covering multiples of i and j in every line.
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
void printPattern_07(int input){
	// Outer loop loops input number of times
	
	// Loop to iterate 'input' times
	for(int i=1;i<input;i++){
		// Loop to multiply j with i. Prints tables 1 to input range.
		for(int j=1;j<input;j++){
			cout<<i*j<<" ";
		}
		cout<<endl;
	}
}
