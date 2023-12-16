#include <iostream>

union
{

    uint32_t data;
    uint8_t a[4];

} endianess;

int main()
{
    endianess.data = 0x01020304;
    if (endianess.a[0] == 0x01)
    {
        std::cout << "Big Endia" << std::endl;
    }
    else
    {
        std::cout << "Little Endia " << std::endl;
    }

    return 0;
}
