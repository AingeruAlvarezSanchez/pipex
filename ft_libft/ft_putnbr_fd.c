/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:47:47 by aalvarez          #+#    #+#             */
/*   Updated: 2021/06/07 16:59:49 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_num(unsigned int n, int fd)
{
	if (n > 9)
	{
		ft_num(n / 10, fd);
		ft_num(n % 10, fd);
	}
	else
	{
		n = n + '0';
		write(fd, &n, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	n2;

	if (n < 0)
	{
		n2 = ((unsigned int)(-n));
		write(fd, "-", 1);
		ft_num(n2, fd);
	}
	else
	{
		n2 = (unsigned int)n;
		ft_num(n2, fd);
	}
}
