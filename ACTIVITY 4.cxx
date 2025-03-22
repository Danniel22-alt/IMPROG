// Danniel A. Placido
//BSIT-1R

#include <iostream>
#include <string>
#include <ctime>

std::string getUserName() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    return name;
}

std::string getUserBirthdate() {
    std::string birthdate;
    std::cout << "Enter your birthdate (2005-02-22): ";
    std::getline(std::cin, birthdate);
    return birthdate;
}

int calculateAge(const std::string& birthdate) {
    int year, month, day;
    sscanf(birthdate.c_str(), "%d-%d-%d", &year, &month, &day);

    time_t now = time(0);
    tm *ltm = localtime(&now);

    int currentYear = 1900 + ltm->tm_year;
    int currentMonth = 1 + ltm->tm_mon;
    int currentDay = ltm->tm_mday;

    return currentYear - year - ((currentMonth < month) || (currentMonth == month && currentDay < day));
}

void displayInfo(const std::string& name, int age) {
    std::cout << name << ", 20: " << age << std::endl;
}

int main() {
    std::string name = getUserName();
    std::string birthdate = getUserBirthdate();
    int age = calculateAge(birthdate);
    displayInfo(name, age);
    return 0;
}