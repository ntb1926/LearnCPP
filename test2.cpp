#include <iostream>
using namespace std;

int main (){
   string name;
   cout << "Nhập tên của bạn: ";
   getline (cin, name);

   // if(name.length() > 7) {  (Trả về độ dài của một chuỗi)          
   //   cout << "Tên của bạn quá dài!";
   // }
   // else {
   //  cout << "Welcome " << name;
   // }

   // if(name.empty()){      (Kiểm tra xem chuỗi rỗng hay không)
   //   cout << "Bạn chưa nhập tên!";
   // }
   // else {
   //   cout << "Welcome " << name;
   // }

   // name.clear();        (Xóa chuỗi bạn nhập)
   // cout << "Welcome " << name;

   // name.append (" Nguyen");      (Nối chuỗi này với chuỗi khác)
   // cout << "Hello "<< name;

   // cout << name.at(1);    (Trả về một kí tự trong chuỗi) 

   // name.insert (0, "@");    (Chèn kí tự khác vào ô chỉ định)
   // cout << name;

   // cout << name.find("B");    (Trả về vị trí kí tự được nhập đầu tiên)

   name.erase(0, 6);
   cout << name;

    return 0;
}