#include <iostream>
using namespace std;
int main() {
	float height, weight,BMI;
	cout << "Enter the height:" << endl;
	cin >> height;
	cout << "Enter weight:" << endl;
	cin >> weight;
	BMI = (weight / (height * height));
	if (BMI < 18.5) {
		cout << "underweight:" << endl;
	}
	else if (BMI > 18.5 && BMI<=24.9) {
		cout << "normal:" << endl;
	}
	else if (BMI > 25 && BMI <= 29.9) {
		cout << "ower weight:" << endl;
	}
	else if (BMI >=30) {
		cout << "obese:" << endl;
	}
	else {
		cout << "invalid:" << endl;
	}
	cout << BMI << endl;
	system("pause");
	return 0;
}