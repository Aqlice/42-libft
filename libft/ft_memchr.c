/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:36:25 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 20:36:38 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		ch;
	unsigned int		i;
	const unsigned char *str;

	ch = c;
	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == ch)
			return ((char*)&str[i]);
		i++;
	}
	return (NULL);
}
