/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:44:59 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:45:00 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	char	*final;

	ls1 = ft_strlen (s1);
	ls2 = ft_strlen (s2);
	final = malloc ((ls1 + ls2) * sizeof(char) + 1);
	if (!final)
		return (NULL);
	ft_memcpy (final, s1, ls1);
	ft_strlcpy (final + ls1, s2, ls2 + 1);
	return (final);
}

/*int main(void)
{
    char str1[] = "Hello, ";
    char str2[] = "World!";
    char *fw;

    fw = ft_strjoin(str1, str2);

    if (fw == NULL)
        printf("Faillure\n");
    else
    {
        printf("%s\n", fw);
        free(fw);
    }
}*/
