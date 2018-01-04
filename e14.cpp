//Longest Collatz Sequence
//Using a cache system to speed up checks
/*
#include <iostream>
#include <map>
#include <cassert>
#include <string>

int main() {
	std::map<std::string, int> cache;
	__int64 num{ 0 };		//64bit integers required due to size of numbers handled in the algorithm
	__int64 prevNum{ 0 };
	int counter{ 0 };
	int longest{ 0 };
	int longNum{ 0 };
	for (int i{ 2 }; i < 1000000; ++i) {
		num = i;
		prevNum = num;
		while (num != 1) {
			//Check if number is in cache
			std::map<std::string, int>::iterator it = cache.find(std::to_string(num));
			
			//If found: add length to counter and add to previous number
			if (it != cache.end()) {
				counter += it->second; //get length using iterator
				//std::cout << "Found in cache: " << num << " with length: " << it->second << std::endl;
				if (prevNum != i) {
					cache[std::to_string(prevNum)] = it->second + 1;
					//std::cout << "Adding to cache: " << prevNum << " with length: " << it->second + 1 << std::endl;
				}
				cache[std::to_string(i)] = counter;
				break;
			}
			else { //If not in cache, continue with sequence
				prevNum = num;

				if (num % 2 == 0)
					num /= 2;
				else
					num = 3 * num + 1;
				counter++;
				
				//Reached end of sequence check
				if (num == 1) {
					cache[std::to_string(i)] = counter;
					//std::cout << "Adding: " << i << " to cache with length: " << counter << std::endl;
				}
			}
	

		}
		if (counter > longest) {
			longNum = i;
			longest = counter;
		}
		counter = 0;
	}

	std::cout << "Longest sequence: " << longest << " with starter: " << longNum << std::endl;
	system("pause");

}
*/