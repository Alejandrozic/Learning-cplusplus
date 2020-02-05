#include <iostream>
#include "my_basic_class.h"

using std::ostream;
using std::istream;

namespace my_basic_class_namespace {

	my_basic_class::my_basic_class()
	{
		_is_asleep = false;
		_id = 0;
	}

	my_basic_class::my_basic_class(int id)
	{
		setId(id);
	}

	bool my_basic_class::is_awake() const
	{
		return  _is_asleep;
	}

	void my_basic_class::sleep()
	{
		_is_asleep = true;
	}

	void my_basic_class::wake_up()
	{
		_is_asleep = false;
	}

	int my_basic_class::getId()
	{
		return _id;
	}

	void my_basic_class::setId(int id)
	{
		_id = id;
	}
	ostream& operator <<(ostream& output, const my_basic_class& _my_basic_class) {
		output << "is_asleep " << _my_basic_class.is_awake();
		return output;
	}
	istream& operator >>(istream& input, my_basic_class& _my_basic_class) {
		int tmp;
		input >> tmp;
		_my_basic_class.setId(tmp);
		return input;
	}

}
