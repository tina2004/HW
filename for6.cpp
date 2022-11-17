#include <iostream>
 using namespace std;
  main() {
  	int m,k,l;
  	cout << "Please enter an whole number: ";
  	cin >> m;
  	l=1;
  	for ( k=2; k<=m; k++) {
  		l*=k;
	  }
	  cout << m << "! is " << l;
}