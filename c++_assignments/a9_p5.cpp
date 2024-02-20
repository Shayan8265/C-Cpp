/*
CH-230-A
a9_p5.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    string name;
    cout << "Enter your name: ";
    //reading name as string
    getline(cin, name);
    //initializing the random number
    srand(static_cast < unsigned int > (time(0)));
    //random number between 1 - 100
    int ans = (rand() % 100) + 1;
    //uncomment the line below to see the ans 
    // cout << ans << endl;
    int i, in;
    //using loop to take inputs
    //until correct answer is read
    for(i = 0; i < 100; i++){
        cout << "Try number = " << i << endl;
        cout << "Guess number " << ": ";
        cin >> in;
        //checking if input is lower or higher
        //than the generated number
        if(in < ans){
            cout << " you guessed too low" << endl;
        }
        else if(in > ans){
            cout << "you guessed too high" << endl;
        }
        //congratulating when input is equal to 
        //the generated number
        else{
        cout << "Congratulations!!! ";
        cout << name << endl;
        cout << "<<YOU GUESSED IT>>" << endl;
        break;
        }
    }
    return 0;
}