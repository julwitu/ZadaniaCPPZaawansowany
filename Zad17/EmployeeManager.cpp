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

void EmployeeManager::generatePassword()
{
//passwordLength: Wylosuj docelow¹ iloœæ znaków has³a 8 - 12 (stworz zmienna pomocnicz¹ charLeft = passwordLength)
//smallLetterCount : Wylosuj ile ma byc ma³ych liter(od 1 do passwordLength - 4) (charLeft -= smallLetterCount)
//capitalLetterCount : Wylosuj ile ma byc duzych liter(od 1 do charLeft - 3) (charLeft -= capitalLetterCount)
//numbersCount : Wylosuj ile ma byc liczb(od 1 do charLeft - 2) (charLeft -= numbersCount)
//specialCharCount zawsze bêdzie równe charLeft
//Wylosowac znaki i dodac je do tymczasowego stringa
//przemieszac stringa(std::shuffle)
}

void EmployeeManager::saveToFile(std::string filePath)
{
	_fileWriter->writeEmployees(employees, filePath);
}

int EmployeeManager::calculateFirstNameStarting(char firstLetter)
{
	int counter = std::count_if(employees.begin(), employees.end(), [firstLetter](Employee e) {
		return e.getName()[0] == firstLetter;
		});
	return counter;

}

std::set<std::string> EmployeeManager::calculateUniqueNames()
{
	std::set<std::string>uniqueNames;
	std::copy_if(employees.begin(), employees.end(), std::back_inserter(uniqueNames), [](Employee e) {return e.getName(); });
	std::for_each(uniqueNames.begin(), uniqueNames.end(), [](std::string str) {std::cout << str << std::endl; });
	return uniqueNames;
}
