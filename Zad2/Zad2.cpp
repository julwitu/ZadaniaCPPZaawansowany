// Zadanie 2
//Napisz funkcjê, która przyjmie dwa stringi i zwróci ile liter maj¹ wspólnych.
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
int containsSameLetters(const std::string& str1, const std::string& str2) {
		std::vector<char>letters;
		for (int i = 0; i < str1.size(); ++i) {
			for (int j = 0; j < str2.size(); ++j) {
				if (str1[i] == str2[j] && (str1[i] > 64 && str1[i] < 91 || str1[i]> 96 && str1[i] < 123)) {
					letters.push_back(str1[i]);
				}
			}
		}
		std::sort(letters.begin(), letters.end());
		letters.erase(std::unique(letters.begin(), letters.end()), letters.end()); 
		return letters.size();
	}

int main()
{
	std::string first = "abecaaaadlo";
	std::string second = "alfaaaaaaaaaaaaaaabet";
	std::cout << containsSameLetters(first, second);
}

