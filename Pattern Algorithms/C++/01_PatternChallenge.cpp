#include <iostream>
#include <string>

using namespace std;
void printPattern(int numOfLines);

int main (){
    int numOfLines = 10;

    printPattern_01(numOfLines);
    return 0;
}

void printPattern_01(int numOfLines)  
{

    for(int i=0;i<numOfLines;i++){
   		
        for(int j=0;j<numOfLines;j++){
        	cout<<j;
        }
        //Adding newline to start printing on a fresh line
    	cout<<endl; 
    } 
}
