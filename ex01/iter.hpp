/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:33:44 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/02 19:21:06 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>  

template <typename T, typename F>
void iter(T *arr, size_t len, F func) {
    for (size_t i = 0; i < len; i++)
	{
        func(arr[i]);
    }
}

#endif