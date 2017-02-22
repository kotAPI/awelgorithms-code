
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
/*                <some_function_name>
/*
/* @description : Prints a pyramid pattern of increasing digits, in sequential digits of input n.
/* @param       : Integer<input>
/* @return      : None, void
/* @complexity  : O(n^2)
/* @explanation : Algorithm that incrementally increases its digits to print with every iteration.
/*                Outer loop takes care of number of lines to print 'input' in this case, inner loop 
/*                iterates based on inner loop times(j<i times)
/* @author      : Pranay Kothapalli @kotAPI
/**********************************************************/
void printPattern_03(int input){
	for(int i=0;i<input;i++){
		for(int j=0;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
