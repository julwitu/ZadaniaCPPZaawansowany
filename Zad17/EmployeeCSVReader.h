#pragma once
#include "EmployeeReader.h"
#include "Employee.h"
#include<vector>
class EmployeeCSVReader : public EmployeeReader
{
public:
	std::vector<Employee> readEmployees(std::string filePath) override; //wewnatrz tej funkcji mozemy sobie tez od razu tymczasowo utworzyc wszystkie zmienne do oblsugi plikow
	double stringToDouble(std::string str);
	Employee::Gender stringToEnum(std::string str);
private:
	//pola potrzbene do obslugi plików
};

