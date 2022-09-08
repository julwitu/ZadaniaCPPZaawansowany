#pragma once
#include <string>
//Poprawic gender na enum class
class Employee
{
public:
	enum class Gender
	{
		MALE,
		FEMALE,
		UNKNOWN
	};
	Employee(std::string firstName, std::string lastName, std::string email, Gender gender, double salary) :
		_firstName(firstName),
		_lastName(lastName),
		_email(email),
		_salary(salary) {};
	std::string getName() {
		return _firstName;
	};
	std::string getSurname() {
		return _lastName;
	};
	std::string getSalary() {
		return std::to_string(_salary);
	}
private:
	std::string _firstName;
	std::string _lastName;
	std::string _email;
	Gender _gender;
	double _salary;
	std::string login;
	std::string password;
};

