#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;

class road_vehicle {
private:
	string vehicle;
	int wheels;
	int passengers;
	int cargo;
	string type;
	road_vehicle *next;

public:
	void insert(string vehicle, int wheels, int passengers, int cargo, string type);
	road_vehicle(string vehicle, int wheels, int passengers, int cargo, string type);
	void print();
};

road_vehicle::road_vehicle(string Vehicle, int Wheels, int Passengers, int Cargo, string Type) {
	vehicle = Vehicle;
	wheels = Wheels;
	passengers = Passengers;
	cargo = Cargo;
	type = Type;
	next = NULL;
}

void road_vehicle::insert(string vehicle, int wheels, int passengers, int cargo, string type) {
	if (next != NULL) {
		next->insert(vehicle, wheels, passengers, cargo, type);
	}
	else {
		next = new road_vehicle(vehicle, wheels, passengers, cargo, type);
	}
}

void road_vehicle::print()
{
	ofstream output;
	output.open("output.txt");

	if (output.is_open()) {
		road_vehicle *temp = next;
		while (temp != NULL) {
			cout << "Car: " << temp->vehicle << "\n";
			output << temp->vehicle + "\n";
			cout << "Wheels: " << temp->wheels << "\n";
			output << temp->wheels;
			output << "\n";
			cout << "Passengers: " << temp->passengers << "\n";
			output << temp->passengers;
			output << "\n";
			if (temp->vehicle == "automobile") {
				cout << "Type: " << temp->type << "\n";
				output << temp->type + "\n";
			}
			else {
				cout << "Cargo: " << temp->cargo << "\n";
				output << temp->cargo;
				output << "\n";
			}

			temp = temp->next;
		}
		output.close();
	}
	else
	{
		cout << "File did not open " << "\n";
	}
}

int main() {
	string newEntry;
	road_vehicle *head = new road_vehicle(" ", 0, 0, 0, " ");

	while (true) {
		string vehicle;
		cout << "Is this an automobile or a truck? Enter 'automobile' or 'truck': ";
		cin >> vehicle;

		int wheels;
		cout << "How many wheels are on this vehicle ";
		cin >> wheels;

		int passengers;
		cout << "How many passengers can fit into this vehicle ";
		cin >> passengers;

		if (vehicle == "truck") {
			int cargo;
			cout << "How much cargo can this vehicle hold? ";
			cin >> cargo;
			head->insert(vehicle, wheels, passengers, cargo, " ");
		} else {
			string automobileType;
			cout << "What type of automobile is this? Enter van, car, or wagon : ";
			cin >> automobileType;
			head->insert(vehicle, wheels, passengers, 0, automobileType);
		}

		cout << "Would you like to enter another vehicle? yes or no : ";
		cin >> newEntry;

		if (newEntry == "no") {
			break;
		}
	}
	head->print();
}
