/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:49:39 by qhatahet          #+#    #+#             */
/*   Updated: 2024/12/03 22:27:54 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include	"libft/libft.h"
# include	<unistd.h>

void	syrian_sort(t_node **stack_a, t_node **stack_b);
void	printstack(t_node **stack);
//void	sort5(t_node **stack_a, t_node **stack_b);
void	sort3(t_node **stack);
void	pa(t_node **stack_a, t_node *node_a);
void	ra(t_node **stack_a);
void	rra(t_node **stack_a);
void	sa(t_node **stack_a);
void    pb(t_node **stack_b, t_node *node_a);
void    rb(t_node **stack_b);
void    rrb(t_node **stack_b);
void    sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);

# endif
