#include <iostream>
using namespace std;
int main() {
	char input;
	cout << "What basketball player are you?!" << endl;
     

	int Lebron = 0;
	int Curry = 0;
	int Paul = 0;
	int Mamba = 0;

	cout << "What is your favorite basketball shot? (Pnr=P Dunk=D ThreePoint=T Fadeaway=F)" << endl;
	cin >> input;

	if (input == 'P') 
	 Paul = Paul + 1;
	else if (input == 'D')
	 Lebron = Lebron + 1;
	else if (input == 'T')
	 Curry = Curry + 1;
	else 
	 Mamba = Mamba + 1;


	cout << "What is your favorite basketball Position? (PointGuard=P ShootingGuard=S SmallForward=S Center=C)" << endl;
	cin >> input;

	if (input == 'P')
	Paul = Paul + 1;
	else if (input == 'S')
	Lebron = Lebron + 1;
	else if (input == 'C')
	Curry = Curry + 1;
	else 
	Mamba = Mamba + 1;


	cout << "What is your favorite basketball Player? (Magic Johnson=P Michael Jordan=M  Dr J=D Reggie Miller=R)" << endl;
	cin >> input;

	if (input == 'P')
	Paul = Paul + 1;
	else if (input == 'D')
	Lebron = Lebron + 1;
	else if (input == 'R')
	Curry = Curry + 1;
	else 
	Mamba = Mamba + 1;

	cout << "What is your favorite basketball coach? (Doc Rivers=D Phil Jackson=P  Eric Spoelstra=E Steve Kerr=S)" << endl;
	cin >> input;

	if (input == 'D')
	Paul = Paul + 1;
	else if (input == 'E')
	Lebron = Lebron + 1;
	else if (input == 'S')
	Curry = Curry + 1;
	else 
	Mamba = Mamba + 1;


	cout << "It's the final play of the game what do you do? (Off Dribble Three=O PicknRoll=R  Drive and Dunk=D Draw a triple team and shot a fadeaway=G)" << endl;
	cin >> input;

	if (input == 'D')
	Paul = Paul + 1;
	else if (input == 'E')
	Lebron = Lebron + 1;
	else if (input == 'S')
	Curry = Curry + 1;
	else 
	Mamba = Mamba + 1;
	
	cout << "What feature best describes you? (Intelligent=I Loyal=L  Determined=D Humour=G)" << endl;
	cin >> input;

	if (input == 'I')
	Paul = Paul + 1;
	else if (input == 'L')
	Lebron = Lebron + 1;
	else if (input == 'G')
	Curry = Curry + 1;
	else 
	Mamba = Mamba + 1;

	cout << "What is your best basketball trait?? (Assits=A Ball Handling=B  Shooting=S Basketball IQ=G)" << endl;
	cin >> input;

	if (input == 'A')
	Paul = Paul + 1;
	else if (input == 'G')
	Lebron = Lebron + 1;
	else if (input == 'B')
	Curry = Curry + 1;
	else 
	Mamba = Mamba + 1;

	cout << "When you're playing defense, what do you do? (James Harden=J Use your physical adavantages to keep out of the lane=P  Use small size to easily steal the ball=Q  Be propane, be in his grill all day=R)" << endl;
	cin >> input;

	if (input == 'Q')
	Paul = Paul + 1;
	else if (input == 'P')
	Lebron = Lebron + 1;
	else if (input == 'J')
	Curry = Curry + 1; 
	else 
	Mamba = Mamba + 1;

	cout << "What team do you prefer? (Lakers=L Clippers=C  Warriors=W  Heat=H)" << endl;
	cin >> input;

	if (input == 'C')
	Paul = Paul + 1;
	else if (input == 'H')
	Lebron = Lebron + 1;
	else if (input == 'W')
	Curry = Curry + 1;
	else 
	Mamba = Mamba + 1;

	cout << "What number do you like most? (Three=3 Six=6  Thirty=30  Twenty Three=23)" << endl;
	cin >> input;

	if (input == '3')
	Paul = Paul + 1;
	else if (input == '6')
	Lebron = Lebron + 1;
	else if (input == '30')
	Curry = Curry + 1;
	else
	Mamba = Mamba + 1;

	if ((Paul > Lebron) && (Paul > Curry) && (Paul > Mamba))
	cout << "YOU ARE PAUL" << endl;
	 else if  ((Lebron > Paul) && (Lebron > Curry) && (Lebron > Mamba))
	cout << "YOU ARE LEBRON" << endl;
	else if ((Curry > Lebron) && (Curry > Paul) && (Curry > Mamba))
	cout << "YOU ARE CURRY" << endl;
	else if ((Mamba > Lebron) && (Mamba > Curry) && (Mamba > Paul))
	cout << "YOU ARE THE BLACK MAMBA" << endl;

}