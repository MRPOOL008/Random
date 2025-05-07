#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//Declare variables
	srand(time(0));
	int passLength;
	string alphabets = "abcdefghijklmnopqrstuvwxyz";
	int numbers[] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
	vector<char> password;

	//userInput:
	cout << "Enter the password lenght: ";
	cin >> passLength;

	//process password
	for (int i = 0; i < passLength; i++) {
		int evenOdd = rand() % 2;
		int numberIndex = rand() % 10;
		int alphabetIndex = rand() % 26;
		if (evenOdd == 0) {
			password.push_back(numbers[numberIndex]);
		}
		else {
			password.push_back(alphabets[alphabetIndex]);
		}
	}

	//print out the password
	for (int j = 0; j < password.size(); j++) {
		cout << password[j];
	}
}
