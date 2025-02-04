/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qais <qais@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:52:03 by qhatahet          #+#    #+#             */
/*   Updated: 2025/02/04 04:22:17 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_stack	*ft_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	sort_three(t_stack **a)
{
	int		num;
	t_stack	*temp;

	num = (*a)->nbr;
	temp = (*a)->next;
	if (num > temp->nbr && temp->next->nbr < temp->nbr)
	{
		ra(a);
		sa(a);
	}
	else if (num < temp->nbr && num > temp->next->nbr)
		rra(a);
	else if (num < temp->nbr && temp->next->nbr < temp->nbr)
	{
		rra(a);
		sa(a);
	}
	else if (num > temp->nbr && num < temp->next->nbr)
		sa(a);
	else if (num > temp->nbr && num > temp->next->nbr)
	{
		rra(a);
		rra(a);
	}
}

// void	sort_three(t_stack **a)
// {
// 	t_stack	*biggest_node;

// 	printf("hi\n");
// 	biggest_node = find_max(*a);
// 	if (!biggest_node)
// 		printf("skmill issue!!\n");
// 	if (biggest_node == *a)
// 		ra(a);
// 	else if ((*a)->next == biggest_node)
// 		rra(a);
// 	if ((*a)->nbr > (*a)->next->nbr)
// 		sa(a);
// }
