/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurdu <hdurdu@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 08:20:26 by hdurdu            #+#    #+#             */
/*   Updated: 2023/07/17 08:20:32 by hdurdu           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int find)
{
	int	i;

	i = (int)ft_strlen(str);
	while (i >= 0)
	{
		if (*(str + i) == (char)find)
			return ((char *)str + i);
		i--;
	}
	return (0);
}
