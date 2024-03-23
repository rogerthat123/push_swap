/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:50:12 by rneto-fo          #+#    #+#             */
/*   Updated: 2024/02/24 15:50:19 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		else
			tmp = tmp->next;
	}
	return (1);
}

t_list	*fish_highest(t_list *stack)
{
	t_list	*bigger;
	t_list	*tmp;
	int		min;

	tmp = stack;
	min = INT_MIN;
	while (tmp)
	{
		if (tmp->value > min)
		{
			bigger = tmp;
			min = tmp->value;
		}
		tmp = tmp->next;
	}
	return (bigger);
}

t_list	*fish_lowest(t_list *stack)
{
	t_list	*lowest;
	t_list	*tmp;
	int		max;

	tmp = stack;
	max = INT_MAX;
	while (tmp)
	{
		if (tmp->value < max)
		{
			lowest = tmp;
			max = tmp->value;
		}
		tmp = tmp->next;
	}
	return (lowest);
}

void	clean_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i++]);
	}
	free(str);
}

t_list	*get_cheapest(t_list **stack)
{
	long	cheapest_value;
	t_list	*cheapest_node;
	t_list	*tmp;

	if (!stack)
		return (NULL);
	cheapest_value = LONG_MAX;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->push_cost < cheapest_value)
		{
			cheapest_value = tmp->push_cost;
			cheapest_node = tmp;
		}
		tmp = tmp->next;
	}
	return (cheapest_node);
}
