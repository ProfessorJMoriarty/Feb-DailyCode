#include <iostream>
#include <Windows.h>
using namespace std;
void jukebox(int input);
int input;

int main() {
	int choice;
	cout << "what song do you want 1 2 or 3?" << endl;
	cin >> choice;
	jukebox(choice);
	
	
}
void jukebox(int input) {
	if (input == 1) {
		PlaySound(TEXT("Bar1.wav"), NULL, SND_ASYNC);
		cout << "playing song 1!" << endl;
	}


	else if (input == 2)
		PlaySound(TEXT("Bar2.wav"), NULL, SND_ASYNC);


	else if (input == 3)
		PlaySound(TEXT("Bar3.wav"), NULL, SND_ASYNC);

}