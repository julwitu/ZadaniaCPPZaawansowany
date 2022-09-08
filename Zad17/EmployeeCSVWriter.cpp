#include "EmployeeCSVWriter.h"
#include <iostream>
#include <fstream>
void EmployeeCSVWriter::writeEmployees(std::vector<Employee> employees, std::string filePath)
{
	std::ofstream _filestream(filePath, std::ios::out | std::ios::app);
	if (_filestream.is_open() && _filestream.good()) {
		for (int i = 0; i < employees.size(); i++){
			_filestream << employees[i].getName() << ", " << employees[i].getSurname() << ", " << employees[i].getSalary() << "\n";
			}
		}
		_filestream.close();
}

