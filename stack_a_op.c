/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:45:21 by qhatahet          #+#    #+#             */
/*   Updated: 2024/12/03 22:22:58 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
/*
void	pa(t_node **stack_a, int data)
{
	t_node	*node_a;

	node_a = ft_lstnew(data);
	ft_lstadd_front(stack_a, node_a);
	write(1, "pa\n", 3);
}
*/
void	pa(t_node **stack_a, t_node *node_a)
{
	ft_lstadd_front(stack_a, node_a);
	write(1, "pa\n", 3);
}
void	sa(t_node **stack_a)
{
	t_node *first;
	t_node	*second;

	first = *stack_a;
	second = (*stack_a)->next;
	first->next = second->next;
	second->next = first;
	second->back = NULL;
	*stack_a = second;
	write(1, "sa\n", 3);
}

void	ra(t_node **stack_a)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	first = *stack_a;
	second = (*stack_a)->next;
	last = ft_lstlast(*stack_a);
	last->next = first;
	first->back = last;
	first->next = NULL;
	second->back = NULL;
	*stack_a = second;
	write(1, "ra\n", 3);
}

void	rra(t_node **stack_a)
{
	t_node	*first;
	t_node	*last;
	t_node	*b_last;

	first = *stack_a;
	last = ft_lstlast(*stack_a);
	b_last = ft_lstlast(*stack_a)->back;
	b_last->next = NULL;
	last->next = first;
	first->back = last;
	last->back = NULL;
	*stack_a = last;
	write(1, "rra\n", 4);
}
