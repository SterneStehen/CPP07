/******************************************************************************/
/*																		   	*/
/*														:::	  ::::::::   */
/*   Array.hpp										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: smoreron <smoreron@student.42heilbronn.	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/02/01 18:43:16 by smoreron		  #+#	#+#			 */
/*   Updated: 2025/02/03 14:05:51 by smoreron		 ###   ########.fr	   */
/*																			*/
/******************************************************************************/

#ifndef ARRAY_HPP 
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
private:
	T* data;
	unsigned int len;

public:
	Array();					 
	Array(unsigned int n);	   
	Array(const Array& other);
	  
	Array& operator=(const Array& other); 
	~Array();					

	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;
	unsigned int size() const;
};

#include "Array.tpp"  

#endif 