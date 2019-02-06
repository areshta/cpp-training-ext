#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <tuple>
#include <string_view>
using namespace std;

/* C++ 14 */
template<typename T, typename C>
constexpr int view_sum_c14(T a, C b)
{
    if (std::is_same<T, int>() && std::is_same<C, int>())
    {
        return a + b;
    }else
    {
        return 0;
    }
}

/* C++ 17 */
template<typename T, typename C>
constexpr int view_sum_c17(T a, C b)
{
    if constexpr (std::is_same<T, int>() && std::is_same<C, int>())
    {
        return a + b;
    }else
    {
        return 0;
    }
}

int main()
{
    int a = 44;
    int b = 24;
    std::cout << view_sum_c14(a, b) << std::endl;

    return 0;
}

/*
 Use c++ 14:
 Impliment function witch next requariment:
   1) Finction should return the summ of 10 elements if type INT has been passed as function elements(calculate type passed argument in compare time).
   2) Finction should return the summ of 5 elements if type double has been passed as function elements(calculate type passed argument in compare time).

 Extra:
    Make that use c++ 17 feature
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
