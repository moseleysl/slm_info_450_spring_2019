// practice2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	
	

	while (1)
	{

		int response = 0;
		bool isPrime = true;

		cout << "Enter a number and I will tell you if it is prime or not. Enter 0 to close" << endl;
		cin >> response;

		if (response == 0) {
			break;
		}
		else {
			for (int i = 2; i < response; i++) {
				if (response <= 3) {
					isPrime = true;
					break;
				}

				else if (response % i == 0) {
					 isPrime = false;
					break;
				}
			}
			if (isPrime) {
				cout << "The number is prime" << endl;
			}
			else {
				cout << "The number is not prime" << endl;
			}
		}
	}

	return 0;
}
