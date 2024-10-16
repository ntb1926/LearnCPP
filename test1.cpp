#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance)
{
    cout << "Số dư của bạn là: " << std::setprecision(3) << std::fixed << balance << "$" << '\n';
}
double Deposit()
{
    double amount;
    cout << "Nhập số tiền bạn muốn gửi: ";
    cin >> amount;
    if (amount > 0)
    {
        return amount;
    }
    else
    {
        cout << "Giá trị không hợp lệ! \n ";
        return 0;
    }
}

double Withdraw(double balance)
{
    double amount;
    cout << "Nhập số tiền bạn muốn rút: ";
    cin >> amount;
    if (amount > balance)
    {
        cout << "Số dư của bạn không đủ! \n ";
        return 0;
    }
    else if (amount < 0)
    {
        cout << "Giá trị không hợp lệ! \n";
        return 0;
    }
    else
    {
        return amount;
    }
}

int main()
{
    double balance = 123.092;
    int choice = 0;

    do
    {
        cout << "************************** \n";
        cout << "Nhập lựa chọn của bạn \n";
        cout << "************************** \n";
        cout << "1. Hiện Số Dư của bạn \n";
        cout << "2.Nạp Tiền \n";
        cout << "3.Rút tiền \n";
        cout << "4.Thoát \n";
        cin >> choice;

        if (cin.fail()) {
                cin.clear(); 
                cin.ignore(256, '\n'); 
            }  

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance = balance + Deposit();
            showBalance(balance);
            break;
        case 3:
            balance = balance - Withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            cout << "Cảm ơn! \n";
            break;
        default:
            cout << "Không hợp lệ!\n";
        }
    } while (choice != 4);

    return 0;
}