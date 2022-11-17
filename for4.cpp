#include <iostream>
 using namespace std;
  main() {
  	int v,b;
  	cout << "Please enter a whole number: ";
  	cin >> v;
  	for ( b=2; b<=v/2; b++) {
  		if ( v%b==0 )
  		cout << b <<"\t";
	  }
}