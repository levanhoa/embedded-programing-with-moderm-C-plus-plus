/* assignment 

Trong lập trình C++, "Gán phức tạp với tài nguyên" là khái niệm liên quan đến việc thực hiện phép gán giữa các đối tượng mà các đối tượng này quản lý tài nguyên. Các tài nguyên này có thể là:

Bộ nhớ động (dynamic memory)

Tệp tin (file handles)

Kết nối mạng (sockets)

Tài nguyên hệ thống khác (mutex, database connections)

Vấn đề cần giải quyết:
Khi gán một đối tượng cho đối tượng khác (sử dụng toán tử =), cần đảm bảo rằng:

Tài nguyên cũ của đối tượng bên trái phải được giải phóng.

Tài nguyên từ đối tượng bên phải được sao chép đúng cách.

Không gây ra rò rỉ bộ nhớ hoặc sử dụng tài nguyên không hợp lệ.

Xử lý tự gán (self-assignment) an toàn.
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

