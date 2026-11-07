#include <cstring>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	const int COLOR_SIZE = 20;
	char first_color[COLOR_SIZE];
	char second_color[COLOR_SIZE];

	cout << "Enter the first primary color: ";
	cin >> setw(COLOR_SIZE) >> first_color;

	cout << "Enter the second primary color: ";
	cin >> setw(COLOR_SIZE) >> second_color;

	bool first_valid = strcmp(first_color, "red") == 0 ||
					   strcmp(first_color, "blue") == 0 ||
					   strcmp(first_color, "yellow") == 0;
	bool second_valid = strcmp(second_color, "red") == 0 ||
						strcmp(second_color, "blue") == 0 ||
						strcmp(second_color, "yellow") == 0;

	if (!first_valid || !second_valid)
	{
		cout << "Error: both inputs must be red, blue, or yellow." << endl;
	}
	else if (strcmp(first_color, second_color) == 0)
	{
		cout << first_color << endl;
	}
	else if ((strcmp(first_color, "red") == 0 && strcmp(second_color, "blue") == 0) ||
			 (strcmp(first_color, "blue") == 0 && strcmp(second_color, "red") == 0))
	{
		cout << "purple" << endl;
	}
	else if ((strcmp(first_color, "red") == 0 && strcmp(second_color, "yellow") == 0) ||
			 (strcmp(first_color, "yellow") == 0 && strcmp(second_color, "red") == 0))
	{
		cout << "orange" << endl;
	}
	else
	{
		cout << "green" << endl;
	}

	return 0;
}
