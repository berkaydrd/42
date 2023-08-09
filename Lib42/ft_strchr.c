/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurdu <hdurdu@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 08:19:38 by hdurdu            #+#    #+#             */
/*   Updated: 2023/07/20 11:36:56 by hdurdu           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int ch)
{
	while (*str != '\0' && (char)ch != *str)
		str++;
	if ((char)ch == *str)
		return ((char *)str);
	return (0);
}
