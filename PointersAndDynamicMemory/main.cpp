#include <iostream>

using std::cout;
using std::cin;
using std::endl;


struct person {
	int age;
	float cash;
	int killcount;
};

float getMoney(person* target, float withdraw) {
	float loss = (*target).cash < withdraw ? (*target).cash : withdraw;

	(*target).cash -= loss;

	return loss;

}

void erasePerson(person** target) {
	(*target) = nullptr;
}

int sum(int* numbers, size_t length)
{
	int total = 0;
	for (size_t i = 0; i < length; ++i)
	{
		total += numbers[i];
	}
	return total;
}

int* zeroArray(size_t length) {
	int* arr = new int[length];
	for (size_t i = 0; i < length; ++i) {
		arr[i] = 0;
	}
	return arr;
}
 
void printFloats(float* arr, int size) {
	float temp = 0;
	for (size_t i = 0; i < size; ++i) {
		temp += arr[i];
	}
	cout << *arr;
}

int main() 
{
	cout << "Please select an exercise\n[1] Intro\nThe Mugging of Jon\n";
	int choiceInt = 0;
	cin >> choiceInt;
	if (choiceInt = 1) {
		int tenants = 10;
		int* landLord = new int;
		int* properties = new int[tenants];

		*landLord = 5;
		//std::cout << *bruh << std::endl;
		/*for (size_t i = 0; i < 1; ++i) {
			brodies[i] = i;
		}*/

		/*
		for (size_t i = 0; i < 1; ++i) {
			std::cout << brodies[i] << std::endl;
		}*/
		properties[0] = 5;
		properties[1] = 2;
		properties[2] = 51;
		properties[3] = 9;
		properties[4] = 0;
		properties[5] = 12;
		properties[6] = 21;
		properties[7] = 10;
		properties[8] = 64;
		properties[9] = 8;

		int * noWalls = zeroArray(1000);

		int total = sum(noWalls, 1000);

		delete landLord;
		delete[] properties;
		delete[] noWalls;

		int* something = new int;
		*something = 55;
		delete something;
		something = nullptr;
		if (something != nullptr) {
			std::cout << *something << std::endl;
		}
		else {
			std::cout << "Something was null!" << std::endl;
		}
	}
	else if (choiceInt = 2) {
		person jon;
		jon.age = 25;
		jon.cash = 40.68;
		jon.killcount = 10;
	}

	return 0;
}