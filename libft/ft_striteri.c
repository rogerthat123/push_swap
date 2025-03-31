/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:44:56 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:44:57 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f (i, &s[i]);
		i++;
	}
}

/*void ft_coding(unsigned int index, char *str)
{
    if(index % 3 == 0)
        str[index] = 'X';
}

int main(void)
{
    char str[] = "Hello World";

    ft_striteri(str, ft_coding);

    printf("%s\n", str);

    return(0);
}*/
