/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:03:51 by rneto-fo          #+#    #+#             */
/*   Updated: 2024/03/19 23:03:52 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_top(t_list **stack, t_list **top_node, char name)
{
	while (*stack != *top_node)
	{
		if (name == 'a')
		{
			if ((*top_node)->above_median == 1)
				ra(stack);
			else
				rra(stack);
		}
		else if (name == 'b')
		{
			if ((*top_node)->above_median == 1)
				rb(stack);
			else
				rrb (stack);
		}
	}
}

void	push_a_to_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*cheapest_node;

	cheapest_node = get_cheapest(stack_a);
	if (cheapest_node->above_median == 1
		&& cheapest_node->target_node->above_median == 1)
		rotate_both(stack_a, stack_b, &cheapest_node);
	else if (cheapest_node->above_median == 0
		&& cheapest_node->target_node->above_median == 0)
		rev_rotate_both(stack_a, stack_b, &cheapest_node);
	check_top(stack_a, &cheapest_node, 'a');
	check_top(stack_b, &cheapest_node->target_node, 'b');
	pb(stack_a, stack_b);
}

void	push_b_to_a(t_list **stack_a, t_list **stack_b)
{
	check_top(stack_a, &((*stack_b)->target_node), 'a');
	pa(stack_a, stack_b);
}

void	ascending_order(t_list **stack)
{
	t_list	*lowest;

	lowest = fish_lowest(*stack);
	get_index(stack);
	while ((*stack)->value != lowest->value)
	{
		if (lowest->above_median == 1)
			ra(stack);
		else
			rra(stack);
	}
}
