/*
#include <iostream>
#include <vector>

int main() {
	std::vector<int> primes;
	int prime{ 2 };
	primes.push_back(prime);
	__int64 sum{ 0 };

	while (prime < 2000000) {

		sum += prime;

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

	std::cout << sum << std::endl;
	system("pause");
}
*/