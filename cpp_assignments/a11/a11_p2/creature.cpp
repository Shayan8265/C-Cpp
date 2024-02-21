/*
CH-230-A
a11_p2.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//making a child class goblin 
//decendant of creature class
class Goblin : public Creature {
    public:
        Goblin();
        void ability();
        ~Goblin();

    private:
        string power;
};

//printing message when default constructor is called
Goblin::Goblin() : power("Healing")
{
    cout << "\nCreating a Goblin" << endl;
}

//a method for printing the goblins property
void Goblin::ability(){
    cout << "Ability : " << power << "!!"<< endl;
}

//printing mesage when destructor is called
Goblin::~Goblin()
{
    cout << "Goblin's Destructor is being called!!" << endl;
}

//making a child class dragon
//child of a class creature
class Dragon : public Creature
{
public:
    Dragon();
    void ability();
    ~Dragon();

private:
    string power;
};

//message for the call of dragons constructor
Dragon::Dragon() : power("Fire breathing")
{
    cout << "\nCreating a Dragon" << endl;
}

//printing the property of the dragons class
void Dragon::ability()
{
    cout << "Ability : " << power << "!!" << endl;
}
//printing message for when destructor is called
Dragon::~Dragon(){
    cout << "\nDragon's Destructor is being called!!" << endl;
}

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

//calling goblin along with its method
//and a method from the parent class
    Goblin g;
    g.run();
    g.ability();

//calling dragon along with its method 
//and a method from the parent class
    Dragon d;
    d.run();
    d.ability();

    return 0;
}