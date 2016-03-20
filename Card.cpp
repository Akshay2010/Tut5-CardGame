#include<iostream>
#include <string>
#include<stdio.h>
#include"Card.h"
#include<stdexcept>
#include<iomanip> 


using namespace std;

card::card(int CardNum,string CardCol)
{

	if(CardNum>10 || CardNum<1)
	{
		throw invalidCardNumber::invalidCardNumber();
	}
	if(CardCol.compare("Red")!=0)
	{
		throw invalidCardColour::invalidCardColour();
	}

	if(CardCol.compare("Black")!=0)
	{
		throw invalidCardColour::invalidCardColour();
	}

	Card_Colour=CardCol;
	Card_No=CardNum;

}

card::card(){}

string card::getColour()
{
	return Card_Colour;
}

void card::print()
{
	cout<<Card_Colour<<" "<<Card_No<<endl;
}

int card::getNumber()
{
	return Card_No;
}