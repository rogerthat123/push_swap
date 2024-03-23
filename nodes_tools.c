/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:03:38 by rneto-fo          #+#    #+#             */
/*   Updated: 2024/03/19 23:03:39 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_target_a(t_list **stack_a, t_list **stack_b);
void	get_target_b(t_list **stack_a, t_list **stack_b);
void	get_cost_a(t_list **stack_a, t_list **stack_b);

void	fill_the_nodes(t_list **stack_a, t_list **stack_b, char name)
{
	get_index(stack_a);
	get_index(stack_b);
	if (name == 'a')
	{
		get_target_a(stack_a, stack_b);
		get_cost_a(stack_a, stack_b);
	}
	else
		get_target_b(stack_a, stack_b);
}

void	get_index(t_list **stack)
{
	int		i;
	int		mediam;
	t_list	*tmp;

	i = 0;
	mediam = ft_lstsize(*stack) / 2;
	tmp = *stack;
	while (tmp)
	{
		tmp->index = i;
		if (i <= mediam)
			tmp->above_median = 1;
		else
			tmp->above_median = 0;
		tmp = tmp->next;
		i++;
	}
}

void	get_target_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*a;
	t_list	*b;
	t_list	*target;
	long	closest_smaller;

	a = *stack_a;
	while (a)
	{
		b = *stack_b;
		closest_smaller = LONG_MIN;
		while (b)
		{
			if (b->value < a->value && b->value > closest_smaller)
			{
				closest_smaller = b->value;
				target = b;
			}
			b = b->next;
		}
		if (closest_smaller == LONG_MIN)
			a->target_node = fish_highest(*stack_b);
		else
			a->target_node = target;
		a = a->next;
	}
}

void	get_target_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*a;
	t_list	*b;
	t_list	*target;
	long	closest_bigger;

	b = *stack_b;
	while (b)
	{
		a = *stack_a;
		closest_bigger = LONG_MAX;
		while (a)
		{
			if (a->value > b->value && a->value < closest_bigger)
			{
				closest_bigger = a->value;
				target = a;
			}
			a = a->next;
		}
		if (closest_bigger == LONG_MAX)
			b->target_node = fish_lowest(*stack_a);
		else
			b->target_node = target;
		b = b->next;
	}
}

void	get_cost_a(t_list **stack_a, t_list **stack_b)
{
	int		size_a;
	int		size_b;
	t_list	*a;

	size_a = ft_lstsize(*stack_a);
	size_b = ft_lstsize(*stack_b);
	a = *stack_a;
	while (a)
	{
		a ->push_cost = a->index;
		if (a ->above_median == 0)
			a->push_cost = size_a - (a->index);
		if (a->target_node->above_median == 1)
			a->push_cost += a->target_node->index;
		else
			a->push_cost += size_b - (a->target_node->index);
		a = a->next;
	}
}
