/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:51:25 by rneto-fo          #+#    #+#             */
/*   Updated: 2024/03/02 13:51:26 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate_node(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *stack;
	last = ft_lstlast(*stack);
	*stack = (*stack)->next;
	last->next = tmp;
	tmp->next = NULL;
}

int	ra(t_list **stack)
{
	if (ft_lstsize(*stack) > 1)
	{
		rotate_node(stack);
		ft_putstr_fd("ra\n", 1);
		return (0);
	}
	return (1);
}

int	rb(t_list **stack)
{
	if (ft_lstsize(*stack) > 1)
	{
		rotate_node(stack);
		ft_putstr_fd("rb\n", 1);
		return (0);
	}
	return (1);
}

int	rr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) > 1 && ft_lstsize(*stack_b) > 1)
	{
		rotate_node(stack_a);
		rotate_node(stack_b);
		ft_putstr_fd("rr\n", 1);
		return (0);
	}
	return (1);
}

void	rotate_both(t_list **stack_a, t_list **stack_b, t_list **cheapest_node)
{
	while (*stack_a != *cheapest_node && *stack_b != *cheapest_node)
		rr(stack_a, stack_b);
	get_index(stack_a);
	get_index(stack_b);
}
