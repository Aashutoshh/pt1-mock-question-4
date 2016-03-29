///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
/////////////////////////////////////////////////////////////////////////////////////////////////

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
	Animal()
	{

	}
	~Animal()
	{

	}

	virtual void name()
	{
		cout << "Animal " <<endl;
	}

	virtual void does()
	{
		cout << "Noise" << endl;
	}

};

class Bird : public Animal
{
public:

	Bird() :Animal()
	{

	}
	
	void name()
	{
		cout << "Bird" << endl;
	}
	void does()
	{
		cout << "Fly" << endl;
	}
	
};

class Dog : public Animal
{
public:

	Dog() :Animal()
	{

	}

	void name()
	{
		cout << "Dog" << endl;
	}
	void does()
	{
		cout << "Bark" << endl;
	}

};

void meth(Animal& a)
{
	a.name();
	a.does();
	
}

int main()
{
	Bird jj;
	meth(jj);
	Dog dd;
	meth(dd);


	return 0;
}