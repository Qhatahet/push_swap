/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qais <qais@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:48:43 by qhatahet          #+#    #+#             */
/*   Updated: 2025/02/04 04:30:29 by qais             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_node *lst)
{
	int				i;
	struct s_node	*current;

	i = 0;
	current = lst;
	while (current != NULL)
	{
		current = current ->next;
		i++;
	}
	return (i);
}
