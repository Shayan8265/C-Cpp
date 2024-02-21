/*
CH-230-A
a9_p4.cpp
Shayan Khan
skhan01@jacobs-university.de
*/

#include <iostream>
using namespace std;

float mycount(int x, int y){
    //this function works when int are passed as 
    //parameters
    float z; 
    z = y - x;
    //we return the difference btw two integers
    return z;
}

//this function would run if a char and string are
//passed as parameters
float mycount(char a, string s){
    int count = 0, i, j;
    j = s.size();
//this for loop will run for the nuber of elements
//stored in the string using s.string()
    for (i = 0; i < j; i++){
//adding 1 to count each time the stated char is 
//encountered at any position in the string
        if (s[i] == a){
            count++;
        }
    }
    if (count == 0){
        return 0;
    }
    else return count;
}

int main(){
    int x, y;
    char a;
    string s;
    cout << "int x=";
    cin >> x;
    cout << "int y=";
    cin >> y;
    cout << "char a=";
    cin >> a;
    cout << "string s=";
    getchar();
    getline(cin, s);
    cout << mycount(x, y) << endl;
    cout << mycount(a, s) << endl;
    return 0;
}