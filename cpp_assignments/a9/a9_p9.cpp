/*
CH-230-A
a9_p9.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int random;
    string x = "x",n = "n", inp;
    //storing all the words in the array
    string arr[17] = {"computer",
    "television","keyboard","laptop","mouse",
    "monkey","animal","oak","quiz",
    "coal","favour","audio","axe",
    "element","area","zebra","lion"};
    //runnig loop until quit is encountered
    while(inp != "quit"){
        //initializing the random number each time
        //game is played again
        srand(static_cast < unsigned int > (time(0)));
        random = (rand() % 17) + 1;
        //using the random number 
        //between 1-17 to choose the random word 
        //from that position in the array
        string w = arr[random];
        int wl = w.length();
        for(int i = 0; i < wl; i++){
            //replacing with _ if any letter in
            //the word is a vowel by using ASCII
            if ((w[i] == 'a') || (w[i] == 'e') ||
                (w[i] == 'i') || (w[i] == 'o') || 
                (w[i] == 'u')){
                w[i] = '_';
            }
        }
        //printing the random word 
        //after replacing vowels
        cout << w << endl;
        int t = 0;
        //taking guess until
        //quit is entered of right word is entered
        while(1){
        cout << "Your Guess; ";
        cin >> inp;
        if(inp == "quit") exit(0);
        t++;
        if(inp == arr[random]){
            cout << "Congratulations!!" << endl;
            cout << "You Guessed it!!!!" << endl;
            cout <<"Number of Tries taken; "<< t <<endl;
            cout << "Play Again (Enter yes/no); ";
            //quiting when correct input is read
            cin >> x;
            if(x == "no"){
                inp = "quit";
            }
            if(x == "yes"){
                inp != "quit";
            }
            break;
        }
        }
    }
    return 0;
}