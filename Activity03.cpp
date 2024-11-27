#include <iostream>

using namespace std;

int main ()
{
	int age;
	string parent;
	double money;
	
	cout << "Enter your age";
	cin >> age;
	cout << "Are you with a parent? (yes/no):";
	cin >> parent;
	cout << "Enter the amount of money you have:";
	cin >> money;
	
	string ratings = (age < 13) ? ((parent == "yes") ? "G or PG": "G");
		((age < 16) ? ((parent == "yes")? "G, PG, or R" : "G or PG") : "G, PG, or R");
		
	cout << "You can watch " << ratings << "movies." << endl;
	cour << (money >= 10.50 ? "You can buy an evening ticket ." (money >= 7.50 ? "You can buy a matinee ticket."; "You don't have enough money for ticket.")) << endl;

return 0;
}
	