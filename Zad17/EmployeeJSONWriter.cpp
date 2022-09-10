#include <fstream>
#include "Employee.h"
#include "EmployeeJSONWriter.h"
#include "json.hpp"
using json = nlohmann::json;
void to_json(json& j, const Employee& e) {
	j = { {"firstName", e.getName()}, {"lastName", e.getLastName()}, {"email", e.getEmail()}, {"gender", Employee::toString(e.getGender())}, {"salary", e.getSalary()}};
}
void EmployeeJSONWriter::writeEmployees(std::vector<Employee> employees, std::string filePath)
{
	std::ofstream o(filePath);
	json j;
	j["Employees"];
	j = json(employees);

	o << std::setw(4) << j << std::endl;
}
