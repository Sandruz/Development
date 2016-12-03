// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Abstract Factory.h"
#include "Adapter.h"
#include "Bridge.h"
#include "Chain of Responsibility.h"
#include "Command.h"
#include "Decorator.h"
#include "Delegation.h"
#include "Factory.h"
#include "Observer.h"


int main()
{
	AbastractFactory abstr;
	std::cout << "\n";

	Adapter adatp;
	std::cout << "\n";

	Bridge bridg;
	std::cout << "\n";

	ChainOfResponsability chain;
	std::cout << "\n";

	CommandPattern com;
	std::cout << "\n";

	Decorator deco;
	std::cout << "\n";

	Delegation dele;
	std::cout << "\n";

	FactoryPattern fact;
	std::cout << "\n";

	ObserverPattern obs;
	std::cout << "\n";

	system("Pause");

	return 0;
}
