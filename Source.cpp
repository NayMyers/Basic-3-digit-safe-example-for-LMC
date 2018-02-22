//Combination lock code to be written in the LMC emulator
#include <iostream>

using namespace std;

int main(void)
{
	int num1, num2, num3; //The three ints that will make up the code 
	int choice1, choice2, choice3; //three ints that will store guesses 
	int check1, check2, check3; // three ints that will store the information about whether each particular guess is correct
	//this will be done by subtracting the guess from the code and storing it in these variables.
	//if it is zero it is correct and I can use the BRZ (branch zero command) to jump to the next check
	int change = 1;
	int open = 0;
	while (true) // it is in an infinite loop because this is simulating a combination lock. 
	{
		if (change == 1) //if the user has chosen to change the code at the end it will run this part.
		{
			cout << "Enter the first digit of your code	--> ";
			cin >> num1;
			cout << endl << "Second --> ";
			cin >> num2;
			cout << endl << "Third --> ";
			cin >> num3;
			cout << endl;
			change == 0;
		}
		while (open != 1) //this needs to run if the door is still closed. once it is open in might need to run the change code part.
		{
			cout << "Enter the first digit of your guess --> ";
			cin >> choice1;
			cout << endl << "Enter the second number of your guess --> ";
			cin >> choice2;
			cout << endl << "Enter the third number of your guess --> ";
			cin >> choice3;
			cout << endl;
			check1 = num1 - choice1;
			check2 = num2 - choice2;
			check3 = num3 - choice3;
			if (check1 == 0 && check2 == 0 && check3 == 0) // In the LMC language all of these will have to be checked seperately and I will use 
				//the branch zero command to branch to the next check otherwise it will hit the branch allways and branch to outputing 0 to indicate the door is still closed
				//and then hit the branch allways and return to the top.
			{
				cout << "IT OPENS!" << endl;
				open = 1;
				cout << "Enter 1 if you wish to change the code --> ";
				cin >> change;
			}
			else
			{
				cout << "OOPS wrong code. try agian!" << endl;
			}
		}
		open = 0;
	}
}