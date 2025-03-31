/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:45:15 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:45:16 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	while (n > 0)
	{
		if (*s1 != *s2)
			return ((int)(*s1 - *s2));
		if (*s1 == '\0' || *s2 == '\0')
			break ;
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*int main()
{
	char str1[] = "test\200";
	char str2[] = "test\0";    
    
    printf("%d\n", ft_strncmp(str1, str2, 6));
}*/
