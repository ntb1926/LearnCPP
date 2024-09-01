#include <iostream>
using namespace std;

int main () {
   int thoitiet;
   bool sunny = false;
   cout << "Thời tiết chỗ bạn bây giờ: ";
   cin >> thoitiet;

   if(thoitiet <= 0 || thoitiet >= 30 ){
     cout << "Thời tiết rất xấu!\n";
   }
   else{
     cout << "Thời tiết rất đẹp!\n";
   }

   if(!sunny){
      cout << "Ngoài trời rất nhiều mây";
   }
   else{
      cout << "Ngoài trời rất nắng";
   }
   return 0;
}