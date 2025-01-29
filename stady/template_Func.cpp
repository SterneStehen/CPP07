#include "iostream"

template <typename T>

T maxdigit(T a, T b){
	return(a > b) ? a: b;
}

int maxint(int a, int b){
	if(a > b)
		return a;
	else	
		return b;
}

double maxdouble(double a, double b){
	return(a > b) ? a : b;
}


int main(){
	std::cout << "max int is: " << maxint(3, 5) << std::endl;
	std::cout << "max double is: " << maxdouble(3.5, 5.4) << std::endl;
	std::cout << "=================================================== "<< std::endl;
	std::cout << "max int maxdigit is: " << maxdigit(3, 5) << std::endl;
	std::cout << "max double maxdigit is: " << maxdigit(3., 5.4) << std::endl;

}