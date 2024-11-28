/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:15:24 by qhatahet          #+#    #+#             */
/*   Updated: 2024/11/28 19:43:17 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstnew(int content)
{
	t_node	*head;

	head = (t_node *) malloc(sizeof(t_node));
	if (!head)
		return (NULL);
	head->data = content;
	head->next = NULL;
    head->back = NULL;
	return (head);
}
