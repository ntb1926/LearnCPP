# C++ 

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











