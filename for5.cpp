#include <iostream>
 using namespace std;
  main() {
  	int number1,number2,A,gcd;
  	cout << "Please enter  first integer value:";
  	cin >> number1;
  	cout << "Please enter  second integer value:";
  	cin >> number2;
  	for ( A=1; A<=number1 && A<=number2; A++) {
  		if ( number1%A==0 && number2%A==0 )
  		gcd =A;
	  }
	cout << "gcd between:"<< number1 << " "<< "and " << number2<<" "<< "is" << " "<< gcd;  
}