/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:57:27 by qhatahet          #+#    #+#             */
/*   Updated: 2024/12/03 22:35:52 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"
#include	<stdio.h>

void	syrian_sort(t_node **stack_a, t_node **stack_b)
{
	t_node	*temp;
	int		num;
	int		i;
	int		pos;

	while (ft_lstsize(*stack_a) != 3)
	{
		temp = *stack_a;
		num = (*stack_a)->data;
		i = 1;
		pos = 1;
		while (i < ft_lstsize(*stack_a) && temp != NULL)
		{
			if(num > temp->next->data)
			{
				num = temp->next->data;
				pos = i;
			}
			temp = temp->next;
			i++;
		}
		if (pos >= (ft_lstsize(*stack_a) / 2))
		{
			while ((*stack_a)->data != num)
				rra(stack_a);
		}
		else
		{
			while ((*stack_a)->data != num)
				ra(stack_a);
		}
		*stack_a = (*stack_a)->next;
		pb(stack_b, (*stack_a)->back);
		if (ft_lstsize(*stack_b) > 1)
		{
			if ((*stack_b)->data < (*stack_b)->next->data)
				sa(stack_b);
		}
		if (ft_lstsize(*stack_a) == 3)
			sort3(stack_a);
	}
	while (ft_lstlast(*stack_b) != 0)
	{
		temp = *stack_b;
		*stack_b = (*stack_b)->next;
		pa(stack_a, temp);
	}
}
