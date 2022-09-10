#include "json.hpp"
#include <iostream>
#include <vector>
#include <fstream>

using json = nlohmann::json;

	class Student
	{
		std::string firstName;
		std::string lastName;
	public:
		Student(std::string firstName, std::string lastName) {
			this->firstName = firstName;
			this->lastName = lastName;
		}
		Student() {

		}
		std::string getName() const{
			return firstName;
		}
		std::string getSurname() const{
			return lastName;
		}
		void setName(std::string name) {
			firstName = name;
		}
		void setSurname(std::string surname) {
			lastName = surname;
		}
	};


	void to_json(json& j, const Student& s) {
		j = json{ {"firstName", s.getName()}, {"lastName", s.getSurname()} };
	}

	void from_json(const json& j, Student& s) {
		s.setName(j["firstName"].get<std::string>());
		s.setSurname(j["lastName"].get<std::string>());
	}

int main()
{
    std::vector<Student> students;
	students.emplace_back("Sean", "Brown");
	students.emplace_back("Drake", "Williams");
	students.emplace_back("Tom", "Miller");
	students.emplace_back("Peter", "Jonson");

	json j;
	j["Students"] = json(students);

    std::ofstream o("students.json");
    o << std::setw(4) << j << std::endl;
	//Wczytaj plik students.json do listy, a nastêpnie wypisz na konsolê dane wszystkich studentów.

	std::ifstream ifs("students.json");
	json jf = json::parse(ifs);

	std::list<Student> studentsList;
	for (auto& elem : jf["Students"]) {
		studentsList.push_back(elem.get<Student>());
	}
	std::for_each(studentsList.begin(), studentsList.end(), [](const Student& s) {
		std::cout << "Imie: " << s.getName() << "; Nazwisko: " << s.getSurname() << std::endl;
		});
}
