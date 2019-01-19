//============================================================================
// Name        : test1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
<<<<<<< Upstream, based on origin/master
<<<<<<< Upstream, based on origin/master
	cout << "Here is conflict" << endl; // prints !!!Hello World!!!
	cerr << "!!!Test My test Hello World!!!" << endl; // prints !!!Hello World!!!
=======
	std::cout << "!!!Test My test Hello World!!!" << endl; // prints !!!Hello World!!!
>>>>>>> 8a450a1 using std::cout
=======
	// my change
	cerr << "!!!Tsasas est My test Hello World!!!" << endl; // prints !!!Hello World!!!
>>>>>>> 752ed94 additional commit
	// test 1
	return 0;
}
