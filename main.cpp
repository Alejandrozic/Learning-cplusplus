#include <iostream>
#include <cassert>
#include "my_basic_class.h"
#include <string>

using std::cout;
using std::cin;
using std::endl;
using my_basic_class_namespace::my_basic_class;

void _variables();
void _assert();
void _big_o();
void _time_analysis();
void _namespace_usage();
void _reference_pointer();
void _change_by_reference(int& y, const int& x);
void _change_by_pointer(int* y);
void _typedef();


int main() {
	_reference_pointer();
	return EXIT_SUCCESS;
}

void _variables() {
	/*
		const <data type> <variable name> = <value>;
	*/

	// -- Static Initialization : Variable is assigned in advance(usually constants).
	int a = 10;
	// -- Dynamic Initialziation : Variable is assigned at run time.
	int b;
	cin >> b;
	
	// -- c-like initialization
	int c = 0;
	// -- constructor initialization [C++ Only]
	int d(10);
	// -- uniform initialization
	int e{ 0 };

	/*
		Type		Size(Bytes)
		----		-----------
		char		1
		int			4
		float		4
		double		8
		bool		1

		Use: sizeof(bool) to check size.
		
		signedis a number from -(2^x) to (2^x)
		unsigned is a number from 0 to (2^x)
		
		short < int < long
	*/
}

void _assert() {
	/*
		Required: #include <cassert>

		When done testing, you can turn off all debugging 
		with #define NDEBUG
	*/
	assert( 1 + 2 == 3);
}

void _big_o() {
	/*
		Linear			O(n)
		Quadratic		O(n^2)
		Logarithmic		O(log(n))
	*/
}

void _time_analysis() {
	/*
		Time Analysis is the analysis of how many operations an
		algorithm requires. Expressed in Big-O notation.
	*/
}

void _namespace_usage() {
	/*
		Allows us to group entities into what would
		otherwise be global scope.

		Ex. 1
		int value = 10;
		int value = 11;
		! Compile ERROR

		Ex. 1 (fixed with namespace)
		namespace n1{ int value = 10; }
		namespace n1{ int value = 11; }
	*/
}

void _reference_pointer() {
	int x = 101;
	int& x_ref = x;
	int* x_pntr = &x;

	cout << "x\t" << x << endl;				// --	x       101
	cout << "&x\t" << &x << endl;			// --	&x      010FF87C
	cout << "x_ref\t" << x_ref << endl;		// --	x_ref   101
	cout << "x_pntr\t" << x_pntr << endl;	// --	x_pntr  010FF87C

	x = 0;

	cout << "x\t" << x << endl;				// --	x       101
	cout << "&x\t" << &x << endl;			// --	&x      010FF87C
	cout << "x_ref\t" << x_ref << endl;		// --	x_ref   101
	cout << "x_pntr\t" << x_pntr << endl;	// --	x_pntr  010FF87C

	int y = 100;
	_change_by_reference(y, x);
	cout << "_change_by_reference y=" << y << endl;

	_change_by_pointer(&y);
	cout << "_change_by_pointer y=" << y << endl;
}

void _change_by_reference(int& y, const int& x) {
	y = 99;
	// x is a constant reference with benefits 1) immutable, 2) efficient -- no copy needed --
}

void _change_by_pointer(int* y) {
	*y = 50;
}

void _operator_overloading() {
	/*
		Operator Overloading happens when we define a new
		meaning for a given operator.

		bool operator ==(const int& v1, const int& v2) {
			return (v1 == v2) && (v2 == v1)
		}

		ostream& operator <<(ostream& outs, const my_basic_class& _my_basic_class) {
			outs << "is_asleep " << _my_basic_class.is_awake();
			return outs;
		}
	*/
}

void _typedef() {
	/*
		Allow new name assignemnt for variable types
	*/
	typedef float FLOAT32;
	typedef double FLOAT64;
	typedef unsigned int U_INT;

}
