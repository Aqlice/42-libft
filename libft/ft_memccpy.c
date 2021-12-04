/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:35:39 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 20:36:07 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*d;
	char			*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	d = (char*)dst;
	s = (char*)src;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (char)c)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
