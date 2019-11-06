#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;


void ageGate() {
	int age = -1;
	cout << "What is your age?" << endl;
	cin >> age;
	if (age >= 16 && age < 18) {
		cout << "You're old enough to legally drive.";
	}
	else if (age >= 18 && age < 21) {
		cout << "You're old enough to legally smoke (until 2020, anyways).";
	}
	else if (age >= 21)
	{
		cout << "You're old enough to legally drink and smoke.";
	}
	else {
		cout << "Babby....";
	}
	if (age) {

	}
	cout << endl;
}
void celFahr() {
	float degCelsius = 0.0f;
	float degFahrenheit = 0.0f;
	int tempInt = -1;
	cout << "Choose a method of conversion:\n[1]Celsius to Fahrenheit\n[2]Fahrenheit to Celsius\n";
	cin >> tempInt;
	if(tempInt == 1)
	{
		cout << "Enter a temperature in Celsius\n";
		cin >> degCelsius;
		degFahrenheit = (degCelsius * 9 / 5) + 32;
		cout << "Your temperature is " << degFahrenheit << " Degrees Fahrenheit\n";
	}
	else if (tempInt == 2)
	{
		cout << "Enter a temperature in Fahrenheit\n";
		cin >> degFahrenheit;
		degCelsius = (degFahrenheit - 32) * 5/9;
		cout << "Your temperature is " << degCelsius << " Degrees Celsius\n";
	}
	else {}
}
void rectArea() {
	float rWidth = 0.0f;
	float rHeight = 0.0f;
	float rArea = 0.0f;
	cout << "Please enter a value for the rectangle's Width\n";
	cin >> rWidth;
	cout << "Please enter a value for the rectangle's height\n";
	cin >> rHeight;
	rArea = rWidth * rHeight;
	cout << "The area of the rectangle is " << rArea << "^2, or " << rArea * rArea<<".\n";
}
void findAverage() {
	float arrayAvg[5];
	float a, b, c, d, e, avg;
	avg = a = b = c = d = e = 0;
	/*for(int i = 0; i < arrayAvg::size(); i++)
	{
		cout << "Please enter a value for " << arrayAvg[i];	
		cin >> arrayAvg[i];
	}*/
	cout << "Please enter a value for a\n";
	cin >> a;						   
	cout << "Please enter a value for b\n";
	cin >> b;						   
	cout << "Please enter a value for c\n";
	cin >> c;						   
	cout << "Please enter a value for d\n";
	cin >> d;						   
	cout << "Please enter a value for e\n";
	cin >> e;

	avg += a;
	avg += b;
	avg += c;
	avg += d;
	avg += e;
	avg = avg / 5;
	cout << "Your average is: " << avg << ".\n";
}
void oneHundred() {
	for (int i = 0; i < 100; i++)
	{
		cout << i + 1 << endl;
	}
}void hundredOne() {
	/*for (int i = 100; i > 0; i--)
	{
		cout << i << endl;
	}*/
	int i = 100;
	while (i > 0) {
		cout << i << endl;
		i--;
	}
}
void evenOdd() {
	int oddOrEven = 0;
	cout << "Please enter a number\n";
	cin >> oddOrEven;
	if (oddOrEven % 2 == 0)
		cout << oddOrEven << " is even\n";
	else
		cout << oddOrEven << " is odd\n";
}
void smallestArray() {
	float tempArray[5];
	cout << "Please enter a value for a\n";
	cin >> tempArray[0];
	cout << "Please enter a value for b\n";
	cin >> tempArray[1];
	cout << "Please enter a value for c\n";
	cin >> tempArray[2];
	cout << "Please enter a value for d\n";
	cin >> tempArray[3];
	cout << "Please enter a value for e\n";
	cin >> tempArray[4];
	int n = sizeof(tempArray) / sizeof(tempArray[0]);
	std::sort(tempArray, tempArray + n);
	cout << "The smallest number is: " << tempArray[0] << "\n\n";
}
void leapYear() {
	
	for (int year = 0; year < 3000; year++) {
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
			cout << year << endl;
		}
	}
}
void gorillazReference() {
	int monkeyJungle = 1994;
	do {
		cout << ++monkeyJungle << endl;
	} while (monkeyJungle < 2019);
}
void helloFunctions() {
	cout << "Hello Functions\nPlease enter a number.";
	int a, b;
	cin >> a;
	cout << a << "squared is " << a * a;
}

int main()
{
	cout << 5 << 0 <<5<<endl << "Test\n";
	bool loop1 = true;
	while (loop1) 
	{
		cout << "Please select an exercise:\n[1] Age Gate\n[2] Fahrenheit/Celcius Converter\n";
		cout << "[3] Area of a Rectangle\n[4] Average of 5\n[5] 1-100\n[6] 100-1\n[7] Smallest of an Array\n";
		cout << "[8] Even or Odd\n[9] Leap Year\n[10] 1995 - 2019\n[11] Hello Functions\n";

		int choice = -1;
		cin >> choice;
		if (choice == 1) {
			ageGate();
		}
		else if (choice == 2)
		{
			celFahr();
		}
		else if (choice == 3)
		{
			rectArea();
		}
		else if (choice == 4)
		{
			findAverage();
		}
		else if (choice == 5)
		{
			oneHundred();
		}
		else if (choice == 6)
		{
			hundredOne();
		}
		else if (choice == 7)
		{
			smallestArray();
		}
		else if (choice == 8)
		{
			evenOdd();
		}
		else if (choice == 9)
		{
			leapYear();
		}
		else if (choice == 10)
		{
			gorillazReference();
		}
		else if (choice == 11)
		{
			helloFunctions();
		}
		//age = -1;
		//cout << "Wow, you're old fam at age of " << age << endl;
	}
	
	return 0;
}
