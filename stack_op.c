/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qais <qais@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:45:21 by qhatahet          #+#    #+#             */
/*   Updated: 2025/02/04 04:25:36 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **dst, t_stack **src)
{
	t_stack	*push_node;

	push_node = NULL;
	if (!*src)
		return ;
	push_node = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	push_node->prev = NULL;
	if (!*dst)
	{
		*dst = push_node;
		push_node->next = NULL;
	}
	else
	{
		push_node->next = *dst;
		push_node->next->prev = push_node;
		*dst = push_node;
	}
}

void	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	second->prev = NULL;
	*stack = second;
}

void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack || !(*stack)->next)
		return ;
	first = *stack;
	last = find_last(*stack);
	last->next = first;
	first->prev = last;
	*stack = first->next;
	first->next = NULL;
}

void	rev_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*head;
	t_stack	*back;

	if (!*stack || !((*stack)->next))
		return ;
	head = *stack;
	tmp = head;
	while (tmp->next)
	{
		back = tmp;
		tmp = tmp->next;
	}
	tmp->next = head;
	tmp->prev = NULL;
	head->prev = tmp;
	back->next = NULL;
	*stack = tmp;
}
