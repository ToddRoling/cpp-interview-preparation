#include <iostream>
#include <string>

using namespace std;

static int InputNumber(string message) {
	int number{};
	while (cout << message && !(cin >> number)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return number;
}

static string FormatNumber(int number) {
	string number_as_string = to_string(number);
	if (number < 0)
		number_as_string = "(" + number_as_string + ")";
	return number_as_string;
}

int main() {
	int first_number{};
	int second_number{};
	string first_number_as_string{};
	string second_number_as_string{};
	string result{};
	while (true) { // due to intentionally undefined exit condition (for now)
		first_number = InputNumber("Enter an integer: ");
		second_number = InputNumber("Enter another integer: ");
		first_number_as_string = FormatNumber(first_number);
		second_number_as_string = FormatNumber(second_number);
		result = FormatNumber(first_number + second_number);
		cout << first_number_as_string << " + " << second_number_as_string << " is " << result << ".\n";
		result = FormatNumber(first_number - second_number);
		cout << first_number_as_string << " - " << second_number_as_string << " is " << result << ".\n";
	}
	return 0;
}
