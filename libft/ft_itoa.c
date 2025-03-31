/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:44:12 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:44:13 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	get_allocated(char *str, int numb, int size)
{
	int		len;
	long	nr;

	len = size;
	nr = numb;
	if (nr < 0)
	{
		str[0] = '-';
		nr = nr * (-1);
	}
	str[len] = '\0';
	len--;
	while (nr > 0)
	{
		str[len] = (nr % 10) + '0';
		nr = nr / 10;
		len--;
	}
}

static int	get_size(int nr)
{
	int		i;
	long	number;

	i = 0;
	number = nr;
	if (number < 0)
	{
		number = number * (-1);
		i++;
	}
	while (number > 0)
	{
		i++;
		number = number / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

	if (n == 0)
	{
		str = malloc (2 * sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	size = get_size (n);
	str = malloc (size * sizeof(char) + 1);
	if (!str)
		return (NULL);
	get_allocated (str, n, size);
	return (str);
}

/*int main(void)
{
	int n = 12586;

	ft_putstr_fd(ft_itoa(n), 1);
	ft_putchar_fd('\n', 1);
}*/
