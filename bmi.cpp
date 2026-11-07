#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	double weight;
	double height;

	cout << "Enter your weight in pounds: ";
	cin >> weight;
	cout << "Enter your height in inches: ";
	cin >> height;

	if (weight <= 0.0 || height <= 0.0) {
		cout << "Error: weight and height must be greater than zero." << endl;
		return 0;
	}

	double bmi = weight * 703.0 / (height * height);
	string category;

	if (bmi < 18.5) {
		category = "Underweight";
	} else if (bmi <= 25.0) {
		category = "Optimal weight";
	} else {
		category = "Overweight";
	}

	cout << fixed << setprecision(2);
	cout << "BMI: " << bmi << endl;
	cout << "Category: " << category << endl;

	return 0;
}
