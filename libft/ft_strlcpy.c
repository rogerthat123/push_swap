/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:45:04 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:45:05 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	src_lenght;

	i = 0;
	src_lenght = ft_strlen (src);
	if (n == 0)
		return (src_lenght);
	while (i < n -1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_lenght);
}

/*int main(void)
{
    const char src[] = "Hello world";
    char dst[15];

    ft_strlcpy(dst, src, sizeof(dst));
    printf("%s\n", src);
    printf("%s\n", dst);
    printf("%ld\n", ft_strlcpy(dst, src, sizeof(dst)));
}*/
