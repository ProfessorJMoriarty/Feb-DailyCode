#include<ctime>
#include<cstdlib>
int main(){
	void snacks();
	srand(time(NULL));
	while (true) {
		snacks();
		system("pause");
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