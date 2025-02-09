/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:37:07 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/09 11:05:59 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

template <typename T>
Array<T>::Array():_arr(NULL), len(0){}
	

template <typename T>
Array<T>::Array(unsigned int  l): _arr(new T[l]()), len(l){}

template <typename T>
Array<T>::Array(const Array &src): _arr(new T[src.len]), len(src.len){
	for (unsigned int  i = 0; i < src.len; ++i)
	{
		_arr[i] = src._arr[i];
	}	
}
	
template <typename T>
Array<T>& Array<T>::operator=(const Array &src) {
    if (this != &src) {
        T* newData = new T[src.len];
        std::copy(src._arr, src._arr + src.len, newData);
        delete[] _arr;
        _arr = newData;
        len = src.len;
    }
    return *this;
}


template <typename T>
Array<T>::~Array(){
	delete[] _arr;
}

template <typename T>
T& Array<T>::operator[](unsigned int  index) {
   	if (index >= len) {
       	throw std::out_of_range("Index out of bounds");
   	}
   	return _arr[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
   	if (index >= len) {
       	throw std::out_of_range("Index out of bounds");
   	}
   	return _arr[index];
}
template <typename T>
unsigned int  Array<T>::size() const {
   	return len;
   	}

template <typename T>
void Array<T>::annonce(){
	std::cout << "print arr: " << std::endl;
	for (unsigned int i = 0; i < len; ++i) {
		std::cout << _arr[i] << std::endl;
	}
}

