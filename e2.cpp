/*
#include <iostream>

int main() {
	int fib1{ 1 };
	int fib2{ 2 };
	int fib3{ 0 };
	int sum{ 2 }; //Starts at 2 due to the loop starting at 3

	while (true) {
		fib3 = fib2 + fib1;

		if (fib3 >= 4000000)
			break;

		fib1 = fib2;
		fib2 = fib3;

		if (fib3 % 2 == 0) {
			sum += fib3;
		}
	}

	std::cout << sum << std::endl;
	system("pause");
}
*/