#include <iostream>
#include <string>
using namespace std;
//Логічні оператори та оператори розгалужень
//Основи програмування на мові С++
//Завдання 1 
//int main() {
//    string input;
//    cout << "Enter a six-digit number: ";
//    cin >> input;
//
//    if (input.length() != 6 || !isdigit(input[0])) {
//        cout << "Error" << endl;
//        return 1;
//    }
//
//    int firstSum = 0, secondSum = 0;
//    for (int i = 0; i < 3; ++i) {
//        firstSum += input[i] - '0';
//        secondSum += input[i + 3] - '0';
//    }
//
//    if (firstSum == secondSum) {
//        cout << "Number " << input << " is lucky" << endl;
//    }
//    else {
//        cout << "Number " << input << " is not lucky" << endl;
//    }
//}
//Завдання 2 
int main() {
    string input;
    cout << "Enter a four-digit number: ";
    cin >> input;

    if (input.length() != 4 || !isdigit(input[0])) {
        cout << "Error" << endl;
        return 1;
    }

    swap(input[0], input[1]);

    swap(input[2], input[3]);

    cout << "The result after exchanging numbers: " << input << endl;
}
