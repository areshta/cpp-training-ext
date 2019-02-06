//============================================================================
// Name        : tuple_addressing_via_type.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <tuple>

class AClass
{
public:
	AClass() {}
	AClass(int i) : field(i) {};
	friend std::ostream& operator<<(std::ostream& stream, const AClass& obj)
	{
		return stream << "AClass object with field " << obj.field;
	}


private:
	int field = 555;
};

int main()
{
	std::tuple<int, std::string, float, AClass> t(-99, "some fancy string here", 78.55e-3, AClass());
	std::cout << std::get<int>(t) << '\n';
	std::cout << std::get<AClass>(t) << '\n';
	std::cout << std::get<std::string>(t) << '\n';
	std::cout << std::get<float>(t) << '\n';
	std::cout << '\n';

	return 0;
}

/*
 * Implement a program checking if tuple addressing via type works correctly
 * with pointers to derived and base classes
 */
 */
