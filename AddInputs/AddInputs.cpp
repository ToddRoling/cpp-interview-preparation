#include "IO.h"

int main() {
	int first_number{ ReadNumber() };
	int second_number{ ReadNumber() };
	WriteAnswer(first_number + second_number);
	return 0;
}