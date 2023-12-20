#pragma once
#include <string>

void ClearIgnoreInput();
double ReadNumberInput(std::string message);
char ReadOperatorInput();
void PrintAnswerPrefix(double first_number, double second_number, char operator_);