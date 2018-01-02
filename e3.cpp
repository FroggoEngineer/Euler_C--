/*
#include <iostream>
#include <vector>

int main() {
	long long int num{ 600851475143 };
	int prime{ 2 };

	//Save all previous primes to use for finding new primes following "The Fundamental Theorem of Arithmetic"
	std::vector<int> primes;
	primes.push_back(prime);

	while (num != prime) {
		

		if (num % prime == 0) {
			num /= prime;
		}
		else {
			//Find next prime
			int count{ prime + 1 };
			bool primeNotFound{ true };
			while (primeNotFound) {

				prime++;
				for (int i{ 0 }; i < primes.size(); ++i) {
					primeNotFound = false;
					if (prime % primes[i] == 0) {
						primeNotFound = true;
						break;
					}
						
				}
			}
			primes.push_back(prime);
		}
	}

	std::cout << prime << std::endl;
	system("pause");
}
*/