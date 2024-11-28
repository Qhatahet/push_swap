/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:11:39 by qhatahet          #+#    #+#             */
/*   Updated: 2024/11/28 20:18:02 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void    pb(t_node **stack_b, int data)
{
	t_node	*node_b;

	node_b = ft_lstnew(data);
        ft_lstadd_back(stack_b, node_b);
}

void    sb(t_node **stack_b)
{
        t_node *first;
        t_node  *second;

        first = *stack_b;
        second = (*stack_b)->next;
        first->next = second->next;
        second->next = first;
        second->back = NULL;
        *stack_b = second;
}

void    rb(t_node **stack_b)
{
        t_node  *first;
        t_node  *second;
        t_node  *last;

        first = *stack_b;
        second = (*stack_b)->next;
        last = ft_lstlast(*stack_b);
        last->next = first;
        first->back = last;
        first->next = NULL;
        second->back = NULL;
        *stack_b = second;
}

void    rrb(t_node **stack_b)
{
        t_node  *first;
        t_node  *last;
        t_node  *b_last;

        first = *stack_b;
        last = ft_lstlast(*stack_b);
        b_last = last->back;
        last->next = first;
        first->back = last;
        b_last->next = NULL;
        last->back = NULL;
        *stack_b = last;
}
