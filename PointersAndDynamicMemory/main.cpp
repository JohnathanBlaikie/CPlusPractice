#include <iostream>

using std::cout;
using std::cin;
using std::endl;


struct person {
	bool isAlive = true;
	char name[64] = "temp";
	char allegence[64] = "temp";
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

struct countries {
	char name[64] = "Temp";
	float stability = 0.0f;
	int GDP = 0;
};

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
	cout << "Please select an exercise\n[1] Intro\n[2] The Mugging of Jon\n[3] Redstring\n";
	int choiceInt = 0;
	cin >> choiceInt;
	if (choiceInt == 1) {
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
	else if (choiceInt == 2) {
		person* jon = new person;
		float bounty = 0.0f;
		(*jon).age = 25;
		(*jon).cash = 40.68;
		(*jon).killcount = 10;
		cout << "Age: " << (*jon).age << ", Cash: " << (*jon).cash << ", Killcount: " << (*jon).killcount << "\nEnter the amount you want to steal: ";
		cin >> bounty;
		getMoney(jon, bounty);
		cout << "New Balance: " << (*jon).cash;
		while (true);
	}
	else if (choiceInt == 3) {
		countries* factions = new countries[4];
		person* agents = new person[8];
		factions[0] = { "USA", 4.0f, 100 };
		factions[1] = { "RF", 5.0f, 10 };
		factions[2] = { "EU", 3.0f, 100 };
		factions[3] = { "CN", 4.5f, 1000 };

		agents[0] = { true, "Jack Marston", factions[0].name, 35, 12000, 15 };
		


		bool gameLoop = true;
		while (gameLoop) {
			int choice = -1;
			cout << "Faction Name:\t";
			for (int i = 0; i < 4; i++) {
				cout << factions[i].name << "\t";
			}
			cout << endl;
			cout << "Stability:\t";
			for (int i = 0; i < 4; i++) {
				cout << factions[i].stability << "\t";
			}
			cout << endl;
			cout << "Funds:\t\t";
			for (int i = 0; i < 4; i++) {
				cout << "$" << factions[i].GDP << "B\t";
			}
			cout << endl;

			cin >> choice;

		}
		person* jon = new person;
		float bounty = 0.0f;
		(*jon).age = 25;
		(*jon).cash = 40.68;
		(*jon).killcount = 10;
		cout << "Age: " << (*jon).age << ", Cash: " << (*jon).cash << ", Killcount: " << (*jon).killcount << "\nEnter the amount you want to steal: ";
		cin >> bounty;
		getMoney(jon, bounty);
		cout << "New Balance: " << (*jon).cash;
	}
	return 0;
}