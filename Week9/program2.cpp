#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <sstream>

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

void road_vehicle::print() {

	road_vehicle *temp = next;
	while (temp != NULL) {
		cout << "{\"road_vehicle\": \"" << temp->vehicle << "\",";
		cout << "\"wheels\": " << temp->wheels << ",";
		cout << "\"passengers\": " << temp->passengers << ",";

		if (temp->vehicle == "automobile") {
			cout << "\"type\": " << temp->type << "\"}\n";
		}
		else {
			cout << "\"cargo\": " << temp->cargo << "}\n";
		}
		temp = temp->next;
	}
}

int main() {
	string newEntry;
	string line;
	road_vehicle *head = new road_vehicle(" ", 0, 0, 0, " ");

	ifstream file("output.txt");

	if (file.is_open()) {
		while (getline(file, line)) {
			string car = line;

			int wheels;
			getline(file, line);
			stringstream capture(line);
			capture >> wheels;

			int passengers;
			getline(file, line);
			stringstream capture2(line);
			capture2 >> passengers;

			if (car == "truck") {
				int cargo;
				getline(file, line);
				stringstream capture3(line);
				capture3 >> cargo;
				head->insert(car, wheels, passengers, cargo, " ");
			}
			else {
				string type;
				getline(file, line);
				type = line;
				head->insert(car, wheels, passengers, 0, type);
			}
		}
		file.close();
		head->print();
	}
	else {
		cout << "File did not open";
	}
}
