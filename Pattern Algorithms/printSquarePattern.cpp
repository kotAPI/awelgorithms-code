#include <iostream>
#include <string>

using namespace std;
void printPattern(int numOfLines);

int main ()
{
    int numOfLines = 10;

    printPattern(numOfLines);
    return 0;
}

void printPattern(int numOfLines)  
{

    for(int i=0;i<numOfLines;i++){

        for(int j=0;j<numOfLines;j++){

        cout<<j;

        }

    cout << endl;

    } 
}
