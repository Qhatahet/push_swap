/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 23:59:50 by qhatahet          #+#    #+#             */
/*   Updated: 2024/09/17 13:45:15 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stddef.h>
#include	"libft.h"
//#include	<stdio.h>
//#include	<unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = ((char *)s);
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	s[20] = "";
	char	*p;

	p = ft_memset(s, 'i', 5);
	//printf("%s\n", p);
	write (1, p, 6);
	return (0);
}*/
