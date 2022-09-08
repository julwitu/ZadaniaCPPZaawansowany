#include "EmployeeManager.h"
#include <map>
#include <algorithm>
#include <iostream>
#include <iterator>
EmployeeManager::EmployeeManager(std::shared_ptr<EmployeeReader> fileReader, std::shared_ptr<EmployeeWriter> fileWriter) :
	_fileReader(fileReader),
	_fileWriter(fileWriter)
{
}
void EmployeeManager::readDataFromFile(std::string filePath)
{
	employees = _fileReader->readEmployees(filePath);
}

void EmployeeManager::generateLogin()
{
	//std::map<std::string, std::string> credentials;
	auto addLogin = [this](Employee empl) {
		std::string temp1 = empl.getName();
		std::string temp2 = empl.getSurname();
		std::string login;
		for (int i = 0; i < 2; i++) {
			login += temp1[i];
		}
		for(int i = 0; i < 2; i++){
			login += temp2[i];
		}
		credentials.insert({ login, " " });
	};

	std::for_each(employees.begin(), employees.end(), addLogin);

}
