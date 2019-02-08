#include <vector>
#include <functional>
#include <iostream>

using namespace std;

function<int(int)> closure_sum(int a)
{
    return [=](int b)mutable {

        return a + b;
    };
}

function<int(void)> foo(int x)
{
    int i = x; // this variable after closure like "static"
    return [=] () mutable {
        
        return ++i; 
    };
} 


int main()
{   
    // function closure
    cout << "\nSum example: 1 + 2 = " << closure_sum(1)(2) << endl << endl;
    
    // currying function
    auto currying_example = closure_sum(100);
    cout << "Currying with base 100, (with 10) = " << currying_example(10) << ", (with -10) = " << currying_example(-10) << endl << endl;
    
    // using closure 
    auto closure = foo(1);
    for (int j = 0; j < 5; ++j) {

        cout << "Closure result: " << closure() << endl;
    }
    cout << endl;

    
    cout << "Lambda vector:" << endl;
    vector<function<void(void)>> lambda_array;
    for(size_t i = 0; i != 10; ++i){

        lambda_array.push_back([=]() {cout << i + 5 << endl;});
    }
    for(const auto& lambda : lambda_array) {

        lambda();
    }

    return 0;
}