#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//#define KEY_UP 72
//#define KEY_DOWN 80
//#define KEY_LEFT 75
//#define KEY_RIGHT 77

struct person {
	bool isAlive = true;
	char firstName[64] = "temp";
	char lastName[64] = "temp";
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
	char* allies = new char[16];
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
		factions[0] = { "USA", factions[2].name, 4.0f, 100 };
		factions[1] = { "RF", factions[3].name, 5.0f, 10 };
		factions[2] = { "EU", factions[0].name, 3.0f, 100 };
		factions[3] = { "CN", factions[1].name, 4.5f, 1000 };

		agents[0] = { true, "Jack","Marston", "USA", 35, 2000, 5 };
		agents[1] = { true, "Jim", "Milton", "USA", 48, 12000, 60 };
		agents[2] = { true, "Jardani", "Jovonovich", "RF", 37, 20000, 299 };
		agents[3] = { true, "Alexander", "Degtyarev", "RF", 35, 1200, 5 };
		agents[4] = { true, "Jacques", "Baguise", "EU", 42, 12000, 45 };
		agents[5] = { true, "Antonio", "Buccarati", "EU", 30, 6000, 24 };
		agents[6] = { true, "Xiaowong", "Zheng", "CN", 35, 12000, 15 };
		agents[7] = { true, "Dai", "Yun", "CN", 35, 40000, 44 };
		


		bool gameLoop = true;
		while (gameLoop) {
			int choice = -1;
			cout << "Faction Name:\t";
			for (int i = 0; i < 4; i++) {
				cout << factions[i].name << "\t";
			}
			cout << endl;
			cout << "Allies:\t\t";
			for (int i = 0; i < 4; i++) {
				cout << factions[i].allies << "\t";
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
			cout << endl << endl;
			cout << "ACTIVE AGENTS:\t";
			for (int i = 0; i < 8; i++) {
				if (agents[i].isAlive == true && strlen(agents[i].lastName) > 5) {
					cout << agents[i].lastName << ", \t";
				}
				else if (agents[i].isAlive == true && strlen(agents[i].lastName) <= 5) {
					cout << agents[i].lastName << ", \t\t";
				}
			}
			cout << endl;
			cout << "\t\t";
			for (int i = 0; i < 8; i++) {
				if (agents[i].isAlive == true && strlen(agents[i].firstName) > 5) {
					cout << agents[i].firstName << " \t";
				}
				else if (agents[i].isAlive == true && strlen(agents[i].firstName) <= 5) {
					cout << agents[i].firstName << " \t\t";
				}

			}
			cout << endl;
			cout << "ALLEGENCE: \t";
			for (int i = 0; i < 8; i++) {
				if (agents[i].isAlive == true) {
					cout << agents[i].allegence << " \t\t";
				}
			}
			cout << endl;
			cout << "AGE: \t\t";
			for (int i = 0; i < 8; i++) {
				if (agents[i].isAlive == true) {
					cout << agents[i].age << " \t\t";
				}
			}
			cout << endl;
			cout << "PRICE: \t\t";
			for (int i = 0; i < 8; i++) {
				if (agents[i].isAlive == true) {
					cout << agents[i].cash << " \t\t";
				}
			}
			cout << endl;
			cout << "KILLCOUNT: \t";
			for (int i = 0; i < 8; i++) {
				if (agents[i].isAlive == true) {
					cout << agents[i].killcount << " \t\t";
				}
			}
			cout << endl << "Choose an agent to utilize: \n";
			while (true) {
				cin >> choice;
				choice--;
				if (choice < 0 || choice > 8) {
					cout << "Invalid agent ID\n\n";
				}
				else {
					break;
				}
			}
			cout << "Choose a task for agent " << agents[choice].firstName << " " << agents[choice].lastName << ".\n";
			cout << "[1] Disrupt a country's finances\n[2] Disrupt an alliance\n";
			cout << "[3] Assassinate another agent\n[4] Skip turn\n";
			cin >> choice;
			switch (choice)
			{
			case 1:

			default:
				break;
			}


		}
	}
	return 0;
}