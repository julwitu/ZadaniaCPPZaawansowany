#pragma once
#include <string>

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
	Employee() {

	}
	std::string getName() {
		return _firstName;
	};
	std::string getSurname() {
		return _lastName;
	};
	std::string getSalary() {
		return std::to_string(_salary);
	}
	void setName(std::string name) {
		_firstName = name;
	}
	void setSurname(std::string surname) {
		_lastName = surname;
	}
	void setMail(std::string mail) {
		_email = mail;
	}
	void setGender(Gender g) {
		_gender = g;
	}
	void setSalary(double payment) {
		_salary = payment;
	}
	std::string getName() const{
		return _firstName;
	}
	std::string getLastName() const{
		return _lastName;
	}
	std::string getEmail() const{
		return _email;
	}
	Gender getGender() const{
		return _gender;
	}
	double getSalary() const{
		return _salary;
	}
	static std::string toString(Gender g) {
		switch (g) {
		case Gender::FEMALE:
			return "female";
			break;
		case Gender::MALE:
			return "male";
			break;
		case Gender::UNKNOWN:
			return "unknown";
		default:
			return "unknown";
			break;
		}
	}
	static double stringToDouble(std::string str) {
		return std::stod(str);
	}
	static Gender stringToEnum(std::string str) {
		if (str == "female") {
			return Employee::Gender::FEMALE;
		}
		else if (str == "male") {
			return Employee::Gender::MALE;
		}
		else {
			return Employee::Gender::UNKNOWN;
		}
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

