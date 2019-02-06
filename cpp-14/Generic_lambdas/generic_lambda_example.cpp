#include <iostream>


int main()
{

    //C++14 generic lambdas make it possible to write:

    auto lambda = [](auto x, auto y) {return x + y;};

    //C++11 requires that lambda parameters be declared with concrete types:

    int result1 = lambda(2, 3);
    double result2 = lambda(2.4, 5.5);

    std::cout << "Int + Int:\t" << result1 << std::endl; //5
    std::cout << "Double + Double:\t" << result2 << std::endl; //7.9


    return 0;

}
