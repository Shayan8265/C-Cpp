/*
CH-230-A
a9_p2.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
using namespace std; 

int main(){
    int n, i;
    double x;
    string s;
//taking both the number inputs with cin
//taking strig input by getline function
    cin >> n >> x;
    getchar();
    getline(cin, s);
//loop  to print the result n times
    for(i = 1; i <= n; i++){
        cout << s << ':' << x << endl;
    }
    return 0;
}