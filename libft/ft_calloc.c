/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:43:49 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/11 21:43:50 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	tsize;
	void	*ptr;

	tsize = nmemb * size;
	ptr = malloc (tsize);
	if (ptr == NULL)
		return (NULL);
	ft_bzero (ptr, tsize);
	return (ptr);
}

/*int main (void)
{
	int *test = ft_calloc(5, sizeof(int));
	if(!test)
		return (1);
	for (int i = 0; i < 5; i++)
		printf("arr[%d] = %d\n", i, test[i]);
	free(test);
}*/
