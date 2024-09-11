#include <iostream>
using namespace std;

int main (){
    double temp;
    char unit;

    cout << "*******Temperature Conversion******\n";

    cout << "Bạn muốn chuyển nhiệt độ nào (C or F) ?";
    cin >> unit;

    if(unit == 'F' || unit == 'f' ){
        cout << "Nhập nhiệt độ bạn muốn chuyển";
        cin >> temp;

        temp = (temp * 1.8) + 32;
        cout << "Nhiệt độ là: " << temp << " C\n";
    }
    else if (unit == 'C' || unit == 'c' ){
        cout << "Nhập nhiệt độ bạn muốn chuyển";
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "Nhiệt độ là: " << temp << " F\n";
    }
    else{
        cout << "Bạn chỉ nhập C hoặc F\n";
    }
    
    cout << "***********************************\n";

    return 0;
}