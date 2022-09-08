#include "ChangeOptimalizer.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
void ChangeOptimalizer::change(double number) {
	double temp = number * 100;
	int n = 0;
	{
		for (int i = 0; i < values.size(); i++) {
			 n = temp / (values[i]*100);
			if (n == 0) {
				changeToGive.push_back(0);
			}
			else {
				changeToGive.push_back(n);
			}
			temp -= (n * values[i]*100);
		}
	}
}


//void ChangeOptimalizer::receiveChange()
//{
//	std::for_each(toPrint().begin(), toPrint().end(), [](std::string s) {
//		std::cout << s << std::endl;
//		});
//}

void ChangeOptimalizer::receiveChange()
{
	std::vector <std::string> result;
	for (int i = 0; i < values.size(); i++) {
		std::string str = std::to_string(changeToGive[i]) + " x " + std::to_string(values[i]);
		result.push_back(str);
	}

	std::for_each(result.begin(), result.end(), [](std::string s) {
		std::cout << std::setprecision(2);
		std::cout << s << std::endl;
		});
}
