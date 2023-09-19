#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> *v = new vector<int>;
    v->push_back(5);
    cout << v->size() << endl;
    
    cout << v << endl;
    cout << *(&v) << endl;
    cout << (*v)[0];
	
	return 0;
}
