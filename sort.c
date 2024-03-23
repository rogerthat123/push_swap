/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:03:55 by rneto-fo          #+#    #+#             */
/*   Updated: 2024/03/19 23:03:56 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack);
t_list	*push_to_b(t_list **stack_a);
t_list	*push_back_to_a(t_list **stack_a, t_list **stack_b);

void	sort(t_list **stack_a)
{
	t_list	*stack_b;
	int		i;

	if (ft_lstsize(*stack_a) == 3)
		sort_three(stack_a);
	else
	{
		stack_b = push_to_b(stack_a);
		if (!is_sorted(stack_a))
			sort_three(stack_a);
		*stack_a = push_back_to_a(stack_a, &stack_b);
		//ft_lstclear(&stack_b);
	}
}

void	sort_three(t_list **stack)
{
	t_list	*highest;

	highest = fish_highest(*stack);
	if (*stack == highest)
		ra(stack);
	else if ((*stack)->next == highest)
		rra(stack);
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}

t_list	*push_to_b(t_list **stack_a)
{
	t_list	*stack_b;
	int		i;

	stack_b = NULL;
	i = 0;
	while (i < 2)
	{
		if (ft_lstsize(*stack_a) > 3 && !is_sorted(stack_a))
			pb(stack_a, &stack_b);
		i++;
	}
	while (ft_lstsize(*stack_a) > 3 && !is_sorted(stack_a))
	{
		fill_the_nodes(stack_a, &stack_b, 'a');
		push_a_to_b(stack_a, &stack_b);
	}
	return (stack_b);
}

t_list	*push_back_to_a(t_list **stack_a, t_list **stack_b)
{
	while (*stack_b)
	{
		fill_the_nodes(stack_a, stack_b, 'b');
		push_b_to_a(stack_a, stack_b);
	}
	ascending_order(stack_a);
	return (*stack_a);
}
