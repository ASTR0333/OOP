// 1 задание



//#include <iostream>
//#include <windows.h>
//#include <string>
//
//
//int main()
//{
//    SetConsoleCP(1251); SetConsoleOutputCP(1251);
//    std::string familia1;
//    std::string imya1;
//    int goda1;
//    int mesyaca1;
//    std::string familia2;
//    std::string imya2;
//    int goda2;
//    int mesyaca2;
//    std::string familia3;
//    std::string imya3;
//    int goda3;
//    int mesyaca3;
//
//    std::cout << "Введи фамилию, имя и возраст : ";
//    std::cin >> familia1 >> imya1 >> goda1 >> mesyaca1;
//    std::cout << "\n";
//    std::cout << "Введи фамилию, имя и возраст : ";
//    std::cin >> familia2 >> imya2 >> goda2 >> mesyaca2;
//    std::cout << "\n";
//    std::cout << "Введи фамилию, имя и возраст : ";
//    std::cin >> familia3 >> imya3 >> goda3 >> mesyaca3;
//    std::cout << "\n";
//
//    familia1 += std::string(15 - familia1.length(), ' ');
//    imya1 += std::string(15 - imya1.length(), ' ');
//    std::string godaStr1 = std::to_string(goda1) + std::string(10 - std::to_string(goda1).length(), ' ');
//    std::string mesyacaStr1 = std::to_string(mesyaca1) + std::string(10 - std::to_string(mesyaca1).length(), ' ');
//    std::string totalMonths1 = std::to_string(goda1 * 12 + mesyaca1) + std::string(15 - std::to_string(goda1 * 12 + mesyaca1).length(), ' ');
//
//    familia2 += std::string(15 - familia2.length(), ' ');
//    imya2 += std::string(15 - imya2.length(), ' ');
//    std::string godaStr2 = std::to_string(goda2) + std::string(10 - std::to_string(goda2).length(), ' ');
//    std::string mesyacaStr2 = std::to_string(mesyaca2) + std::string(10 - std::to_string(mesyaca2).length(), ' ');
//    std::string totalMonths2 = std::to_string(goda2 * 12 + mesyaca2) + std::string(15 - std::to_string(goda2 * 12 + mesyaca2).length(), ' ');
//
//    familia3 += std::string(15 - familia3.length(), ' ');
//    imya3 += std::string(15 - imya3.length(), ' ');
//    std::string godaStr3 = std::to_string(goda3) + std::string(10 - std::to_string(goda3).length(), ' ');
//    std::string mesyacaStr3 = std::to_string(mesyaca3) + std::string(10 - std::to_string(mesyaca3).length(), ' ');
//    std::string totalMonths3 = std::to_string(goda3 * 12 + mesyaca3) + std::string(15 - std::to_string(goda3 * 12 + mesyaca3).length(), ' ');
//
//    std::cout << familia1 << imya1 << godaStr1 << mesyacaStr1 << totalMonths1 << (goda1 * 12 + mesyaca1) * 30 << "\n";
//    std::cout << "\n";
//    std::cout << familia2 << imya2 << godaStr2 << mesyacaStr2 << totalMonths2 << (goda2 * 12 + mesyaca2) * 30 << "\n";
//    std::cout << "\n";
//    std::cout << familia3 << imya3 << godaStr3 << mesyacaStr3 << totalMonths3 << (goda3 * 12 + mesyaca3) * 30 << std::endl;
//
//    return 0;
//}


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

