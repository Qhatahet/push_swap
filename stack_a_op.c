/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:45:21 by qhatahet          #+#    #+#             */
/*   Updated: 2024/11/28 20:15:49 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	pa(t_node **stack_a, int data)
{
	t_node	*node_a;

	node_a = ft_lstnew(data);
	ft_lstadd_back(stack_a, node_a);
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
}

void	rra(t_node **stack_a)
{
	t_node	*first;
	t_node	*last;
	t_node	*b_last;

	first = *stack_a;
	last = ft_lstlast(*stack_a);
	b_last = last->back;
	last->next = first;
	first->back = last;
	b_last->next = NULL;
	last->back = NULL;
	*stack_a = last;
}
