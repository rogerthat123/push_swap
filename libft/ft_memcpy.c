/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:44:23 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:44:24 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*s;
	char		*d;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	s = (const char *)src;
	d = (char *)dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int main(void)
{
	char *str1 = "Hello World";
	char *str2 = malloc(ft_strlen(str1));
	int nr1 = 42;
	int nr2;
	
	ft_memcpy(&nr2, &nr1, sizeof(int));
	ft_memcpy(str2, str1, ft_strlen(str1));
	printf("%s\n", str2);
	printf("%d\n", nr2);
}*/
