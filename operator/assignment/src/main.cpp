/* assignment 

khi bạn muốn gán từ đối tượng này sang một đối tượng khác.

trong C++ nó sẽ tự tạo ra phép gán nếu chúng ta không tự định nghĩa 

Point& operator=(const Point& other)
{
    x = other.x;

    return *this;
}
==> thì phép gán nó vẫn đúng. 
Vây khi nào chúng ta cần định nghĩa lại phép gán operator.ADJ_OFFSET_SINGLESHOT
    + Điều khiển cách gán theo ý muốn 
    + Phù hợp với các lớp phức tạp với tài nguyên tự cấp phát 
    + hổ trợ xâu chuỗi nhiều phép gán.


*/

#include<iostream>

class Point{

public:
    int x;
Point& operator=(const Point& other)
{
    x = other.x;

    return *this;
}

void print()
{
    std::cout << "data: " << x << std::endl;
}
};

int main(void)
{
    Point a;
    Point b;
    Point c;

    a.x = 7;
    b.x = 8;
    c.x = 9;

    c = b = a; // chaining_assingment

    std::cout << "a.x = " << a.x << std::endl;
    std::cout << "b.x = " << b.x << std::endl;
    std::cout << "c.x = " << c.x << std::endl;
    return 0;
}

