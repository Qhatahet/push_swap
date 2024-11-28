/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:49:39 by qhatahet          #+#    #+#             */
/*   Updated: 2024/11/28 23:30:53 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

void	pa(t_node **stack_a, int data);
void	ra(t_node **stack_a);
void	rra(t_node **stack_a);
void	sa(t_node **stack_a);
void    pb(t_node **stack_b, int data);
void    rb(t_node **stack_b);
void    rrb(t_node **stack_b);
void    sb(t_node **stack_b);

# endif
