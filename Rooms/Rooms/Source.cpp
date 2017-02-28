#include <iostream>
using namespace std;
int main(){
	char input = 'a';
	int room = 1;
	
	while (input != 'q') {
		switch (room) {
		case 1:
			cout << "You are in room 1! You may go north(n)" << endl;
			cin >> input;
			if (input == 'n')
				room = 2;
			else
				room = 1;
			break;


		case 2:
			cout << "You are in room 2! You may go south(s) or west(w) " << endl;
			cin >> input;
			if (input == 'w')
				room = 3;
			if (input == 's')
				room = 1;
			
			break;


		case 3:
			cout << "You are in room 3! You may go north(n) or east(e) " << endl;
			cin >> input;
			if (input == 'n')
				room = 4;
			if (input == 'e')
				room = 2;
			
			break;

		case 4:
			cout << "You are in room 4! You may go south(s) or east(e) " << endl;
			cin >> input;
			if (input == 'e')
				room = 5;
			if (input == 's')
				room = 3;
		
			break;


		case 5:
			cout << "You are in room 5! You may go north(n) or west(w) " << endl;
			cin >> input;
			if (input == 'n')
				room = 6;
			if (input == 'w')
				room = 4;
		
			break;

		case 6:
			cout << "You have won the game good job!" << endl;

		}


	}

}