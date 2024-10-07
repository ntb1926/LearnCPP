#include <iostream>
using namespace std;

void bakePizza(){
    cout << "Here is your pizza" << '\n';
}
void bakePizza(string topping1, string topping2){
    cout << "Here is your " << topping1 << " and " << topping2 <<"pizza" << '\n';
}

int main(){
    bakePizza("sausage", "cheese");
    
    return 0;
}