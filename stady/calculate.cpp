#include <iostream>

int add(int a, int b) { return a + b;}
int minus(int a, int b) { return a - b;}
int multiply(int a, int b) { return a * b;}
int division(int a, int b) { return a + b;}

int result(int a, int b, int (*func)(int, int)){
	return func(a, b);
}

int main(){

	int (*function)(int, int);
	int a, b;
	char choice;
	//std::string name_func;

	std::cout << "enter digit 1:\n";
	std::cin >> a;
	std::cout << "enter digit 2:\n";
	std::cin >> b;
	std::cout << "enter choice formul:\n";
	std::cin >> choice;


	if(choice == '+')
		function = add;
	else if(choice == '-')
		function = minus;
	else if(choice == '*')
		function = multiply;
	else if(choice == '/')
		function = division;
	else 
		std::cout << "fail choice\n";
	

	std::cout << "result of the function is " << result(a, b, function) << std::endl;
	return 0;
}