#ifndef MY_BASIC_CLASS_H_
#define MY_BASIC_CLASS_H_

namespace my_basic_class_namespace
{
	class my_basic_class
	{
	public:
		// -- CONSTRUCTOR
		my_basic_class();
		my_basic_class(int id);
		// -- MEMBER Functions
		bool is_awake() const;
		void sleep();
		void wake_up();
		int getId();
		void setId(int id);
		friend std::ostream& operator <<(std::ostream& output, const my_basic_class& _my_basic_class);
		friend std::istream& operator >>(std::istream& input, my_basic_class& _my_basic_class);
	protected:
		/*
			Accessible only via getId or setId
		*/
		int _id;
	private:
		bool _is_asleep;
		const double pi = 3.14;
	};
}
#endif MY_BASIC_CLASS_H_
