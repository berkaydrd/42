/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurdu <hdurdu@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 08:18:35 by hdurdu            #+#    #+#             */
/*   Updated: 2023/07/17 08:18:38 by hdurdu           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;
	size_t	totallen;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size > lendst)
		totallen = lendst + lensrc;
	else
		totallen = lensrc + size;
	while (src[i] && lendst + 1 < size)
	{
		dst[lendst] = src[i];
		lendst++;
		i++;
	}
	dst[lendst] = 0;
	return (totallen);
}
