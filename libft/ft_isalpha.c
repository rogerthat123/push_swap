/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:43:57 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:43:58 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*int check (int (*f)(int c), int c)
{
	if (ft_isalpha(c))
		printf("True\n");
	else
		printf("False\n");
}

int main (void)
{
	check(ft_isalpha, 'A');
	check(ft_isalpha, 'a');
	check(ft_isalpha, 2);
}*/
