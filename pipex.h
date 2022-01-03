/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:24:33 by aalvarez          #+#    #+#             */
/*   Updated: 2021/09/09 13:28:59 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# include <unistd.h>
# include <sys/wait.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include "./ft_libft/libft.h"

typedef struct s_cmds
{
	char	*tmp;
	char	*tmp2;
	char	**command;
	char	**route;
	int		n_cmds;
	int		cnum;
	int		i;
}	t_cmds;

typedef struct s_fds
{
	int		**pipefd;
	pid_t	*pid;
}	t_fds;

#endif
