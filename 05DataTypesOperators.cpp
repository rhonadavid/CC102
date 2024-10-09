#include <iostream>

using namespace std;

int main ()
{
	int A, B;
	cout << "Enter first number: ";
	cin >> A;
	cout << "Enter second number: ";
	cin >> B;
	
	cout << " Sum: " << A << '+' << B << '=' << A + B << endl;
	cout << " Difference: " << A << '-' << '=' << A - B << endl;
	cout << " Quotient: " << A << '*' << '=' << A * B << endl;
	cout << " Product: " << A << '/' << '=' << A / B << endl;
	cout << " Remainder: " << A << '%' << '=' << A % B << endl;
	
	return 0;

}