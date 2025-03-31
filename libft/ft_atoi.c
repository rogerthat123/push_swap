/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:41:40 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:41:41 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	int		i;
	int		neg;
	long	nr;

	i = 0;
	neg = 1;
	nr = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (ft_isdigit (str[i]))
	{
		nr = (nr * 10) + (str[i] - 48);
		i++;
	}
	return (neg * nr);
}

/*int main(int argc, char **argv)
{
	if (argc < 2)
        return(0);

	ft_putnbr_fd(ft_atoi(argv[1]), 1);
	ft_putchar_fd('\n', 1);
}*/
