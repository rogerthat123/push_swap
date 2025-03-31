/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:45:32 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:45:33 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	if (size <= start)
		return (ft_strdup(""));
	if (start + len > size)
		len = size - start;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy (sub, s + start, len + 1);
	return (sub);
}

/*int main(void)
{
    char str[] = "Hello, World!";
    char *subs;

    subs = ft_substr(str, 5, 8);

    if (subs == NULL)
        printf("Faillure!\n");
    else
    {
        printf("%s\n", subs);
        free(subs);
    }

}*/
