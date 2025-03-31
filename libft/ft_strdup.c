/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:44:53 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:44:54 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;
	char	*null_ptr;
	size_t	lenght;

	if (str == NULL)
	{
		null_ptr = NULL;
		*null_ptr = 0;
	}
	lenght = ft_strlen (str) + 1;
	dest = malloc(lenght * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy (dest, str, lenght);
	return (dest);
}

/*int main(void)
{
    char str[] = "Hello World";
    char *duplicate;

    duplicate = ft_strdup(str);

    if(duplicate == NULL)
        printf("Faillure\n");
    else
        printf("%s\n", duplicate);
        free(duplicate);
}*/
