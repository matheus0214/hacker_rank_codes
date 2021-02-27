#include <iostream>

using namespace std;

struct Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main()
{
    Student person;

    std::cin >> person.age >> person.first_name >> person.last_name >> person.standard;

    std::cout << person.age << std::endl;
    std::cout << person.first_name << std::endl;
    std::cout << person.last_name << std::endl;

    return 0;
}