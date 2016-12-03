#pragma once
#include <iostream>

class ButtonFactory {
public:
	virtual void paint() = 0;
};

class OSXButton : public ButtonFactory {
public:
	void paint() {
		std::cout << "OSX button \n";
	}
};

class WindowsButton : public ButtonFactory {
public:
	void paint() {
		std::cout << "Windows button \n";
	}
};

class GUIFactoryFactory {
public:
	virtual ButtonFactory *createButton(char *) = 0;
};

class Factory : public GUIFactoryFactory {
public:
	ButtonFactory *createButton(char *type) {
		if (strcmp(type, "Windows") == 0) {
			return new WindowsButton;
		}
		else if (strcmp(type, "OSX") == 0) {
			return new OSXButton;
		}
	}
};
class FactoryPattern
{
public:
	FactoryPattern() {
		GUIFactoryFactory* guiFactory;
		ButtonFactory *btn;

		guiFactory = new Factory;

		btn = guiFactory->createButton("OSX");
		btn->paint();
		btn = guiFactory->createButton("Windows");
		btn->paint();
	}
};
