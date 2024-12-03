/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:52:03 by qhatahet          #+#    #+#             */
/*   Updated: 2024/12/03 21:46:04 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"
#include	<stdio.h>

void	sort3(t_node **stack)
{
	int		num;
	t_node	*temp;

	num = (*stack)->data;
	temp = (*stack)->next;
	if (num > temp->data && temp->next->data < temp->data)
	{
		ra(stack);
		sa(stack);
	}
	else if (num < temp->data && num > temp->next->data)
		rra(stack);
	else if (num < temp->data && temp->next->data < temp->data)
	{
		rra(stack);
		sa(stack);
	}
	else if (num > temp->data && num < temp->next->data)
		sa(stack);
	else if (num > temp->data && num > temp->next->data)
	{
		rra(stack);
		rra(stack);
	}
}
/*
void	sort5(t_node **stack_a, t_node **stack_b)
{
	pb(stack_b, (*stack_a)->data);
	*stack_a = (*stack_a)->next;
	free((*stack_a)->back);
	pb(stack_b, (*stack_a)->data);
	*stack_a = (*stack_a)->next;
	free((*stack_a)->back);
	sort3(stack_a);
	pa(stack_a, (*stack_b)->data);
	*stack_b = (*stack_b)->next;
	free((*stack_b)->back);
	pa(stack_a, (*stack_b)->data);
	free(*stack_b);
}*/
