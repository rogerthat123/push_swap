/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:45:11 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:45:12 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	leng;
	size_t	i;
	char	*cod;

	if (s == NULL || f == NULL)
		return (NULL);
	leng = ft_strlen (s);
	i = 0;
	cod = malloc (leng * sizeof(char) + 1);
	if (!cod)
		return (NULL);
	while (i < leng)
	{
		cod[i] = f(i, s[i]);
		i++;
	}
	cod[i] = '\0';
	return (cod);
}

/*char ft_coding(unsigned int i, char c)
{
    c = c + i;

    return(c);
}

int main (void)
{
    char str[] = "Hello, World!";
    char *final;

    final = ft_strmapi(str, ft_coding);

    if(final == NULL)
        printf("Faillure!");
    else
        printf("%s\n", final);
    free(final);
}*/

//a b c d e f g h i j k l m n o p q r s t u v w x y z 
