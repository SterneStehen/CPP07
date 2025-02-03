#include <iostream>

template <typename T1, typename T2>


class Box{
	private:
		T1 _first;
		T2 _second;
	public:
		Box(T1 f, T2 s): _first(f), _second(s){};
		void anonce(){
			std::cout << "first value = " << _first << "\nsecond value = " << _second << std::endl;
		}
};

int main(){
	Box<int, double> val(4, 5.0);
	val.anonce();
}