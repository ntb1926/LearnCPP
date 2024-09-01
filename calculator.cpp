#include <iostream>
using namespace std;
int main (){
    char pheptinh;
    double num1;
    double num2;
    double ketqua;

    cout << "***************CALCULATOR***************\n";

    cout << "Chọn phép tính (+, -, *, /): ";
    cin >> pheptinh;

    cout << "Nhập số thứ 1: ";
    cin >> num1;

    cout << "Nhập số thứ 2: ";
    cin >> num2;

    switch(pheptinh){
        case '+':
           ketqua = num1 + num2;
           cout << "Kết quả là: " << ketqua << '\n' ;
           break;
    case '-':
           ketqua = num1 - num2;
           cout << "Kết quả là: " << ketqua << '\n' ;
           break;
    case '*':
           ketqua = num1 * num2;
           cout << "Kết quả là: " << ketqua << '\n';
           break;
    case '/':
           ketqua = num1 / num2;
           cout << "Kết quả là: " << ketqua << '\n' ;
           break;
    default :
            cout << "Phép tinh không hợp lệ" << '\n';
    }
    cout << "********************************";
    return 0;
}