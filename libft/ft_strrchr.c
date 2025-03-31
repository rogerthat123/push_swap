/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:45:20 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:45:21 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const unsigned char	*s;
	unsigned char		c1;
	char				*null_ptr;
	size_t				length;

	if (str == NULL)
	{
		null_ptr = NULL;
		*null_ptr = 0;
	}
	s = (const unsigned char *) str;
	c1 = (unsigned char)c;
	length = ft_strlen((const char *)s);
	if (c1 == '\0')
		return ((char *)&s[length]);
	while (length > 0)
	{
		length--;
		if (s[length] == c1)
			return ((char *)&s[length]);
	}
	if (c1 == '\0')
		return ((char *)&s[length]);
	return (NULL);
}

/*int main()
{
	char src[] = "Hello World :)";

    char *test = ft_strrchr(src, 'W' + 256);
    
    if (test == NULL)
        printf("Not found!\n");
    else
        printf("%s\n", test);
 
}*/
