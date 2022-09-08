#pragma once
#include <vector>
#include <string>
//Napisz program, który wypisze najbardziej optymalny schemat wydawania reszty dla podanej kwoty.
//(nomina³y: 200, 100, 50, 20, 10, 5, 2, 1, 0.50, 0.20, 0.10, 0.05, 0.02, 0.01)
class ChangeOptimalizer
{
	std::vector<double> values{ 200.00, 100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.20, 0.10, 0.05, 0.02, 0.01 };
	std::vector<int> changeToGive;
public:
	void change(double number);
	void receiveChange();
	//std::vector<std::string> toPrint();
};

