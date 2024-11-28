/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:10:58 by qhatahet          #+#    #+#             */
/*   Updated: 2024/11/28 19:41:01 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*temp;

	if (*lst == NULL)
	{
		*lst = new;
		return;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
	new->back = temp;
}
