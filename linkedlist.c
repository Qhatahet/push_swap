/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:06:07 by qhatahet          #+#    #+#             */
/*   Updated: 2024/12/03 20:10:11 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<stdio.h>
#include<stdlib.h>

void	printstack(t_node **stack)
{
	t_node	*temp;

	temp = *stack;
	while (temp)
	{
		printf("%i", temp->data);
		temp = temp->next;
		if (temp != NULL)
			printf("->");
	}
	printf("\n");
}

void free_stack(t_node **stack)
{
	t_node *temp;

	temp = *stack;
	while (*stack != NULL)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		i;
	int		num;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		ft_lstadd_back(&stack_a, ft_lstnew(num));
		i++;
	}
	printstack(&stack_a);
	syrian_sort(&stack_a, &stack_b);
	printstack(&stack_a);
//	printstack(&stack_b);
	free_stack(&stack_a);
//	free_stack(&stack_b);
	return (0);
}
