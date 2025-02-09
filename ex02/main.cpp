/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:15:13 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/09 11:05:09 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Array.hpp"


int main() {
	try {
		
		Array<int> arr1;
		std::cout << "arr1 size: " << arr1.size() << std::endl;

		
		Array<int> arr2(5);
		std::cout << "arr2 size: " << arr2.size() << std::endl;
		for (unsigned int i = 0; i < arr2.size(); ++i) {
			arr2[i] = i + 10;
		}
		arr2.annonce();
		

		
		Array<int> arr3 = arr2;
		arr2[0] = 100; 
		std::cout << "arr2[0]: " << arr2[0] << ", arr3[0]: " << arr3[0] << std::endl;

		
		arr1 = arr3;
		std::cout << "arr1[0] after assignment: " << arr1[0] << std::endl;

		
		Array<double> arr4(3);
		arr4[0] = 1.1; arr4[1] = 2.2; arr4[2] = 3.3;
		arr4.annonce();

		
		std::cout << "attempt  access to arr2[10]:" << std::endl;
		std::cout << arr2[10] << std::endl; 
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	

	return 0;
}
