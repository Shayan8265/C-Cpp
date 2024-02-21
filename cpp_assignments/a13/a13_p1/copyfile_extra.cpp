/*
CH-230-A
a13_p1.cpp
Shayan Khan
skhan01@jacobs-university.de
//CONSTRUCTOR UNIVERSITY :-( 
*/
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
	const int SZ = 100; // buffer size per line
	char buf[SZ];       // buffer to read line by line

    // Reading input.txt file
    ifstream file_1("input.txt"); 		   
	if (!file_1.good()) {
		cout << "Problem! Can't open the input file " << endl;
		exit(2);
	}

    // Writing file_1 input_copy.txt file
	
    ofstream file_2("input_copy.txt"); 		
	if (!file_2.good()) {
		cout << "Problem! Can't open the output file " << endl;
		exit(3);
	}

	// copying to the file with loop

	while(file_1.get(buf, SZ)) { 	
		file_1.get(); 				
		file_2 << ": " << buf << endl;
	}

	// closing files

	file_1.close(); 
	file_2.close();
}