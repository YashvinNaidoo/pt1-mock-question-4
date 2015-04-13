///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 

#include <iostream>
using namespace std;

class Animal
{
public:
	Animal();
	~Animal();

	virtual void name() = 0;
	virtual void does() = 0;
};

class Bird : public Animal
{
public:
	Bird();
	~Bird();

	virtual void name();
	virtual void does();
};

class Dog : public Animal
{
public:
	Dog();
	~Dog();

	virtual void name();
	virtual void does();
};

void Bird::name()
{
	cout << "Bird" << endl;
}

void Bird::does()
{
	cout << "Chirps" << endl;
}

void Dog::name()
{
	cout << "Dog" << endl;
}

void Dog::does()
{
	cout << "Barks" << endl;
}

int main(int argc, char **argv)
{

}