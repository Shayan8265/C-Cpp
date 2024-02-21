/*
CH-230-A
a11_p4.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
//"dyncreature.cpp"
//test programm
#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    //string for commands
    string input;
    //loop until quit is entered
    while(1){
        //instructions for input
        cout << "Input wizard or goblin or dragon\n"
        << "To Quit Enter; quit" << endl;
        cout<< "input :" << input;
        //using getline to input a string
        getline(cin, input);
        //multiple if else statements for 
        //different inputs
        if(input == "wizard"){
            cout << "\nCreating a Wizard.\n";
        //dynamically creating the object
            Wizard *w = new Wizard;
        //running both the methods of the parent
        //as well as the derived class as well 
            w->run();
            w->hover();
        //deleting memory allocation
            delete w;
        }
        else if(input == "goblin"){
        //dynamically creating the object
            Goblin *g = new Goblin;
        //running methods
            g->run();
            g->ability();
        //deleting the memory allocation
            delete g;
        }
        else if(input == "dragon"){
        //memory allocation same as above
            Dragon *d = new Dragon;
            d->run();
            d->ability();
            delete d;
        }
        //breaking loop when quit in entered
        else if(input == "quit"){
            break;
        }
    }
    return 0;
}