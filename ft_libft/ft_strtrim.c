/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 18:25:02 by aalvarez          #+#    #+#             */
/*   Updated: 2021/06/07 17:00:16 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		front;
	int		back;

	if (s1 == NULL || set == NULL)
		return (NULL);
	front = 0;
	i = 0;
	while (s1[front] != '\0' && char_check(s1[front], set) != 0)
		front++;
	back = ft_strlen(s1);
	while (char_check(s1[back - 1], set) != 0 && back > front)
		back--;
	str = (char *)malloc((*s1) * ((back - front) * sizeof(char) + 1));
	if (str == NULL)
		return (NULL);
	while (front < back)
		str[i++] = s1[front++];
	str[i] = '\0';
	return (str);
}
