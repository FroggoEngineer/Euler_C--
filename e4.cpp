/*
#include <iostream>
#include <string>

int main() {

	int largest{ 0 };
	int product{ 0 };

	for (int i{ 999 }; i >= 100; --i) {
		for (int j{ 999 }; j >= 100; --j) {
			product = i*j;
			std::string palin = std::to_string(product);

			//Check if palindrome
			bool found{ true };
			for (int k{ 0 }; k < palin.length() / 2; ++k) {
				if (palin[k] != palin[palin.length() - 1 - k]) {
					found = false;
					break;
				}
			}

			//If it's a palindrome, check if it's the largest found
			if (found) {
				if (product > largest)
					largest = product;
			}

		}
	}

	std::cout << largest << std::endl;
	system("pause");

}
*/