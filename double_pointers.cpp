#include <iostream>
#include <string>

using namespace std;

/*
	Pointers point to other variables or objects in the program. This means that the value 
	that the pointer stores is an address. However, pointers can't just point to any variable 
	of any data type since it is limited to one data type. Pointers are declared with the * 
	symbol as well as a data type. The data type denotes that the pointer is able to store 
	addresses that hold values of that data type.
	
	Ex.
	int *x;
	
	The above example shows that x is a pointer of type int. This means that it can hold 
	the address of int variables.
	
	Ex.
	int **x;
	
	The above example shows that x is a pointer of type int pointer. This means that it 
	can hold the address of int pointer variables.
	
	Setting the value of a pointer to some address is known as referencing.
	
	Ex.
	int *p = &x;
	
	Retrieving the value stored in a memory address is known as dereferencing.
	
	Ex.
	
	cout << *p;
*/
int main()
{
	// creating and setting int variable
	int i;
	i = 5;
	
	// creating and setting pointer variable of type int
	int *ip;
	ip = &i; // referencing or setting ip to i's memory address
	
	// creating and setting pointer variable of type int pointer
	int **ipp;
	ipp = &ip; // referencing or setting ipp to ip's memory address
	
	cout << "Printing each variable value:" << endl;
	
	// each of these will print the variable's stored value
	cout << i << endl; // prints the number 5
	cout << ip << endl; // prints the memory address of i
	cout << ipp << endl; // prints the memory address of ip
	cout << endl;
	
	cout << "Print the value that is stored in the address that the pointers are set to:" << endl;
	
	// these will print the value that is stored in the 
	// address that the pointers are referencing/set to.
	// getting the value of a memory address is also known as dereferencing
	cout << *ip << endl; // prints the value of i which is 5
	cout << *ipp << endl; // prints the value of ip which is i's memory address
	cout << endl;
	
	cout << "Printing the memory address of each variable:" << endl;
	
	// these will print the memory address that each variable is stored at
	// you will notice some of these addresses printed above
	cout << &i << endl; // print the address of i
	cout << &ip << endl; // print the address of ip
	cout << &ipp << endl; // print the address of ipp
	cout << endl;
	
	/*
		it's a good idea to view these pointers and the memory addresses they store as links
		
		Ex.
		ipp = x008 ------> ip = x004 ------> i = 5
		   x012              x008             x004
		
		The above shows that it possible to reach the value of i with ipp by dereferencing 
		twice. When we dereference ipp once we will get the value of ip which is x004. When we 
		dereference one more time we will get the value of i which is 5.
	*/
	
	cout << "Printing each variable value with only one pointer:" << endl;
	
	// printing the value of each variable by only using ipp
	cout << ipp << endl; // print the value of ipp
	cout << *ipp << endl; // print the value of ip (dereferencing once)
	cout << **ipp << endl; // print the value of i (dereferencing twice)
	
	return 0;
}
