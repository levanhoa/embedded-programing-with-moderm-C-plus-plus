#include <iostream>

class A
{
public:
    virtual void print()
    {
        std::cout << "Class A init" << std::endl;
    }
};


class B : public A
{
public:
    void print()
    {
        std::cout << "Class B init" << std::endl;
    }
};
int main(void)
{
    A * obj = new B;
    obj->print();
    return 0;
}
