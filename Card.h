#ifndef CARD_H
#define CARD_H

#include<string>
#include<stdexcept>

using namespace std;

class card{
	
public:
	int Card_No;					//Property to hold Card's Number
	string Card_Colour;				//Property to hold Card's Colour

	card(int n,string x);			//Constructor
	card();							//Default Constructor

	string getColour();
	int getNumber();
	void print();
};

class invalidCardNumber:public runtime_error
{
public:
	invalidCardNumber::invalidCardNumber():runtime_error("Invalid Card Number"){}		//Handling Invalid Card Number
};

class invalidCardColour:public runtime_error
{
public:
	invalidCardColour::invalidCardColour():runtime_error("Invalid Card Colour"){}		//Handling Invalid Card Colour
};


#endif