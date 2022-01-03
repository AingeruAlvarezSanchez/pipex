/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:01:33 by aalvarez          #+#    #+#             */
/*   Updated: 2021/06/08 11:53:15 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	j = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = dlen;
	if (dstsize == 0)
		return (slen);
	if (dstsize < dlen)
		return (slen + dstsize);
	else
	{
		while (src[j] && (dlen + j) < dstsize)
		{
			dst[i++] = src[j++];
		}
		if ((dlen + j) == dstsize && dlen < dstsize)
			dst[i - 1] = '\0';
		else
			dst[i] = '\0';
		return (slen + dlen);
	}
}
