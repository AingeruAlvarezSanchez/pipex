/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 10:48:48 by aalvarez          #+#    #+#             */
/*   Updated: 2021/05/26 17:22:36 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	chr;

	i = 0;
	chr = c;
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		if (((unsigned char *)src)[i] == chr)
		{
			return (&dst[i] + 1);
		}
		i++;
	}
	return (0);
}
