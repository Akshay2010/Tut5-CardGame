#include<stdlib.h>
#include<stdio.h>
#include<string>
#include"Card.h"
#include<iostream>

using namespace std;

int main()
{
	card MiniDeck[4];
	
	try
	{
		MiniDeck[0]=card(-1,"Blue");
	}
	catch(invalidCardColour &invalidCardColour)
	{
		cout<<"Runtime Error->"<<invalidCardColour.what()<<endl;
	}
	catch(invalidCardNumber &invalidCardNumber)
	{
		cout<<"Runtime Error->"<<invalidCardNumber.what()<<endl;
	}

	system("PAUSE");

	return 0;
}