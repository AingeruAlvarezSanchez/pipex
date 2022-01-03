/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 13:07:51 by aalvarez          #+#    #+#             */
/*   Updated: 2021/06/08 11:32:33 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_mall;
	size_t	i;

	i = 0;
	s_mall = (char *)malloc(len * sizeof(char) + 1);
	if (s == NULL || s_mall == NULL)
		return (NULL);
	while (start > ft_strlen(s))
	{
		*s_mall = '\0';
		return (s_mall);
	}
	while (len > 0)
	{
		s_mall[i] = s[start];
		i++;
		start++;
		len--;
	}
	s_mall[i] = '\0';
	return (s_mall);
}
