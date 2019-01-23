/* This program contains two fnction: main() 
	and myfunc().
*/

#include <iostream>
using namespace std;

void myfunc(); // myfunc's prototype

int main()
{
	cout << "In main()";
	myfunc(); //call myfunc()
	cout << "Back in main()";

	return 0;
}

void myfunc()
{
	cout << " Inside myfunc() ";
}
