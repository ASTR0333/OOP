//1 задание
//#include <iostream>
//using namespace std;
//
//float maxi(float a, float b)
//{
//    float maximum = a;
//    if (maximum<b) {
//        maximum = b;
//    }
//    return maximum;
//    
//}
//
//
//
//int main() {
//    setlocale(LC_ALL, "");
//    float p1;
//    float p2;
//    cout << "Введите первое число: ";
//    cin >> p1;
//    cout << "\n";
//    cout << "Введите второе число: ";
//    cin >> p2;
//    cout << "\n";
//    float maxis = maxi(p1,p2);
//    cout << "Максимум среди двух чисел: " << maxis << "\n" << endl;
//    return 0;
//}

// 2 задание
// #include <iostream>
// using namespace std;
//
// float findMax(float a, float b) {
//     return (a > b) ? a : b;
// }
//
// float findMax(float arr[], int n) {
//     float max = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     return max;
// }
//
// int main() {
//     setlocale(LC_ALL, "");
//     int n;
//     cout << "Введите количество элементов массива (не более 20): ";
//     cin >> n;
//     cout << "\n";
//
//     if (n > 20 || n <= 0) {
//         cout << "Некорректное количество элементов!" << endl;
//         return 1;
//     }
//
//     float arr[20];
//     for (int i = 0; i < n; i++) {
//         cout << "Введите элемент массива: ";
//         cin >> arr[i];
//         cout << "\n";
//
//     }
//
//     float maxElement = findMax(arr, n);
//     cout << "Максимальный элемент массива: " << maxElement << endl;
//
//     return 0;
// }

//3 задание
// #include <iostream>
// using namespace std;
//
//
// void inputNumbers(float &a, float &b) {
//     cout << "Введите первое число: ";
//     cin >> a;
//     cout << "\n";
//     cout << "Введите второе число: ";
//     cin >> b;
//     cout << "\n";
// }
//
//
// float findMax(float a, float b) {
//     return (a > b) ? a : b;
// }
//
// int main() {
//     setlocale(LC_ALL, "");
//     float num1, num2;
//
//     inputNumbers(num1, num2);
//
//     float maximum = findMax(num1, num2);
//     cout << "Наибольшее число: " << maximum << endl;
//
//     return 0;
// }

// 4 задание
// #include <iostream>
// using namespace std;
//
//
// void inputArray(float arr[], int &n) {
//     cout << "Введите количество элементов (не более 20): ";
//     cin >> n;
//     cout << "\n";
//
//     if (n > 20 || n <= 0) {
//         cout << "Некорректное количество элементов!" << endl;
//         n = 0;
//         return;
//     }
//
//     for (int i = 0; i < n; i++) {
//         cout << "Введите элемент массива: ";
//         cin >> arr[i];
//         cout << "\n";
//     }
// }
//
// void printArray(float arr[], int n) {
//     cout << "Массив: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
//
// int main() {
//     setlocale(LC_ALL, "");
//     float arr[20];
//     int n;
//
//     inputArray(arr, n);
//
//     if (n > 0) {
//         printArray(arr, n);
//     }
//
//     return 0;
// }
