//1 задание
//#include <iostream>
//
//int main() {
//    setlocale(LC_ALL, "");
//    using namespace std;
//    
//    int kt;
//    int el;
//    int maxi;
//    int maxi_j;
//    
//    cout << "Введите количество чисел (не более 20): ";
//    cin >> kt;
//    if (kt<=20) {
//        const int k = kt;
//        int massiv[k];
//        cout << "\n";
//        for (int i = 0;i<k;i++) {
//            cout << "Введите число: ";
//            cin >> el;
//            massiv[i] = el;
//            cout << "\n";
//        }
//        
//        for (int j = 0; j<kt; j++)
//        {
//            if (j==0) {
//                maxi = massiv[j];
//                maxi_j = 0;
//            }
//            if (massiv[j] > maxi) {
//                maxi = massiv[j];
//                maxi_j = j;
//            }
//        }
//        cout << "Максимальное число и его индекс: " << maxi << " " << maxi_j;
//    }
//    else {
//        cout << "\nПрограмма работает с количеством чисел не более 20.";
//    }
//    cout << "\n" << endl;
//    
//    return 0;
//}

//2 задание
//#include <iostream>
//
//
//
//
//int main() {
//    using namespace std;
//    setlocale(LC_ALL, "");
//    int rows, cols;
//    
//
//    cout << "Введите количество строк (не более 20): ";
//    cin >> rows;
//    cout << "Введите количество столбцов (не более 20): ";
//    cin >> cols;
//    
//    const int rows_const = rows;
//    const int cols_const = cols;
//    
//
//    if (rows <= 0 || rows > 20 || cols <= 0 || cols > 20) {
//        cout << "Ошибка: количество строк и столбцов должно быть от 1 до 20" << endl;
//        return 1;
//    }
//    
//
//    int matrix[rows_const][cols_const];
//    
//
//    cout << "Введите элементы массива:" << endl;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//    
//
//    cout << "\nИсходный массив:" << endl;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout << matrix[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    
//
//    int minimax = matrix[0][0];
//    for (int j = 1; j < cols; j++) {
//        if (matrix[0][j] < minimax) {
//            minimax = matrix[0][j];
//        }
//    }
//    
//    cout << "Минимум в строке 1: " << minimax << endl;
//    
//    for (int i = 1; i < rows; i++) {
//        int row_min = matrix[i][0];
//        for (int j = 1; j < cols; j++) {
//            if (matrix[i][j] < row_min) {
//                row_min = matrix[i][j];
//            }
//        }
//        
//
//        if (row_min > minimax) {
//            minimax = row_min;
//        }
//        
//
//        cout << "Минимум в строке " << i + 1 << ": " << row_min << endl;
//    }
//    
//
//    cout << "\nМинимакс матрицы: " << minimax << endl;
//    
//    return 0;
//}

//задание 3
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    string str;
//    
//    cout << "Введите строку: ";
//    getline(cin, str);
//    
//    int count = 0;
//    for (char c : str) {
//        if (c == 'G' || c == 'g') {  
//            count++;
//        }
//    }
//    
//    cout << "Буква G встречается " << count << " раз(а)" << endl;
//    
//    return 0;
//}
