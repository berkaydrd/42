/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurdu <hdurdu@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:30:11 by hdurdu            #+#    #+#             */
/*   Updated: 2023/07/17 09:30:17 by hdurdu           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*dest;

	dest = (void *)malloc (number * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, number * size);
	return (dest);
}
