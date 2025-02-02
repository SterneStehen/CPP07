/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:56:46 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/02 19:33:20 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "iter.hpp"
#include <iostream>
#include <cstddef>


template <typename T>
void print( T &c){
	std::cout << c << std::endl;
}

template <typename T>
void increment(T& c) {
    ++c;
}



int main(){
	//void (*func)(int);
	std::cout << "============================INT====================\n";
	int arrInt[] = {1,2,3,4,5};
	size_t lenInt = sizeof(arrInt)/sizeof(arrInt[0]);
	std::cout << "BEFOR:\n";
	iter(arrInt, lenInt, print<int>);
	iter(arrInt, lenInt, increment<int>);
	std::cout << "AFTER:\n";
	iter(arrInt, lenInt, print<int>);
	

	std::cout << "============================float====================\n";
	float arrFloat[] = {1.3, 2.5, 3.7, 4.9, 5.2};
	size_t lenFloat = sizeof(arrFloat)/sizeof(arrFloat[0]);
	std::cout << "BEFOR:\n";
	iter(arrFloat, lenFloat, print<float>);
	iter(arrFloat, lenFloat, increment<float>);
	std::cout << "AFTER:\n";
	iter(arrFloat, lenFloat, print<float>);
	

	std::cout << "============================char====================\n";
	char arrChar[] = {'H', 'e', 'l', 'l', 'o'};
	size_t lenChar = sizeof(arrChar)/sizeof(arrChar[0]);
	std::cout << "BEFOR:\n";
	iter(arrChar, lenChar, print<char>);
	iter(arrChar, lenChar, increment<char>);
	std::cout << "AFTER:\n";
	iter(arrChar, lenChar, print<char>);
	
}

