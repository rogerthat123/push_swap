/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:03:43 by rneto-fo          #+#    #+#             */
/*   Updated: 2024/03/19 23:03:44 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_init(t_list **stack, int argc, char **argv);
void	push_swap(t_list **stack_a);

int	main(int argc, char **argv)
{
	t_list	*stack_a;

	stack_a = NULL;
	if (argc < 2)
		return (1);
	args_checker(argc, argv);
	stack_init(&stack_a, argc, argv);
	if (!is_sorted(&stack_a))
		push_swap(&stack_a);
	ft_lstclear(&stack_a);
}

void	stack_init(t_list **stack, int argc, char **argv)
{
	char	**args;
	t_list	*tmp;
	int		i;
	int		value;

	i = 1;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = argv + 1;
	*stack = ft_lstnew(ft_atoi(args[0]));
	while (args[i])
	{
		value = ft_atoi(args[i]);
		tmp = ft_lstnew(value);
		ft_lstadd_back(stack, tmp);
		i++;
	}
	if (argc == 2)
		clean_str(args);
}

void	push_swap(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) == 2)
		sa(stack_a);
	else
		sort(stack_a);
}
