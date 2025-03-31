/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:45:02 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:45:03 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	dst_length;

	dst_length = ft_strlen (dst);
	i = dst_length;
	j = 0;
	if (dst_length >= n)
		return (n + ft_strlen (src));
	while (i < n - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_length + ft_strlen(src));
}

/*int main()
{
	const char src[] = "world :)";
	char dst[] = "Hello ";
    
    ft_strlcat(dst,src,sizeof(dst));
    printf("%s\n", src);
    printf("%s\n", dst);
    printf("%ld\n", ft_strlcat(dst,src,sizeof(dst)));
}*/
