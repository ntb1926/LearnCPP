#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cout << "Nhập ba số a, b, c";
    cin >> a >> b >> c ;
    if(a + b > c && a + c > b && b + c > a){
        if ((a * a + b * b == c * c)
        ||(a * a + c * c == b * b)
        ||(b * b + c * c == a * a)){
            cout << "Là một tam giác vuông" << '\n';
        }
        else {
            cout << "không phải tam giác vuông" << '\n';
        }
    }
    else {
        cout << "không phải tam giác vuông" << '\n';
    }
    return 0;
}
 