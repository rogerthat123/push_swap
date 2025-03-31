/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:45:17 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:45:18 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s;
	char	*n;

	i = 0;
	s = (char *) str;
	n = (char *) needle;
	if (n[0] == '\0')
		return ((char *) s);
	while (i < len && s[i])
	{
		j = 0;
		while (s[i + j] == n[j] && n[j] && (i + j) < len)
			j++;
		if (n[j] == '\0')
			return (&s[i]);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char str1[] = "Hello World, try to find this word";
	char str2[] = "to";
	
	char *test =   ft_strnstr(str1, str2, sizeof(str1));
    
    if(test == NULL)
    	printf("Not found!\n");
    else 
    {
        printf("%c\n", test[0]);
        printf("%s\n", test); 
    }
}*/
