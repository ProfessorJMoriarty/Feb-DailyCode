#include <iostream>
using namespace std;
int main() {
	char input;
	
	cout << "Do you enjoy Cricket?" << endl;
	cin >> input;

	if (input=='y')
		cout << "You have a wonderful soul" << endl;
	else if (input=='n')
		cout << "Life is a gift to most except for you" << endl;

}