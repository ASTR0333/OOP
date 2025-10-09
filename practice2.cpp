// 1 задание
//#include <iostream>
//
//int main()
//{
//    setlocale(LC_ALL, "");
//    bool u = 1;
//    using namespace std;
//    string user1 = "astro";
//    int user1_password = 12345;
//    string user;
//    int password;
//    for (int i {0}; i < 3; i++)
//    {
//        cout << "Введите логин и пароль через пробел: ";
//        cin >> user >> password;
//        if (password == user1_password && user == user1)
//        {
//            cout << "Добро пожаловать, astro!\n";
//            u = 0;
//            break;
//        }
//        else
//        {
//            cout << "Неправильный логин или пароль! Повторите попытку. \n" << endl;
//        }
//    }
//    if (u)
//    {
//        cout << "3 попытки исчерпаны. Вы заблокированы!" << endl;
//    }
//    
//    return 0;
//    
//
//}
//

//2 задание
//#include <iostream>
//
//int main() {
//    setlocale(LC_ALL, "");
//    using namespace std;
//    int maks;
//    int k;
//    int n;
//    cout << "Введите количество чисел: ";
//    cin >> k;
//    cout << "\n";
//    
//    int maks;
//    
//    for (int i{0}; i < k; i++) {
//        cout << "Введите число: ";
//        cin >> n;
//        cout << "\n";
//        
//        if (i == 0) {
//            maks = n;
//        } else {
//            
//            if (maks < n) {
//                maks = n;
//            }
//        }
//    }
//    
//    cout << "Максимальное число: " << maks << endl;
//    
//    return 0;
//}

//3 задание
//
//#include <iostream>
//
//int main() {
//    setlocale(LC_ALL, "");
//    using namespace std;
//    int n;
//    int maks;
//    bool u = 1;
//    bool first_number = 1;
//    
//    while (u) {
//        cout << "Введите число: ";
//        cin >> n;
//        
//        if (n == 0) {
//            u = 0;
//        }
//        else {
//            cout << "\n";
//            
//            if (first_number) {
//                maks = n;
//                first_number = false;
//            } else {
//                
//                if (maks < n) {
//                    maks = n;
//                }
//            }
//        }
//    }
//    
//    if (first_number) {
//        cout << "\n";
//        cout << "Был сразу введен 0, программа некорректна!" << endl;
//    }
//    else {
//        cout << "\n";
//        cout << "Максимальное число: " << maks << endl;
//    }
//
//    return 0;
//}
