/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:44:03 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:44:04 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
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
        check(ft_isdigit, 'A');
        check(ft_isdigit, 128);
        check(ft_isdigit, 2);
}*/
