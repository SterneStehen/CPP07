/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:38:57 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/01 17:06:29 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef WHATEVER_HPP
#define WHATEVER_HPP


#include "whatever.hpp"
#include <string>

template <typename T>
void swap( T &a, T &b ){
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}
template <typename T>
T min(const T &a, const T &b ){
	return(a<b) ? a : b;
}
template <typename T>
T max(const T &a, const T &b ){
	return(a < b) ? b : a;
}


#endif