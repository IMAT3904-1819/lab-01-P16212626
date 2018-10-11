// Lab01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <time.h>2

int main()
{
	srand(time(0));
	int solution = round(rand() % 20 + 1);
	int answers[5] = {0,0,0,0,0};
	std::string consAnswer;

	std::cout << "Choose 5 numbers between 0 - 20" << std::endl;

	int amnt = sizeof(answers) / sizeof(int);
	for (int i = 0; i < amnt; i++) {
		std::cin >> answers[i];
	}

	for (int i = 0; i < amnt; i++) {
		if (answers[i] == solution) {
			consAnswer = "You got it right! The answer was " + std::to_string(solution);
			break;
		}
		else consAnswer = "Better luck next time. The answer was " + std::to_string(solution);
	}

	system("cls");
	std::cout << consAnswer << std::endl;
	system("pause");

    return 0;
}

