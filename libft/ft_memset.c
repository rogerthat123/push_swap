/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:44:30 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:44:31 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t num)
{
	size_t	i;
	char	*str;

	str = (char *) ptr;
	i = 0;
	while (i < num)
	{
		str[i] = c;
		i++;
	}
	return (ptr);
}

/*int main (void)
{
   char buffer[10];

   ft_memset(buffer, 'a', sizeof(char) *5);
   ft_memset(buffer + 5, 'b', sizeof(char) *5);

   for (int i = 0; i <10; i++)
        printf("%c", buffer[i]);

    printf("\n");
}*/
