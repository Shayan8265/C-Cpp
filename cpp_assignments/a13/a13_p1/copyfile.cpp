/*
CH-230-A
a13_p1.cpp
Shayan Khan
skhan01@jacobs-university.de
//CONSTRUCTOR UNIVERSITY :-( 
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string content, in;
    getline(cin, in);
    // taking input for the file name to be copied
    string in2 = in + ".txt";   
    ifstream file(in2);
    //copying the file 
    string in3 = in + "_copy.txt";
    ofstream file_copy(in3);
    while (getline(file, content)){            
        file_copy << content << "\n";
    }
    cout << "Copy file created Succesfully!!"<< endl;
    //closing files
    file.close();
    file_copy.close();
    return 0;
}