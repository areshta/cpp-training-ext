#include <iostream>
#include <thread>

using namespace std;


struct MyStruct
{
	explicit MyStruct(int in) : some_field(in) {}
	 
	void show(){
		std::cout << some_field << endl;}

	int some_field;
};

MyStruct operator""_ms(unsigned long long in)
{
	return std::move(MyStruct(in));
}
/*
Only the following parameter lists are allowed on literal operators :

( const char * )
( unsigned long long int )
( long double )
( char )	
( wchar_t )
( char8_t )	(since C++20)
( char16_t )
( char32_t )
( const char * , std::size_t )
( const wchar_t * , std::size_t )
( const char8_t * , std::size_t ) (since C++20)
( const char16_t * , std::size_t )	
( const char32_t * , std::size_t )	
*/
int main()
{
	
	auto some_obj = 123_ms;
	some_obj.show();
	
	std::this_thread::sleep_for(std::chrono::seconds (3)); // C++ 11 style
	std::this_thread::sleep_for(3s);                       // C++ 14 style

	cout << "Exit" << endl;
	return 0;
}

/*
(C++14)

Defined in namespace std::literals::complex_literals
operator""if -> A std::complex literal representing pure imaginary number 
operator""i -> A std::complex literal representing pure imaginary number 
operator""il -> A std::complex literal representing pure imaginary number 

Defined in namespace std::literals::chrono_literals
operator""h -> A std::chrono::duration literal representing hours 
operator""min -> A std::chrono::duration literal representing minutes 
operator""s -> A std::chrono::duration literal representing seconds 
operator""ms -> A std::chrono::duration literal representing milliseconds 
operator""us -> A std::chrono::duration literal representing microseconds 
operator""ns -> A std::chrono::duration literal representing nanoseconds 

Defined in namespace std::literals::string_literals
operator""s -> Converts a character array literal to basic_string 
*/

/*
Task:  create own type (class or struct) with user-defined literals
*/