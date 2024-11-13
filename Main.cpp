#include "BeanMachine.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "How many balls would you like to drop?\n";
	int balls;
	cin >> balls;
	cout << "How many rows would you like to drop the balls through?\n";
	int rows;
	cin >> rows;

	BeanMachine machine(rows);

	machine.Simulate(balls);

	machine.Display();
}