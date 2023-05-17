

#include <iostream>
#include <windows.h>  

using namespace std;

int main()
{
	
	string number;
	string calc;
	char repeat = 'y';

	system("Color 0D");
	while (repeat == 'y') {
	cout << "Welcome to Hello-Kitty Calculator!\n";
	cout << "*Before you start! Please choose if u want to use scientific calculator!\nY/N: ";
	
	cin >> calc;
	

		if (calc == "N" || calc == "n" || calc == "no") {
			cout << "Please select which operation do you want to do!\n1 => +\n2 => -\n3 => *\n4 => /\n";
			cin >> number;

			if (number == "1") {
				float a, b;
				cout << "Enter the first number: ";
				cin >> a;
				cout << "Enter the second number: ";
				cin >> b;
				float result = a + b;
				cout << result;
			}

			else if (number == "2") {
				float a, b;
				cout << "Enter the first number: ";
				cin >> a;
				cout << "Enter the second number: ";
				cin >> b;
				float result = a - b;
				cout << result;
			}

			else if (number == "3") {
				float a, b;
				cout << "Enter the first number: ";
				cin >> a;
				cout << "Enter the second number: ";
				cin >> b;
				float result = a * b;
				cout << result;
			}

			else if (number == "4") {
				float a, b;
				cout << "Enter the first number: ";
				cin >> a;
				cout << "Enter the second number: ";
				cin >> b;
				float result = a / b;
				cout << result;
			}

			else if (number == "5") {
				float a;
				cout << "Enter the first number: ";
				cin >> a;
				float result = a * a;
				cout << result;
			}
			cout << "\nDo you want to continue? (y/n)\n";
			cin >> repeat;
		}


		if (calc == "Y" || calc == "yes" || calc == "y") {
			cout << "Please select which operation do you want to do!\n1 => sin\n2 => cos\n3 => tg\n4 => log\n5 => pow\n6 => sqrt\n";
			cin >> number;

			if (number == "1") {
				float a;
				cout << "Enter the number: ";
				cin >> a;
				float result = sin(a);
				cout << result;
			}

			if (number == "2") {
				float a;
				cout << "Enter the number: ";
				cin >> a;
				float result = cos(a);
				cout << result;
			}


			if (number == "3") {
				float a;
				cout << "Enter the number: ";
				cin >> a;
				float result = tan(a);
				cout << result;
			}

			if (number == "4") {
				float a;
				cout << "Enter the number: ";
				cin >> a;
				float result = log(a);
				cout << result;
			}

			if (number == "5") {
				float a;
				float b;
				cout << "Enter the base: ";
				cin >> a;
				cout << "Enter the exponent: ";
				cin >> b;
				float result = pow(a, b);
				cout << result;
			}
			if (number == "6") {
				float a;
				cout << "Enter the number: ";
				cin >> a;
				float result = sqrt(a);
				cout << result;
			}
			cout << "\nDo you want to continue? (y/n)\n";
			cin >> repeat;
		}
	
	}
	system("pause");
	

}
