/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneto-fo <rneto-fo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 08:24:16 by rneto-fo          #+#    #+#             */
/*   Updated: 2024/03/20 08:24:17 by rneto-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct s_list
{
	int				value;
	int				index;
	int				push_cost;
	int				above_median;
	struct s_list	*target_node;	
	struct s_list	*next;
}	t_list;

void	args_checker(int argc, char **argv);
int		is_sorted(t_list **stack);
void	sort(t_list **stack_a);
void	sort_three(t_list **stack);

// tools
int		is_sorted(t_list **stack);
t_list	*fish_highest(t_list *stack);
t_list	*fish_lowest(t_list *stack);
t_list	*get_cheapest(t_list **stack);
void	clean_str(char **str);

//nodes_tools
void	fill_the_nodes(t_list **stack_a, t_list **stack_b, char name);
void	get_index(t_list **stack);

//sort_tools
void	push_a_to_b(t_list **stack_a, t_list **stack_b);
void	push_b_to_a(t_list **stack_a, t_list **stack_b);
void	check_top(t_list **stack, t_list **top_node, char name);
void	ascending_order(t_list **stack);

// List Manipulation
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstclear(t_list **lst);
int		ft_lstsize(t_list *lst);
t_list	*get_before_tail(t_list *lst);
void	sort_three(t_list **stack);
void	sort(t_list **stack_a);

// Operations
int		pa(t_list **stack_a, t_list**stack_b);
int		pb(t_list **stack_b, t_list**stack_a);
int		sa(t_list **stack);
int		sb(t_list **stack);
int		ss(t_list **stack_a, t_list **stack_b);
int		ra(t_list **stack);
int		rb(t_list **stack);
int		rr(t_list **stack_a, t_list **stack_b);
void	rotate_both(t_list **stack_a, t_list **stack_b,
			t_list **cheapest_node);
int		rra(t_list **stack);
int		rrb(t_list **stack);
int		rrr(t_list **stack_a, t_list **stack_b);
void	rev_rotate_both(t_list **stack_a, t_list **stack_b,
			t_list **cheapest_node);

#endif
