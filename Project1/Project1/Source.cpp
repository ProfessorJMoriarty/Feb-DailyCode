#include <Windows.h>
#include <iostream>
using namespace std;

void cat();
int main() {
		 cat();
	}

void cat() {
	while (1) {
		cout << "AAAAAAAAAANNNNNNNNNNOOOOOOOOOYYYYYYYYYIIIIIIIIIINNNNNNNNGGGGGGGG!!!!!!!!" << endl;
		system("Color 2B");

		int pitch = 100;
		int duration = 800;
		for (int i = 0; i < 12; i++)
			Beep(pitch, duration);
		pitch += 100;
	}
}