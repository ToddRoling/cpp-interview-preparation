#include "IO.h"

int main() {
	int first_number{ ReadIntegerInput() };
	int second_number{ ReadIntegerInput() };
	WriteAnswer(first_number + second_number);
	return 0;
}