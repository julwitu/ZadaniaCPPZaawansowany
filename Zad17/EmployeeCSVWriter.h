#pragma once
#include "EmployeeWriter.h"
#include <vector>

class EmployeeCSVWriter : public EmployeeWriter
{
public:
	void writeEmployees(std::vector<Employee> employees, std::string filePath) override;
};

