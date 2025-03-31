/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:44:50 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/12 20:16:20 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	const unsigned char	*s;
	unsigned char		c1;

	s = (const unsigned char *)str;
	c1 = (unsigned char)c;
	while (*s != '\0' && *s != c1)
		s++;
	if (*s == '\0')
	{
		if (c1 != '\0')
			return (NULL);
		else
			return ((char *) s);
	}
	return ((char *) s);
}

/*int main()
{
	char src[] = "Hello";

    char *test = ft_strchr(src, 'H');
    
    if (test == NULL)
        printf("Not found!\n");
    else
        printf("%s\n", test);
 
}*/
