/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utilities.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:13:05 by rneto-fo          #+#    #+#             */
/*   Updated: 2024/02/15 22:13:06 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_numb(char *numb)
{
	int	i;

	i = 0;
	if (!numb[i])
		return (0);
	if (numb[0] == '-' || numb[0] == '+')
	{
		if (!numb[1])
			return (0);
		i++;
	}
	while (numb[i])
	{
		if (numb[i] >= '0' && numb[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

static int	is_duplicated(char **args, int numb, int pos)
{
	pos++;
	while (args[pos])
	{
		if (numb == ft_atoi(args[pos]))
			return (1);
		pos++;
	}
	return (0);
}

static void	error(int argc, char **str)
{
	if (argc == 2)
		clean_str(str);
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

void	args_checker(int argc, char **argv)
{
	char	**args;
	int		i;
	long	tmp ;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = argv + 1;
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (!(is_numb(args[i])))
			error(argc, args);
		if (tmp < INT_MIN || tmp > INT_MAX)
			error(argc, args);
		if (is_duplicated(args, tmp, i))
			error(argc, args);
		i++;
	}
	if (argc == 2)
		clean_str(args);
}
