#include <iostream>
int add(int a, int b){
	return a + b;
	}

int multipl(int a, int b){
	return a * b;
}

void annonce(int a, int b, int (*func) (int , int)){
	int c = 10;
	int res;
	res = c + func(a, b);
	std::cout << "result of the function is " << res << std::endl;
}

int main(){

	//int (*func)(int, int);
	int a = 3;
	int b = 5;
	annonce(a, b, add);
	annonce(a, b, multipl);
	//funcPtr = add;
	//std::cout << "result is " << funcPtr(a,b) << std::endl;
	return 0;
}