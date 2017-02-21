#include <iostream>
using namespace std;
int main () {
	char input;
	cout << "What kind of cookies would you like? Chocolate Chip 'c', Oreos 'o', or Nilla Wafers 'n'? " << endl;
	cin >> input;
	switch (input) {
	case 'c':
		cout << "Chocolate Chip";
		break;

	case 'o':
		cout << "Oreos";
		break;

	case 'n':
		cout << "Nilla";
		break;
	}
	}