#include "EmployeeJSONReader.h"
#include <fstream>
#include <iostream>
#include "json.hpp"
using json = nlohmann::json;

void from_json(const json& j, Employee& e) {

}

std::vector<Employee> EmployeeJSONReader::readEmployees(std::string filePath)
{
	std::vector <Employee> employees;
	return employees;
}
