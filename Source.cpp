#include <iostream>

using namespace std;

int main(void)
{
	int num1, num2, num3;
	int choice1, choice2, choice3;
	int check1, check2, check3;
	int change = 1;
	int open = 0;
	while (true)
	{
		if (change == 1)
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
		while (open != 1)
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
			if (check1 == 0 && check2 == 0 && check3 == 0)
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