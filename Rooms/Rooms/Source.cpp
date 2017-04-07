#include <iostream>
#include<string>
#include <conio.h>
#include <windows.h>
int name;
using namespace std;
int main() {
	cout << "WELCOME TO THE WONDERFUL GAME WE CALL VOCAB, BEFORE WE START LET US BEGIN WITH A WONDERFUL TONE 'VOCAB UHHHHHH'" <<endl<<endl;
	cout << "Good luck champ! Don't die" << endl << endl;
	Beep(450, 300);
	Beep(650, 300);
	Beep(560, 300);
	Beep(430, 600);

	Beep(785, 300);
	Beep(568, 300);
	Beep(876, 600);

	Beep(567, 100);
	Beep(678, 300);
	Beep(876, 300);
	Beep(456, 600);

	Beep(745, 250);
	Beep(874, 500);
	Beep(856, 300);

	Beep(876, 250);
	Beep(975, 500);

	Beep(543, 300);
	Beep(543, 400);
	Beep(435, 300);
	Beep(764, 600);

	Beep(765, 300);
	Beep(764, 300);
	Beep(666, 600);

	Beep(897, 100);
	Beep(987, 300);
	Beep(989, 300);
	Beep(786, 600);

	Beep(945, 250);
	Beep(689, 200);
	Beep(876, 300);

	Beep(798, 250);
	Beep(875, 400);

	cout << "Your name Lucas Shading a former author of the award winning series Bleach Runner. Recently you've been at a standstill with your writting that has not only effected your love life but finically as well." << endl << endl;
	cout << "To get your joy and love for writting back, you decide it would be best to buy a new vaction home in Compton Detroit among family members." << endl << endl;
	cout << "Upon arrival, there is a very noticable silence across thy cul-de-SAC." << endl << endl;
	cout << "Here is your inventory" << endl << endl;
	string input;
	string inventory[5];
	for (int i = 0;i < 5; i++)
		inventory[i] = "";

	for (int i = 0; i < 5;i++)
		cout << inventory[i] << endl;

	int room = 1;

	while (input.compare("silence") !=1) {
		switch (room) {
		case 1:
			cout << "As soon as you exit your cellular electronic vehicle, You hear faintly hear a man in the distance sceam 'VOCAB WORD!! UHHHHHHHHHH' You realize that it is your old highschool english teacher THE MAN THE MYTH THE LEGEND 27 MR SPANN. Scared dankless do you enter the wreckless home or run?" << endl;
			cin >> input;
			if (input.compare("home") == 0) {
				room = 2;
				cout << "You've managed to escape that horrible beast and make it to the front of your vaction home" << endl << endl;
				break;
			}
			if (input.compare("run") == 0) {
				room = 0;
				cout << "As you try to escape the man they call Spann, he appears too quick for you and drains your soul of vocabulary. Mr Spann stands over you with only one thing left to say 'DO IT! UHHHHH' You are now dead." << endl << endl;
				cout << "Game over better luck next time champ" << endl << endl;
				return 0;
				break;
			}

		case 2:
			cout << "As you enter your home, away from that horrible beast you notice that your 'new' vaction home has been radied and left to dust. Within just a moment footsteps are heard upstairs, someone is in house.  Hide in the fridge? Or grab your trusty Holy Water and drink it?" << endl << endl << endl << endl;
			cin >> input;

			if (input.compare("holy") == 0) {
				room = 3;
				cout << "YOU'VE HAVE DRANK THY HOLY WATER OF GREATNESS, MAKING YOUR SENSES GREATER THAN THE AVERAGE MAN" << endl << endl;
				inventory[1] = "Empty Bottle";
				cout << "Here is your inventory!" << endl;
				for (int i = 0;i < 5;i++)
					cout << inventory[i] << endl;
				break;
			}
			if (input.compare("hide") == 0) {
				room = 0;
				cout << "As you cram within the fridge the steps get lounder with each breath. You remember that an hour before arriving to this 'vaction home', you drove my MCDs and pure smell fills your soul. The creature lets out a giant roar and rips open the fridge door exposing you. 'You're gonna be yummy for my tummy'" << endl << endl << endl;
				cout << "Game over you loser" << endl << endl << endl;
				break;
				return 0;

			}


		case 3:

			cout << "After drinking thy holy water, You've managed to move into the living room where you find an old family photo which appears to have Mr. Spann and rather large individual and a little boy but is labeled 'Your inevitable death is closer than you think my son' Your heart sinks and fear builds within you. You manage to find a trusty cellular device on the living room couch, maybe it might be time to call dad or 911." << endl << endl;
			cin >> input;

			if (input.compare("dad") == 0) {
				room = 4;
				cout << "'Hey champ, why are you calling me? I thought you were on vaction?''DAD YOU DON'T UNDERSTAND HE IS HERE THE MAN THEY CALL SPANN IS HERE AND DEMANDS MY VOCABULARY!'The man has transformed into a complete beast from the east' 'Son that sounds like fun, tell him I said hi, see you later champ'" << endl << endl;
				inventory[2] = "Cellular Device";
				cout << "Here is your inventory!" << endl;
				for (int i = 0;i < 5;i++)
					cout << inventory[i] << endl;
				break;

			}
			if (input.compare("911") == 0) {
				room = 3;
				cout << "'Hello this is 911 what is your emergency?''Welp there happens to a rabid man outside attempting to kill me it seems like and someone is in my house please help''Yeah I dont care must be some rats'" << endl << endl << endl;
				cout << "I think it might be time to call dad." << endl << endl << endl;

				inventory[2] = "Cellular Device";
				cout << "Here is your inventory!" << endl;
				for (int i = 0;i < 5;i++)
					cout << inventory[i] << endl;

				break;

			}

		case 4:
			cout << "After such a wonderful chat with dad, the hunger grows deep within your stomach and notice the room across the living room is the bug infested kitchen with these small insects that may pose danger to you but there may be food inside. There is a freshly clean plate right beside the kichen counter and for some odd reason pasta sits next to it. Eating maybe be the right choice but it might not. " << endl;
			cin >> input;
			if (input.compare("dont eat") == 0) {
				room = 5;
				cout << "Ehh food can wait, I should keep moving throughout the house before I am killed." << endl << endl << endl;
				cout << "Time to move upstairs" << endl << endl << endl;
				inventory[3] = "Empty Plate";
				cout << "Here is your inventory!" << endl;

				for (int i = 0;i < 5;i++)
					cout << inventory[i] << endl;
				break;
			}
			if (input.compare("eat") == 0) {
				room = 5;
				cout << "LUCKILY YOU created THE ONE AND ONLY WONDERFUL DISH OF PASTA!" << endl << endl << endl;
				cout << "Your hunger has been pleased your magnificent belly, Its time to move upstairs" << endl << endl << endl;
				inventory[3] = "Empty Plate";
				cout << "Here is your inventory!" << endl;

				for (int i = 0;i < 5;i++)
					cout << inventory[i] << endl;
				break;
			}

		case 5:
			cout << "Once upstairs, the roars of vocab are felt throughout the entire upstairs, that unfortunately cause you fall to your knees. A very noticable lamp stands at your side but just within a moment Spann busts through the ceiling with a rather friendly greating,'I remember that you failed almost every vocab quiz back in our day, I never forgot about those days. It time to suffer.' Fight or Lamp?" << endl;
			cin >> input;
			if (input.compare("fight") == 0) {
				room = 0;
				cout << "Fighting a typical old man seemed like a great idea at first but the vocab was too strong and you were unable to do anything at all to the Legend 27. Your body dragged into the depths of the vocab." << endl << endl << endl;
				cout << "Game over you loser." << endl << endl << endl;
				return 0;
				break;
			}


			if (input.compare("lamp") == 0) {
				room = 6;
				cout << "Before Spann can even begin to unleash madness upon your soul, you proceed to turn on the lamp which happens to BRIGHTEN HIS DAY. Making the poor man scream in fear and begin writing your instead of you're on the wall." << endl << endl << endl;
				cout << "You quickly rush out of the top of the stairs into a room nearby. A mistake you would soon regret." << endl << endl << endl;
				inventory[4] = "Lamp";
				cout << "Here is your inventory!" << endl << endl << endl;
				for (int i = 0;i < 5;i++)
					cout << inventory[i] << endl;
				break;

			}
		case 6:
			cout << "Your heart continues to beat rabidly without control. Posters of Nickelback are all over the wall but a rather strange quote on the wall.'Somebody once told me the world is gonna roll me' The floors are made of wood but seem rather weak and easy to break. wood or lamp?" << endl << endl << endl;
			cin >> input;
			if (input.compare("lamp") == 0) {
				room = 7;
				cout << "The lamp gets the job done but puts in too much work causing you to fall through the floor and be knocked unconscious" << endl << endl << endl;
				break;
			}
			if (input.compare("wood") == 0) {
				room = 6;
				cout << "Your hands are too fragile to break this wood and pose no use to you at all." << endl << endl << endl;
				cout << "MISSON FAILED, WE'LL GET EM NEXT TIME" << endl << endl;
				break;
			}
		case 7:
			cout << "Upon waking up within a very dark room, you hear heavy breathing in the room. The smells and taste of tears fill your poor soul. The creature they call the Medina source. 300 POUNDS OF PURE MUSCLE. Its time to fight back. But im scared I might die. Maybe I should run.. " << endl << endl << endl;
			cin >> input;
			if (input.compare("fight") == 0) {
				room = 8;
				cout << "You channel your inner Trever and scream,'I WILL STRIKE DOWN UPON THEE WITH GREAT VENGEANCE!'You unleash great attacks and combinations of kicks across the creatures pure belly and fortunately make the insides pour out. You notice a key spill out of the guts labeled 'Garage'." << endl << endl << endl;
				inventory[5] = "Garage Keys";
				cout << "Here is your inventory!" << endl << endl << endl;
				for (int i = 0;i < 5;i++)
					cout << inventory[i] << endl;
				break;
			}
			if (input.compare("run") == 0) {
				room = 0;
				cout << "Running does you no good. THE BEAST FROM THE EAST GRIPS YOUR POOR ANKLES AND BEGINS TO DEVOUR YOUR ENTIRE BODY." << endl << endl << endl;
				return 0;
				break;
			}
		case 8:
			cout << "There is a very rocky set of stairs that lead to the main lobby of the house with a suspended structure producing a massive glare. You become dellusional and images of homework and test take your mind. 'SNAP BACK TO REALITY OH THERE GOES GRAVITY!' Spann has finally caught up with you. With a massive roar he screams 'VOCAB! The time is almost up for you. Tic tock here comes the doc' Scared to death, making peace might be the best option. Maybe the family photo might spark his inner being. But where was it? The dark room?" << endl << endl << endl;
			cin >> input;
			if (input.compare("living room") == 0) {
				room = 9;
				cout << "You quickly remember the family photo was stored in the living room. Spann grows too tired of waiting and attempts to pounce on thee with great VOCAB. You hit the Whip, structing the poor man in the face giving you enough time to make it back to the living room." << endl << endl;
			}
			if (input.compare("dark room") == 0) {
				room = 0;
				cout << "You decide to move back down to the dark room but It does you no good at all. The room is pure darkness and has multiple holes in the wooden walls and floor. Spann comes down to the dark room as well. Blcoking the only way out.'Im tired of your waiting Lucas Shading time to experience MELACHOLY AND THE PURE SATISFACTION OF VOCAB!' Spann unleashes his power upon you as you slowly die from the power of vocab." << endl << endl << endl;
				cout << "Game over dummy" << endl << endl;
				break;
				return 0;
			}
		case 9:
			cout << "Upon arriving to the living room, the family photo lays on the couch just as you left it hours ago. Left untouched eithout a trace. Although once holding it your hand, you notice there appears to be a message on the back of the photo on the back. What was the message?" << endl << endl << endl;
			cin >> input;
			if (input.compare("Pasta") == 0) {
				room = 9;
				cout << "It looks like you've said the word I've been waiting to hear since you started my game my friend." << endl << endl << endl;
				cout << "I would like to celebrate with you great scholar in the name of pasta and all pasta lovers across the globe." << endl << endl << endl;
				cout << "Take this great knowledge with you in the real life and proceed to spead the wonderful food pasta." << endl << endl << endl;
				cout << "You may now return to the living room and say the actual phrase" << endl << endl;
				break;
			}
			if (input.compare("Your inevitable death is closer than you think my son") == 0) {
				room = 10;
				cout << "Once done repeating the single phrase, you hear a massive groan of pain heard around the house. It sounds just like the legend 27.." << endl << endl << endl;
				break;
			}
		case 10:
			cout << "Suddenly a huge wall is busted open within the living room. The Legend 27 is standing among you and the smell of pure vocab escapes his Nostrils.'SNAP BACK TO REALITY'The final battle will soon begin, shall you fight like a champion or run like Pronghorn" << endl << endl << endl;
			cin >> input;
			if (input.compare("Pasta") == 0) {
				room = 11;
				break;
			}
			else {
				cout << "You simply only had to remember one thing you've eaten before. The one thing you love.." << endl << endl;
				cout << "If only you could've remembered" << endl << endl << endl;
				cout << "Spann slowly fills your soul with the power of vocab, suffocating you to the very brink of death. The last thing you hear is 'VOCAB UHHHH!'" << endl << endl << endl;
				break;
				return 0;
			}
		case 11:
			cout << "IN THE NAME OF THE MIGHTY LORD PASTA, YOU BEGIN AN ARRAY OF ATTACKS unleashing the true powers of THE PASTA GOD JOSE. BEFORE THE LEGEND 27 CAN EVEN BEGIN TO GET INTO HIS FIGHTING STANCE, THE PURE POWER OF PASTA TAKES OVER THE WRETCHED OLD MAN." << endl << endl << endl;
			cout << "The beaten crusty legend 27 lies on the ground with barely a breath of life left." << endl << endl << endl;
			cout << "'Only thing I have left to say to you Spann was why did you have to do that? After all these years? You do this to me?' Spann replys'I only did it out of love.... THE LOVE FOR VOCAB UHHHH!' The old man passes out still breathing." << endl << endl << endl;
			cout << "Its time to go home." << endl << endl << endl;
			cout << "But where in the house can I escape from? All the doors and windows have been shut since my arrival. Don't I have some keys?" << endl << endl << endl << endl;
			cin >> input;
			if (input.compare("Garage") == 0) {
				room = 12;
				break;
			}
		case 12: {
			cout << "Upon going to the garage you had remembered that you had recently picked up a set of keys early on in the dark room" << endl << endl << endl;
			cout << "The torture has finally come to an end. Time to open the garage and go home" << endl << endl << endl;
			cout << "The warm brisk air of the summer day, actually brings a smile to your face. A day Lucus Shading will never forget." << endl << endl;
			cout << "The story must be told but first its time to listen to some All Star and Nickelback" << endl << endl;
			cout << "You win champ good job my dude!" << endl << endl << endl;
		}
			}

		}
	
}