/*
CH-230-A
a13_p2.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include <string>
#include"Complex.h"

using namespace  std;

int main(){
    string file_n;
    cout << "first file name: ";
    cin >> file_n; 
    //opeing the file
    ifstream file_in(file_n.c_str());
    if (!file_in){
        std::cerr << "ERROR in File : " << file_n << std::endl;
        return 0;
    }
    cout << "second file name: ";
    cin >> file_n;
    //opening the file
    ifstream file2_in(file_n.c_str());
    if (!file2_in){
        std::cerr << "ERROR in File : " << file_n << std::endl;
        return 0;
    }
    cout << "output file name: ";
    cin >> file_n;
    //opeing the file
    ofstream file_o(file_n.c_str());
    double r, i;
    file_in >> r >> i;
    Complex a(r, i);
    file2_in >> r >> i;
    Complex b(r, i);
    //sum
    Complex ans = a + b;
    cout << "\n(" << a << ") + (" << b << ") = (" << ans << ")" << endl;
    file_o << "(" << a << ") + (" << b << ") = (" << ans << ")" << endl;
    //difference
    ans = a - b;
    //input to files
    cout << "(" << a << ") - (" << b << ") = (" << ans << ")" << endl;
    file_o << "(" << a << ") - (" << b << ") = (" << ans << ")" << endl;
    //product
    ans = a * b;
    //input to files
    cout << "(" << a << ") * (" << b << ") = (" << ans << ")" << endl;
    file_o << "(" << a << ") * (" << b << ") = (" << ans << ")" << endl;
    //closing files
    file_in.close();
    file2_in.close();
    file_o.close();
    system("pause");
    return 1;
}