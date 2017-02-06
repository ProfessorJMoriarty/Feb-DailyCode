#include <iostream>
using namespace std;
int main() {
	int input;

	cout << "How many cookies do you want good sir?" << endl;
	cin >> input;
	if (input <=5)
		cout << "Are you really sure?" << endl;
	else if (input >= 6)
		cout << "I will be dispensing your cookies good sir" << endl;
	else if (input >= 10)
	 cout << "That is too much sir!" << endl;

}