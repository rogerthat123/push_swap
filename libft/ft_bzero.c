/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:43:44 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:43:46 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*null_ptr;

	if (s == NULL)
	{
		null_ptr = NULL;
		*null_ptr = 0;
	}
	ft_memset(s, 0, n);
}

/*int main (void)
{
   char str[] = "Hello World";
 
   ft_bzero(str, 4);
 
   for (int i = 0; i < sizeof(str); i++)
        ft_putchar_fd(str[i], 1);
   ft_putchar_fd('\n',1);
}*/
