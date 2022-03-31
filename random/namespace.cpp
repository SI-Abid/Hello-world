#include<iostream>

namespace namespace_test
{
    static int a = 0;
    void test()
    {
        std::cout << "test " << a << std::endl;
        std::cout << "Hello World!"<<std::endl;
    }
}

using namespace namespace_test;

int main()
{
    test();
    a++;
    test();
    return 0;
}