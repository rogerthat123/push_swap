/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:43:53 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:43:54 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*void check(int (*f)(int c), int c)
{
	if(ft_isalnum(c))
                printf("True\n");
        else
                printf("False\n");

}
int main(void)
{
	check(ft_isalnum, 'a');
	check(ft_isalnum, 'Z');
	check(ft_isalnum, 56);
	check(ft_isalnum, '[');
}*/
