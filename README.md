# Learning C++ 

# 1. OUTPUT
`std::cout << “tên cần hiển thị” << std::endl;`

**Ex:**
```c++
#include <iostream>
int main() {
    std::cout << 'Hello World!' <<std::endl;
    return 0;
}
```
# 2.BIẾN VÀ KIỂU DỮ LIỆU
## 2.1: KHAI BÁO VÀ GẮN
- **số nguyên**
`int tên = 1 số nguyên bất kỳ ; `

**Ex**
1.
```c++
#include <iostream>
int main () {
     int x = 5;
     std::cout << x << std::endl;
     return 0;
}
```
2.
```c++
#include <iostream>
int main () {
    int x = 5;
    int y = 6;
    int cong = x+y;
    std::cout << cong << std::endl;
    return 0;
}
```
- **số thập phân**

`float tên = 1 số thập phân bất kỳ ;`
**or**
`double tên = 1 số thập phân bất kỳ ;`

**Ex**
```c++
#include <iostream>
int main () {
    double x = 7.5;
     std::cout << x << std::endl;
     return 0;
}
```
## 2.2: KIỂU KÍ TỰ
`char tên = ' nhập một chữ cái bất kỳ ' ;`

**Ex**
```c++
#include <iostream>
int main () {
    char x =  'A'  ;
    char y =  '$'  ;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    return 0;
}
```
## 2.3: STRING
`std::string tên = 'nhập dòng chữ bất kỳ ';`

**Ex**
1.
```c++
#include <iostream>
int main () {
    std::string x = " nguyễn thanh bình " ;
    std::cout << x << std::endl;
    return 0;
}
```
2.
```c++
#include <iostream>
int main () {
    std::string x = "nguyễn" ;
    std::string y = "bình";
    std::cout << "Hello"  <<  x  + " " + y << std::endl;
    return 0;
}
```
## 2.4: TRUE OR FALSE
`bool tên = true ;`
**or**
`bool tên = false ;`

**Ex**
```c++
#include <iostream>
int main () {
    bool x = true ;
    bool y = false ;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    return 0;
}
```
# 3.INPUT
`std::cin >> tên cần đưa ra >> std::endl;`

**Ex**
```c++
#include <iostream>
int main () {
    std::string a;

    std::cout << “ tên bạn là gì: “;
    std::cin >> a;
    std::cout << “ tên bạn là: “ << a ;

    return 0;
}
```

`std::getline(cin, tên)`

**Ex**
1.
```c++
#include <iostream>
int main() {
    int x;
    std::string a;

    std::cout << "tên bạn là gì :";
    std::getline(std::cin, a);

    std::cout << "How old are you";
    std::cin >> x;

    std::cout << "tên bạn là :" << a << '\n';
    std::cout << "tuổi bạn là:" << x;

    return 0;
}
```
2.
```c++
#include <iostream>
int main() {
    int x;
    std::string a;

    std::cout << "How old are you";
    std::cin >> x;

    std::cout << "tên bạn là gì :";
    std::getline(std::cin >> std::ws , a);

    std::cout << "tên bạn là :" << a << '\n';
    std::cout << "tuổi bạn là:" << x;

    return 0;
}
```
# 4.IF ELSE
```
if (điều kiện bạn muốn nhập){
    std::cout << " dòng chữ bạn muốn nhập nếu đúng ";
    } 
    else {
        std::cout << " dòng chữ bạn muốn nhập nếu sai ";
    }
```

**Ex**
1.
```c++
#include <iostream>
int main()
{
    int x;
    std::cout << "5 + 7 =";
    std::cin >> x;
    if (x == 12){
        std::cout << "đúng rồi";
    }
    else {
        std::cout << "sai rồi";
    }

    return 0;
}
```
2.
```c++
#include <iostream>
int main()
{
    srand(time(0));
    int random1 = rand() % 10;
    int random2 = rand() % 10;
    int a;
    std::cout << random1;
    std::cout << "+";
    std::cout << random2;
    std::cout << "=";
    std::cin >> a;
    if (a == random1 + random2){
        std::cout << "đúng rồi";
    }
    else {
        std::cout << "sai rồi";
    }

    return 0;
}
```
3.
```c++
#include <iostream>>
using namespace std;

int main (){
    int age;
    cout << "Nhập tuổi của bạn: ";
    cin >> age;
    
    if(age > 100){
        cout << "Bạn quá già để tham gia";
    }
    else if(age >= 18){
        cout << "Chào mừng bạn tham gia";
    }
    else if(age < 0){
        cout << "Bạn chưa được sinh ra";
    }
    else {
        cout << "Bạn không đủ tuổi để tham gia";
    }
    return 0;
}
```
# 5.FOR
```
for(statement 1; statement 2; statement 3){
    std::cout << "câu bạn in ra màn hình" << "\n",
}
```
**Ex**
```c++
#include <iostream>
int main()
{
    for(int i = 1; i <= 3; i++){
        std::cout << "yes" << "\n";
    }
    return 0;
}
```
# 6.Typedef and type aliases
- là một danh từ khoá được sử dụng để tạo thêm một tên bổ sung cho một kiểu dữ liệu khác
**Ex**
```c++
#include <iostream>
using namespace std;

typedef string text;
typedef int number; 
int main()
{
    text FirstName = "Binh";
    number age = 18;
    cout << FirstName << '\n';
    cout << age << '\n';
        return 0;
}
```
- Nên sử dụng **using** thay **typedef** vì nó phổ biến hơn, phù hợp với các kiểu dữ liệu 

**Ex**
```c++
#include <iostream>
using namespace std;

using text = string ;
using number = int; 
int main()
{
    text FirstName = "Binh";
    number age = 18;
    cout << FirstName << '\n';
    cout << age << '\n';
        return 0;
}
```
# 7.Arithmetic operators (Toán tử số học)
- Toán tử số học trả về kết quả của một phép toán số học cụ thể như +, -, *, /

**Ex**
```c++
#include <iostream>
using namespace std;

int main()
{
    int number = 1;
    //number = number + 1 ; (Cách viết 1)
    //number+=1; (Cách viết 2)
    //number++; (cách viết 3)

    //number = number - 1;
    //number-=1;
    //number--;

    //number = number * 2;
    //number*=2;

    //number = number / 2;
    //number/=2;

    cout << number ;
    
    return 0;
}
```
# 8. Useful math related functions (Các hàm toán học hữu ích)
## 1.Max
- trả về kết quả lớn hơn trong 2 biến: `std::max(biến 1, biến 2);`

**Ex**
```c++
#include <iostream>
int main() {
    int x = 3;
    int y = 4;
    int z;

    z = std::max(x, y);
    std::cout << z;
    
    return 0;
}
```
## 2.Min
- trả về kết quả nhỏ nhất trong 2 biến: `std::min(biến 1, biến 2);`

**Ex**
```c++
#include <iostream>
int main() {
    int x = 3;
    int y = 4;
    int z;

    z = std::min(x, y);
    std::cout << z;
    
    return 0;
}
```
## 3.pow
- là hàm được sử dụng để tính lũy thừa giữa hai số x và y: `std::pow(x, y);`

**Ex**
```c++
#include <iostream>
#include <cmath>

int main() {
    double x = 3;
    double y = 4;
    double z;

    z = std::pow(2, 3);
    std::cout << z;

    return 0;
}
```
## 4.Sqrt
- là hàm được sử dụng để tính căn bậc hai của một số: `std::sqrt(x);`

**Ex**
```c++
#include <iostream>
#include <cmath>

int main() {
    double x = 9;
    double z;
    
    z = std::sqrt(x);
    std::cout << z;

    return 0;
}
```
## 5.abs
- giúp chúng ta tính giá trị tuyệt đối: 
`std::abs(x);`

**Ex**
```c++
#include <iostream>
#include <cmath>

int main() {
    double x = -3;
    double z;

    z = std::abs(x);
    std::cout << z;

    return 0;
}
```
## 6.round
-  là hàm được sử dụng để làm tròn một số thập phân.Một số sẽ được làm tròn lên 1 đơn vị nếu phần thập phân >= 5 và lượt bỏ phần thập phân nếu < 5.: `std::round(x);`

**Ex**
```c++
#include <iostream>
#include <cmath>

int main() {
    double x = 3.14;
    double z;

    z = std::round(x);
    std::cout << z;

    return 0;
}
```
## 7.ceil
- là hàm được sử dụng để làm tròn số nguyên gần nhất. Một số được truyền vào hàm ceil sẽ được làm tròn lên một đơn vị nếu nó có phần thập phân:
`std::ceil(x);`

**Ex**
```c++
#include <iostream>
#include <cmath>

int main() {
    double x = 3.14;
    double z;

    z = std::ceil(x);
    std::cout << z;

    return 0;
}
```
## 8.floor
- là hàm được sử dụng để làm tròn xuống: 
`std::floor(x);`

**Ex**
```c++
#include <iostream>
#include <cmath>

int main() {
    double x = 3.7;
    double z;

    z = std::floor(x);
    std::cout << z;

    return 0;
}
```
## Practice:Tính độ dài cạnh huyền
```c++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double a, b, c;
   cout << "Nhập a";
   cin >> a;

   cout << "Nhập b";
   cin >> b;

   c = sqrt(pow(a, 2) + pow(b, 2));
   cout << "Độ dài cạnh huyền là: " << c;

    return 0;
}
```
# 9.Switch
- thay thế cho việc sử dụng nhiều thứ khác nếu câu lệnh nó so sánh một giá trị với nhiều trường hợp phù hợp.
- Cú pháp:
```c++
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
```
**Ex**
```c++
#include <iostream>>
using namespace std;

int main (){
    int month;
    cout << "Nhập tháng (1-12): ";
    cin >> month;

    switch(month){
        case 1:
           cout << "Bây giờ là tháng 1";
           break;
        case 2:
           cout << "Bây giờ là tháng 2";
           break;
        case 3:
           cout << "Bây giờ là tháng 3";
           break;
        case 4:
           cout << "Bây giờ là tháng 4";
           break;
        case 5:
           cout << "Bây giờ là tháng 5";
           break;
        case 6:
           cout << "Bây giờ là tháng 6";
           break;
        case 7:
           cout << "Bây giờ là tháng 7";
           break;
        case 8:
           cout << "Bây giờ là tháng 8";
           break;
        case 9:
           cout << "Bây giờ là tháng 9";
           break;
        case 10:
           cout << "Bây giờ là tháng 10";
           break;
        case 11:
           cout << "Bây giờ là tháng 11";
           break;
        case 12:
           cout << "Bây giờ là tháng 12";
           break;
        default:
           cout << "Chỉ nhập số từ 1 đến 12";
    }
    return 0;
}
```

**Practice**:Tạo một máy tính
```c++
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
```

# 10.Ternary Operator

**Cú pháp**:`variable = (condition) ? expressionTrue : expressionFalse;`

**Ex**
```c++
#include <iostream>
#include <string>
using namespace std;

int main () {
   int diem;

   cout << "Nhập điểm của bạn: ";
   cin >> diem;

   (diem >= 6) ? cout << "You pass!" : cout << "You Fail!";
 
   return 0;
}
```
## 11.Logical Operators
## 1.AND
- Kí hiệu: **&&**
- Trả về True nếu cả 2 câu lệnh đều đúng
- Example: `x < 5 &&  x < 10`
## 2.OR
- Kí hiệu: **||**
- Trả về True nếu 1 trong 2 câu lệnh đúng
- Example: `x > 4 || x < 3`
## 3.NOT
- Kí hiệu: **!**
- Đảo ngược kết quả, trả về False nếu kết quả đúng
- Example: `!(x < 5 && x < 10)`

**EX**
1.
```c++
#include <iostream>
using namespace std;

int main () {
   int thoitiet;
   cout << "Thời tiết chỗ bạn bây giờ: ";
   cin >> thoitiet;

   if(thoitiet > 0 && thoitiet <= 30 ){
     cout << "Thời tiết rất đẹp!";
   }
   else{
     cout << "Thời tiết rất xấu!";
   }
   return 0;
}
```
2.
```c++






