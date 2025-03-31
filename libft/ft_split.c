/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:44:47 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:44:48 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_allocation(char **dst, const char *src, char c)
{
	int	i;
	int	start;
	int	pos;

	pos = 0;
	i = 0;
	start = 0;
	while (src[i] != '\0')
	{
		if (src[i] != c)
		{
			start = i;
			while (src[i] != c && src[i])
				i++;
			dst[pos] = ft_substr (src, start, (i - start));
			dst[pos][i - start] = '\0';
			pos++;
		}
		if (src[i])
			i++;
	}
	dst[pos] = NULL;
}

static int	ft_wordc(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			while (*s != c && *s)
				s++;
			count++;
		}
		if (*s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		nrwords;
	char	**result;

	if (s == NULL)
		return (NULL);
	nrwords = ft_wordc (s, c);
	result = malloc (sizeof(char *) *(nrwords + 1));
	if (!result)
		return (NULL);
	ft_allocation (result, s, c);
	return (result);
}

/*int main(void)
{
    char str[] = "Hello World How Are you";
    char sep = ' ';
    char **final;

    final = ft_split(str, sep);

    if (final)
    {
        for (int i = 0; final[i] != NULL; i++)
        {
            printf("%s\n", final[i]);
            free(final[i]);
        }
    }
}*/
