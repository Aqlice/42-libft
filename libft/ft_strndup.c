/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:10:05 by casautou          #+#    #+#             */
/*   Updated: 2018/11/24 18:11:58 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*d;
	size_t	i;

	i = 0;
	d = NULL;
	d = (char*)malloc(sizeof(char) * (n + 1));
	if (d == NULL)
		return (NULL);
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	return (d);
}
