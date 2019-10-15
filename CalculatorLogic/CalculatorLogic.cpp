
#include "stdafx.h"
#include "CalculatorLogic.h"
#include <iostream>
#include <stack>
#include <string>
#include <math.h>
#include <cctype>
#include <cmath>

using namespace std;


float answer;


CalculatorLogic::CalculatorLogic()
{
}

CalculatorLogic::~CalculatorLogic()
{
}

//The logic behind the calulator that calls each function while passing the correct stacks
float CalculatorLogic::Calculator(std::string input)
{
	//Gets the input from the user from the GUI and checks each value and then puts it into a stack
	stack<char> inputStack;
	for (int i = input.length() - 1; i >= 0; i--)
	{
		//looks at each position in userInput and puts it onto a stack
		char c = input.at(i);
		inputStack.push(c);
	}
	stack<char> postfix = infixToPostfix(inputStack);
	float answer = stackCalculation(postfix);
	return answer;
}

//Takes 2 digits and a operator which will have maths done on it.
float CalculatorLogic::calculate(float a, float b, char command)
{
	if (command == '+')
		answer = a + b;
	else if (command == '-')
		answer = a - b;
	else if (command == '*')
		answer = a * b;
	else if (command == '/')
		answer = a / b;
	else if (command == '^')
		answer = pow(a, b);
	else
		cout << "The operator entered is invalid.";
	return answer;
}

//Takes the input that the user has put in to changes it from its current form "1+2" into postfix form "12+"
std::stack<char> CalculatorLogic::infixToPostfix(std::stack<char> infix)
{
	//Sets up all the stacks that are needed along with variables for presedence and top
	stack<char> PostfixStack;
	stack<char> OperatorStack;
	stack<char> InfixStack;
	char presedence;
	char top;

	//Takes the input stack from SimpleCalculator.cpp and will continue to go through the stack until it is empty 
	while (!infix.empty())
	{
		//Puts the top value of the stack into the variable x
		char x = infix.top();
		//If the value in x is a digit it will push the value straight to the postfix stack
		if (std::isdigit(x))
		{
			PostfixStack.push(x);
		}
		//If the value is not a digit and is one of the below operators it will check to see if the operator stack is empty
		//if it is empty the value will be pushed straight to the operator stack, if it isnt empty then it will the current operator
		//will be checked against the operator in the operator stack.
		else if (x == '+' || x == '-' || x == '*' || x == '/' || x =='^')
		{
			if (OperatorStack.empty())
			{
				presedence = x;
				OperatorStack.push(x);
			}
			else if (!OperatorStack.empty())
			{
				//If the operator stack is not empty the checkPresedence function is called which has a full list of combinations
				//that will determine if the the stack should be emptied or if the opeartor should be placed on top of the operator stack.
				//If the new operator is of lower presedence than what is on the stack the operator stack will be emptied.
				if (checkPresedence(x, presedence) == 1)
				{
					//Will empty the operator stack and put it onto the postfix stack. It will then place the new operator onto the 
					//operator stack
					while (!OperatorStack.empty())
					{
						top = OperatorStack.top();
						PostfixStack.push(top);
						OperatorStack.pop();
					}
					OperatorStack.push(x);
				}
				//If the operator is of higher presedence the operator will be pushed straight to the operator stack
				else if (checkPresedence(x, presedence) == 0)
				{
					OperatorStack.push(x);
				}
			}
		}
		//The infix stack will then be poped so the next value can be checked
		infix.pop();
	}
	//Moves all of the values from the postfix stack on top of the operator stack so it will be ready to do calculations on
	while (!PostfixStack.empty())
	{
		top = PostfixStack.top();
		OperatorStack.push(top);
		PostfixStack.pop();
	}
	return OperatorStack;
}


//Checks the value on top of the operator stack compared to the value that is potentially being pushed to the operator stack
char CalculatorLogic::checkPresedence(char x, char presedence)
{
	//When popStack is 0 the operator will not be emptied, when it is 1 the operator stack will be emptied
	//Uses BODMAS to decide presedence,
	int popStack = 0;
	if ((presedence == '*' || presedence == '/') && (x == '+' || x == '-'))
	{
		popStack = 1;
	}
	else if ((presedence == '+' || presedence == '-') && (x == '*' || x == '/' || x == '^'))
	{
		popStack = 0;
	}
	else if ((presedence == '+' || presedence == '-') && (x == '+' || x == '-'))
	{
		popStack = 1;
	}
	else if ((presedence == '/' || presedence == '*') && (x == '*' || x == '/' || x == '^'))
	{
		popStack = 1;
	}
	else if ((presedence == '^') && (x == '*' || x == '/' || x == '+' || x == '-'))
	{
		popStack = 1;
	}
	else if ((presedence == '^') && (x == '^'))
	{
		popStack = 1;
	}
	return popStack;
}

//Takes the operator stack from the infixToPostfix function and does calculations on it to return an answer that can be returned to the user.
float CalculatorLogic::stackCalculation(stack<char> postfixNotation)
{
	stack<float> reserveStack;

	//While the stack that is passed to the function is not empty the while loop will run and will eventually solve the equation
	while (!postfixNotation.empty())
	{
		float a;
		float b;
		char command;
		float answer;

		char x = postfixNotation.top();
		postfixNotation.pop();
		//If the value x is a digit the value is pushed to the reseve stack, the reason for the "- '0'" is to turn the value from ASCII 
		//to a normal value
		if (std::isdigit(x))
		{
			reserveStack.push(x - '0');
		}
		//If the value stored in x is not a digit then the top two values in the resevestack are stored in a and b and passed to the function calculate with the operator
		//that it had just come across, the value is then returned to this function and pushed back onto the reserve stack allowing
		//for more calculations to be done on the number.
		else if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^')
		{
			command = x;
			b = reserveStack.top();
			reserveStack.pop();
			a = reserveStack.top();
			reserveStack.pop();
			answer = calculate(a, b, command);
			reserveStack.push(answer);
		}
	}
	//When the postfixNotation is empty one value will be left in the reserve stack that will be passed back to SimpleCAlulator.cpp
	//that will be shown as the answer to the user.
	return reserveStack.top();
}