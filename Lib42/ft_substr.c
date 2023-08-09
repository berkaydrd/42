/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurdu <hdurdu@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 08:21:56 by hdurdu            #+#    #+#             */
/*   Updated: 2023/07/17 08:22:06 by hdurdu           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	index;
	unsigned int	index2;

	index = 0;
	index2 = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
		return (ft_strdup(""));
	while (index < len && s[index + start] != '\0')
		index++;
	dest = (char *)malloc((sizeof(char) * index) + 1);
	if (dest == NULL)
		return (NULL);
	index = 0;
	while (s[index2] != '\0')
	{
		if (index2 >= start && index < len)
			dest[index++] = s[start++];
		index2++;
	}
	dest[index] = '\0';
	return (dest);
}
