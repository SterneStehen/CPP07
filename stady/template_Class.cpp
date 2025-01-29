#include <iostream>




class BoxInt{
	private:
		int m_value;
	public:
		BoxInt(int val): m_value (val){};
		int getValue(){
			return m_value;
		};
};


template <typename T>
class Box{
	private:
		T m_value;
	public:
		Box(T val): m_value(val){};
		T getValue(){ 
			return m_value;
	};
};


int main(){
	BoxInt i(5);
	std::cout << "value BoxInt = " << i.getValue() << std::endl;
	Box<int> iq(6);
	std::cout << "value Box T int  = " << iq.getValue() << std::endl;
	Box<std::string> sq("Hello");
	std::cout << "value Box T string = " <<sq.getValue() << std::endl;
}