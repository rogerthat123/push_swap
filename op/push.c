/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:51:17 by rneto-fo          #+#    #+#             */
/*   Updated: 2024/03/02 13:51:19 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push_node(t_list **source, t_list **dest)
{
	t_list	*tmp;

	tmp = *source;
	*source = (*source)->next;
	if (!dest)
	{
		*dest = tmp;
		(*dest)->next = NULL;
	}
	else
	{
		tmp->next = *dest;
		*dest = tmp;
	}
}

int	pb(t_list **stack_a, t_list**stack_b)
{
	if (ft_lstsize(*stack_a) > 0)
	{
		push_node(stack_a, stack_b);
		ft_putstr_fd("pb\n", 1);
		return (0);
	}
	return (1);
}

int	pa(t_list **stack_a, t_list**stack_b)
{
	if (ft_lstsize(*stack_b) > 0)
	{
		push_node(stack_b, stack_a);
		ft_putstr_fd("pa\n", 1);
		return (0);
	}
	return (1);
}
