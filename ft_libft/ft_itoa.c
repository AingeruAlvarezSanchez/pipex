/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:49:31 by aalvarez          #+#    #+#             */
/*   Updated: 2021/06/08 16:07:39 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_arr_size(long j)
{
	int	i;

	i = 0;
	if (j == 0)
		i++;
	if (j < 0)
	{
		i++;
		j *= -1;
	}
	while (j > 0)
	{
		j /= 10;
		i++;
	}
	return (i);
}

static char	*ft_nospace(long j, long i, char *s)
{
	if (j < 0)
	{
		s[0] = '-';
		j *= -1;
	}
	while (j > 0)
	{
		s[i - 1] = j % 10 + '0';
		j /= 10;
		i--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	j;
	long	i;

	j = (long)n;
	i = ft_arr_size(n);
	s = (char *)malloc(i * sizeof(char) + 1);
	if (!s)
		return (NULL);
	s[i] = '\0';
	if (!n)
	{
		s[i - 1] = n + '0';
		return (s);
	}
	return (ft_nospace(j, i, s));
}
