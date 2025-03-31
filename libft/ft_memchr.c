/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:44:15 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:44:16 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		c1;

	i = 0;
	s = (const unsigned char *) str;
	c1 = (unsigned char)c;
	while (i < n)
	{
		if (s[i] == c1)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char *str = "Hello World";

	char *find = ft_memchr(str, 'W', sizeof(str));

	if(find)
		printf("%s\n", find);
	else
		printf("Not found!!\n");
}*/
