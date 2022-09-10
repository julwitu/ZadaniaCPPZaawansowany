#include "json.hpp"
#include <iostream>
#include <string>
#include <sstream>
// Utwórz jason z podanego stringa :
//     Nastêpnie wypisz sumê wynagrodzenia wraz z bonusem dla Stefana
using json = nlohmann::json;
int main()
{
    std::string jsonStefan(R"({
        "company":{
            "employee":{
                "name":"Stefan",
                    "payroll" : {
                    "salary":1500,
                        "bonus" : 800
                }
            }
        }
    })");

    json j = json::parse(jsonStefan);
    json employee = j["company"]["employee"];

    std::string name = employee["name"];
    int salary = employee["payroll"]["salary"];
    int bonus = employee["payroll"]["bonus"];
    int sum = salary + bonus;
    std::cout << "Zarobki pracownika " << name << " to: " << sum << std::endl;
}

