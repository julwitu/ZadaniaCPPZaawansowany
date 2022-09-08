

#include <iostream>
#include "json.hpp"
#include <fstream>
using json = nlohmann::json;

int main()
{
	json j;
	j["imie"] = "Julia";
	j["nazwisko"] = "Witucka";
	j["list"] = { 1, 0, 2 };
	j["praca"]["sda"] = "student";
	j["praca"]["most"] = "pracownik";
	j["wiek"] = 27;
	j["adres"]["ulica"] = "D.Balaciart";
	j["adres"]["numer"] = 15;
	j["obcnosc"] = true;
	std::ofstream o("ja.json");
	o << std::setw(4) << j << std::endl;
}

