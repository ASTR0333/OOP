#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <format>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    struct Person {
        std::string family;
        std::string name;
        int years;
        int months;
    };

    std::vector<Person> people;

    for (int i = 0; i < 3; i++) {
        Person person;

        std::cout << "Человек " << i + 1 << ":\n";
        std::cout << "Фамилия: ";
        std::cin >> person.family;
        std::cout << "Имя: ";
        std::cin >> person.name;
        std::cout << "Лет: ";
        std::cin >> person.years;
        std::cout << "Месяцев: ";
        std::cin >> person.months;
        std::cout << "-------------------\n";

        people.push_back(person);
    }

    int max_family = 8, max_name = 3;
    for (const auto& person : people) {
        max_family = std::max<int>(max_family, static_cast<int>(person.family.length()));
        max_name = std::max<int>(max_name, static_cast<int>(person.name.length()));
    }

    max_family += 2;
    max_name += 2;

    std::cout << "\n" << std::string(80, '=') << "\n";

    std::cout << std::format("{:<{}} {:<{}} {:<12} {:<15} {:<15} {:<15}\n",
        "ФАМИЛИЯ", max_family,
        "ИМЯ", max_name,
        "ЛЕТ",
        "МЕСЯЦЕВ",
        "ВСЕГО МЕСЯЦЕВ",
        "ВСЕГО ДНЕЙ");

    std::cout << std::string(max_family + max_name + 60, '-') << "\n";


    for (auto person : people) {
        int total_months = person.years * 12 + person.months;
        int approx_days = total_months * 30; 

        std::cout << std::format("{:<{}} {:<{}} {:<12} {:<15} {:<15} {:<15}\n",
            person.family, max_family,
            person.name, max_name,
            std::format("{} лет", person.years),
            std::format("{} мес", person.months),
            std::format("{} мес", total_months),
            std::format("{} дней", approx_days)) << std::endl;
    }

    return 0;
}

//2 задание

// #include <iostream>
//
// int main() {
//     using namespace std;
//     int number = 10;
//     int* ptr = &number;
//
//     int my_number = 2;
//
//     *ptr += my_number;
//
//     cout << number << endl;
//
//     return 0;
// }

//3 задание

// #include <iostream>
//
// int main() {
//     int a_arr[2];
//     double b_arr[2];
//     char c_arr[2];
//
//     int* a_ptr = a_arr;
//     double* b_ptr = b_arr;
//     char* c_ptr = c_arr;
//
//     int size_a = (int)((char*)(a_ptr + 1) - (char*)(a_ptr));
//     int size_b = (int)((char*)(b_ptr + 1) - (char*)(b_ptr));
//     int size_c = (int)((char*)(c_ptr + 1) - (char*)(c_ptr));
//
//     std::cout  << (void*)a_ptr << " "  << size_a << std::endl;
//     std::cout  << (void*)b_ptr << " "  << size_b << std::endl;
//     std::cout  << (void*)c_ptr << " "  << size_c << std::endl;
//
//     return 0;
// }

