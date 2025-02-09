/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:33:44 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/09 10:15:41 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>  

template <typename T>
void iter(T *arr, size_t len, void (*func)(T&)) {
	if (arr == NULL || func == NULL)
		return ;
    for (size_t i = 0; i < len; i++)
	{
        func(arr[i]);
    }
}

#endif