/*
CH-230-A
a11_p4.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
//"Creatures.h"
//decleration of classes
#include <iostream>

class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

//making a child class goblin 
//decendant of creature class
class Goblin : public Creature {
    public:
        Goblin();
        void ability();
        ~Goblin();

    private:
        std::string power;
};

//making a child class dragon
//child of a class creature
class Dragon : public Creature
{
public:
    Dragon();
    void ability();
    ~Dragon();

private:
    std::string power;
};