#pragma once
class BeanMachine
{
public:
	BeanMachine(int rows);
	~BeanMachine();
	void Simulate(int balls);
	void DropBall();
	void Display();
private:
	int rows;
	int binsCount;
	int* bins;
	int balls;
};

