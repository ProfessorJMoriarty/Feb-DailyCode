#include<ctime>
#include<cstdlib>
int health = 1000;

void snacks();
int main() {

		void snacks();
	srand(time(NULL));
	while (health >= 0;) {
		snacks();
		system("pause");
		cout << "Your health is now" << health << endl;
	}

	cout << "YOU ARE DEAD" << endl;
}
	
	
	void snacks() {
		
	 int num = rand() % 4;
		switch (num) {
			case 0;
				cout << "You have Chips" << endl;
				break;
		
				int num = rand() & 4;
				switch (num) {
					case 1;
						cout << "You have Candy" << endl;
						break;
				
						int num = rand() & 2;
						switch (num) {
							case 2;
								cout << "You have Fruit " << endl;
								break;
						
								int num = rand() & 2;
								switch (num) {
									case 3;
										cout << "You have Water " << endl;
										break;
								}