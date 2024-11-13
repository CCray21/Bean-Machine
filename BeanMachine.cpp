#include "BeanMachine.h"
#include <iostream>
#include <ctime>
using namespace std;

BeanMachine::BeanMachine(int rows) : rows(rows)
{
	binsCount = rows + 1;
	bins = new int[binsCount]();
	srand(time(0));
}

BeanMachine::~BeanMachine()
{
	delete[] bins;
}

void BeanMachine::DropBall()
{
	int position = 0;
	for (int i = 0; i < rows; i++)
	{
		if ((rand()) % 2 == 0)
		{
			position++;
		}
	}
	bins[position]++;
}

void BeanMachine::Simulate(int balls)
{
	for (int i = 0; i < balls; i++)
	{
		DropBall();
	}
}

void BeanMachine::Display()
{
	cout << "Ball distribution:\n";
	for (int i = 0; i < rows; i++)
	{
		cout << "Bin " << i + 1 << " " << bins[i] << '\n';
	}
}