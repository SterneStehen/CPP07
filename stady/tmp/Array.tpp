/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:37:07 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/03 14:13:40 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/



template <typename T>
Array<T>::Array():data(nullptr), len(0){};
	
template <typename T>
Array<T>::Array(unsigned int  l): data(new T[l]()), len(l){};

template <typename T>
Array<T>::Array(const Array &src): data(new T[src.len]), len(src.len){
	for (unsigned int  i = 0; i < src.len; ++i)
	{
		data[i] = src.data[i];
	}	
}
	
template <typename T>
Array<T> &Array<T>::operator=(const Array &src){
	if(this != &src){
		delete[] data;
		len = src.len;
		data = new T[src.len];
		for (unsigned int  i = 0; i < src.len; ++i)
		{
			data[i] = src.data[i];
		}
	}
	return *this;
}
template <typename T>
Array<T>::~Array(){
	delete[] data;
}

template <typename T>
T& Array<T>::operator[](unsigned int  index) {
   	if (index >= len) {
       	throw std::out_of_range("Index out of bounds");
   	}
   	return data[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
   	if (index >= len) {
       	throw std::out_of_range("Index out of bounds");
   	}
   	return data[index];
}
template <typename T>
unsigned int  Array<T>::size() const {
   	return len;
   	}

