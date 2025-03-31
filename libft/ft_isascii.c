/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:44:00 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:44:01 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int check (int (*f)(int c), int c)
{
        if (ft_isascii(c))
                printf("True\n");
        else
                printf("False\n");
}

int main (void)
{
        check(ft_isascii, 'A');
        check(ft_isascii, 128);
        check(ft_isascii, 2);
}*/
