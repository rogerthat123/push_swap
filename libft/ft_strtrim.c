/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:45:29 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:45:30 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr (set, s1[start]))
		++start;
	while (s1[end] && ft_strchr (set, s1[end]))
		--end;
	trim = ft_substr(s1, start, (end - start) + 1);
	return (trim);
}

/*int main(void)
{
    char str [] = "Hello World";
    char cut[] = "Hello";

    char *final;

    final = ft_strtrim(str, cut);

    printf("%s", final);

}*/
