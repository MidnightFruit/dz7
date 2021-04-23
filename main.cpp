#include <iostream>

#define IS_IN_RANGE(number, max) (((number) >= 0) &&((number) < (max)))
#define GET_ELEMENT(array, x, y) (*(*((array) +(y)) + (x)))
#define ARRAY_SIZE(array) (sizeof(array) / sizeof((array)[0]))
int main()
{
    int** m = new int*[32]{};
    for (size_t i = 0; i <32; i++)
    {
        m[i] = new int[32]{};
    }
    m[2][8] = 5;
    std::cout << GET_ELEMENT(m, 8, 2) << "\n";
    int m1[120]{};
    std::cout << ARRAY_SIZE(m1);
    return 0;
}
