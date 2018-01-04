/*
#include <iostream>
#include <vector>
#include <chrono>

int main() {
	auto t = std::chrono::high_resolution_clock::now();

	std::vector<int> primes;
	primes.reserve(10002);
	int prime{ 2 };
	primes.push_back(prime);
	
	prime = 3;
	primes.push_back(prime);
	bool primeNotFound{ true };

	while (primes.size() < 10001) {
		primeNotFound = true;
		while (primeNotFound) {

			prime += 2;
			double sqPrime = sqrt(prime);
			for (int i{ 0 }; i < primes.size(); ++i) {
				primeNotFound = false;
				if (prime % primes[i] == 0) { //Check only towards previous primes
					primeNotFound = true;
					break;
				}
				else if (primes[i] >= sqPrime) { //If primes are bigger or equal to square root of the number, break
					break;
				}

			}
		}
		primes.push_back(prime);
	}
	auto endt = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli> elapsedTime = endt - t;
	
	std::cout << elapsedTime.count() << "ms" << std::endl;
	std::cout << primes[10000] << std::endl;
	system("pause");

}
*/
