//Halimatou Diaby
// Lab 6


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;;


int main ( ) 
{
    int Num1, Num2;
    char myChar;
    string myString;
    int Added = Num1 + Num2;
    char NextChar = myChar + 1;

    ifstream inFile; // Step 2: Declare an ifstream variable
    ofstream outFile; // Step 2: Declare an ofstream variable

   // Step 3: Open the files

    inFile.open("InData.txt");

   outFile.open("OutData.txt");




    inFile >> Num1 >> Num2 >> myChar >> myString;



    outFile << Added <<endl<<NextChar << myString<< endl;



// Last step to close the file
 inFile.close();
 outFile.close();
     cout<<"Program to review streams.....\n";
 
     return 0; 
}




