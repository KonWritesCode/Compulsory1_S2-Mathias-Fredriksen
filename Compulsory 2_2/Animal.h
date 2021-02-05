#pragma once
#include <iostream>
#include <string>

class Animal
{
public:
	std::string name{""};
	int age{ 0 };
	std::string place_of_birth{""};
	virtual void Speak(std::string name) {
		std::cout << "The animals make many sounds" << std::endl;
	};

private:
	int Animal_ID{0};
} ;

class Dog : public Animal {
public:
	void Speak(std::string name) final { // Using final since there is no reason to keep overriding it from here
		std::cout << name << " is a dog. " << name << " goes \"Woof!\"" << std::endl;
	}

private:

};

class Cat : public Animal {
public:
	void Speak(std::string name) final { // Using final since there is no reason to keep overriding it from here
		std::cout << name << " is a cat. " << name << " goes \"Meow!\"" << std::endl;
	}

private:

};

class Bird : public Animal {
public:
	void Speak(std::string name) final { // Using final since there is no reason to keep overriding it from here
		std::cout << name << " is a bird. " << name << " goes \"Tweet!\"" << std::endl;
	}

private:

};

