#include <iostream>

using namespace std;

int main()
{
	int temperature;
	
	cout << "what is the temperature?";
	cin >> temperature;
	
	if (temperature <32) {
		cout << "bring a heavy jacket" << endl;
	}
	else if (temperature>50) {
		cout << "bring a light jacket" << endl;
	}
	else{
		cout << "not to bring a jacket" << endl;
	}
	
	return 0;
}