#include <iostream>
#include <string>

using namespace std;

class Str
{
	public:
	// string member value
	string s;
	
	// default constructor with s initialized to ""
	Str() : s("") {}
	// parameterized constructor with s initialized to st
	Str(string st) : s(st) {}
	
	// this function returns a Str object and overloads the + operator 
	// so that it can work on the user defined Str data type
	// the parameter is another Str object so the syntax for calling 
	// this function will be Str + Str or Str.operator+(Str)
	Str operator+(Str b)
	{
		// create a new Str object
		Str c;
		
		// set the new object's string to the current object's string 
		// and b's string concatenated
		c.s = s + b.s;
		
		// return the new object
		return c;
	}
};

/*
	Polymorphism is when something is able to have different forms and perform 
	different actions. In the context of programming, it is when a function or 
	operator is able to take different forms and perform different actions based 
	on the parameters or data types given. Operator overloading is a form of 
	polymorphism because a single operator is able to perform different actions 
	on different data types. For instance the + operator has two different functions 
	depending on the data types that are used. For two numbers the + operator will 
	add those two numbers. For two strings the + operator will concatenate those two 
	strings. Thus the operator (in our case the + operator) can take different forms 
	and perform different actions.
	
	Ex.
	int + int = sum of numbers
	string + string = concatenated string
	
	We can overload the + operator so that it can be used for more data types. However, 
	we cannot change the existing function of an operator for built in types. This means 
	that the examples above can't be modified. We are only able to perform operator 
	overloading on user defined types (such as classes) or a mixture of user defined types 
	and built in types. The Str class overloads the + operator so that it can be used on 
	two Str data types.
	
	Ex.
	class object + class object = whatever you want
	class object + built in type = whatever you want
*/
int main()
{
	// creating Str objects
	Str a("hello");
	Str b("world");
	
	// concatenate a and b's string and set it to c's string
	Str c = a + b;
	// equivalent to the line of code above and helps in understanding what is going on
	Str d = a.operator+(b);
	
	// print values
	cout << c.s << endl;
	cout << d.s << endl;
	
	return 0;
}
