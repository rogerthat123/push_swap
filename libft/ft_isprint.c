/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:44:08 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:44:09 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int check (int (*f)(int c), int c)
{
        if (ft_isprint(c))
                printf("True\n");
        else
                printf("False\n");
}

int main (void)
{
        check(ft_isprint, 'A');
        check(ft_isprint, 128);
        check(ft_isprint, '2');
}*/
