/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qais <qais@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 13:08:43 by qais              #+#    #+#             */
/*   Updated: 2025/02/04 04:08:02 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				nbr;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;
	struct s_stack	*next;
	struct s_stack	*prev;
	struct s_stack	*target_node;
}	t_stack;

bool			stack_sorted(t_stack *stack);
void			sort_stacks(t_stack **a, t_stack **b);
void			init_stack_a(t_stack **a, char **argv);
void			free_errors(t_stack **a);
void			free_stack(t_stack **stack);
void			init_nodes_b(t_stack *a, t_stack *b);
void			init_nodes_a(t_stack *a, t_stack *b);
void			set_cheapest(t_stack *stack);
void			current_index(t_stack *stack);
void			pa(t_stack **stack_a, t_stack **stack_b);
void			sa(t_stack **stack);
void			ra(t_stack **stack);
void			rra(t_stack **stack);
void			pb(t_stack **stack_a, t_stack **stack_b);
void			sb(t_stack **stack);
void			rb(t_stack **stack);
void			rrb(t_stack **stack);
void			rev_rotate(t_stack **stack);
void			swap(t_stack **stack);
void			rotate(t_stack **stack);
void			rev_rotate(t_stack **stack);
void			prep_for_push(t_stack **stack, t_stack *top_node,
					char stack_name);
void			sort_three(t_stack **a);
void			push(t_stack **dst, t_stack **src);							
void			print(t_stack **stack);
void			rrr(t_stack **a, t_stack **b);
void			rr(t_stack **a, t_stack **b);
void			rev_rotate_both(t_stack **a, t_stack **b,
					t_stack *cheapest_node);
void			rotate_both(t_stack **a, t_stack **b,
					t_stack *cheapest_node);
t_stack			*find_max(t_stack *stack);
t_stack			*find_min(t_stack *stack);
t_stack			*find_last(t_stack *stack);
t_stack			*get_cheapest(t_stack *stack);
t_stack			*ft_last(t_stack *lst);
int				stack_len(t_stack *stack);
int				error_syntax(char *str_n);
int				error_duplicate(t_stack *a, int n);
#endif
