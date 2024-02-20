/*
CH-230-A
a9_p3.cpp
Shayan Khan
skhan01@jacobs-university.de
*/

#include <iostream>
using namespace std;
//declaring and defining function
float abs1(float x){
    if(x < 0){
        return -x;
    }
//returning diffrent value for negative input
    else return x;
}

int main(){
    float x;
//taking input
    cin >> x;
//printing the return value
    cout << abs1(x) << endl;
    return 0;
}