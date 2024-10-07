#include <iostream>
using namespace std;

int main (){
   srand(time(0));
   int num = rand () % 3 + 1;
   cout << num;

    return 0;
}