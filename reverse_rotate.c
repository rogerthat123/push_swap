/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:51:22 by rneto-fo          #+#    #+#             */
/*   Updated: 2024/03/02 13:51:23 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	reverse_rotate(t_list **stack)
{
	t_list	*last;
	t_list	*sec_last;

	last = ft_lstlast(*stack);
	sec_last = get_before_tail(*stack);
	if (sec_last)
		sec_last->next = NULL;
	last->next = *stack;
	*stack = last;
}

int	rra(t_list **stack)
{
	if (ft_lstsize(*stack) > 1)
	{
		reverse_rotate(stack);
		ft_putstr_fd("rra\n", 1);
		return (0);
	}
	return (1);
}

int	rrb(t_list **stack)
{
	if (ft_lstsize(*stack) > 1)
	{
		reverse_rotate(stack);
		ft_putstr_fd("rrb\n", 1);
		return (0);
	}
	return (1);
}

int	rrr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) > 1 && ft_lstsize(*stack_b) > 1)
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
		ft_putstr_fd("rrr\n", 1);
		return (0);
	}
	return (1);
}

void	rev_rotate_both(t_list **stack_a, t_list **stack_b,
			t_list **cheapest_node)
{
	while (*stack_a != *cheapest_node && *stack_b != *cheapest_node)
		rrr(stack_a, stack_b);
	get_index(stack_a);
	get_index(stack_b);
}
