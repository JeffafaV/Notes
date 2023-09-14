#include <iostream>
#include <string>

using namespace std;

class Str
{
	public:
	string s;
	
	Str() : s("") {}
	Str(string st) : s(st) {}
	
	// this function 
	Str operator+(Str b)
	{
		Str c;
		c.s = s + b.s;
		return c;
	}
};

/*
	Polymorphism is when something is able to have different forms and perform 
	different actions. In the context of programming, it is when a function or 
	operator is able to take different forms and perform different actions based 
	on the parameters or data types given.
*/
int main()
{
	Str a("hello");
	Str b("world");
	Str c = a + b;
	Str d = a.operator+(b);
	
	cout << c.s << endl;
	cout << d.s << endl;
	
	return 0;
}
