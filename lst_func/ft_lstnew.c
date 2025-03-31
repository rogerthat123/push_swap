/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:22:30 by rneto-fo          #+#    #+#             */
/*   Updated: 2023/10/15 12:15:50 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new_node;

	new_node = (malloc(sizeof(t_list)));
	if (!new_node)
		return (NULL);
	new_node -> value = content;
	new_node -> next = NULL;
	return (new_node);
}
