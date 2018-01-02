/*
#include <iostream>
#include <vector>

int main() {
	std::vector<int> primes;
	int prime{ 2 };
	primes.push_back(prime);
	

	while (primes.size() < 10001) {
		bool primeNotFound{ true };
		while (primeNotFound) {

			prime++;
			for (int i{ 0 }; i < primes.size(); ++i) {
				primeNotFound = false;
				if (prime % primes[i] == 0) { //Check only towards previous primes
					primeNotFound = true;
					break;
				}
				else if (primes[i] >= sqrt(prime)) { //If primes are bigger or equal to square root of the number, break
					break;
				}

			}
		}
		primes.push_back(prime);
	}

	std::cout << primes[10000] << std::endl;
	system("pause");

}
*/