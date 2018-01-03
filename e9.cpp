/*
#include <iostream>

//Brute force solution for now
int main() {
	int product{ 0 };
	bool done{ false };

	for (int i{ 1 }; i < 500; ++i) {
		for (int j{ 1 }; j < 500; ++j) {
			double c = sqrt(i*i + j*j);
			if ((i + j + c) == 1000) {
				product = i*j*c;
				done = true;
				break;
			}
		}
		if (done)
			break;
	}

	std::cout << product << std::endl;
	system("pause");
}
*/