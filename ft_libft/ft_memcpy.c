/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 10:14:40 by aalvarez          #+#    #+#             */
/*   Updated: 2021/09/09 15:18:41 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst != (void *)0 || src != (void *)0)
	{
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((const char *)src)[i];
			i++;
		}
		return (dst);
	}
	return (NULL);
}
