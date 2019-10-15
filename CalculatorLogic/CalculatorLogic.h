#pragma once
#include <stack>

//int Calculation(float a, float b, char command);
//void infixToPostfix(string userInput);
//int checkPresedence(char x, char presedence);

class CalculatorLogic
{
private:
	int numA, numB;
	char op;

public:
	CalculatorLogic();
	~CalculatorLogic();

	float Calculator(std::string input);
	float calculate(float, float, char);
	std::stack<char> infixToPostfix(std::stack<char> infix);
	char checkPresedence(char, char);
	float stackCalculation(std::stack<char> postfixNotation);
};