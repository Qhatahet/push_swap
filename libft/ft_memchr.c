/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 06:45:12 by qhatahet          #+#    #+#             */
/*   Updated: 2024/09/03 17:56:43 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"
#include	<stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*st;
	size_t			i;

	st = ((unsigned char *)s);
	i = 0;
	while (i < n)
	{
		if (*st == ((unsigned char )c))
			return (st);
		st++;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	s[] = "qais hatahet";
	char	*res;

	res = ft_memchr(s, 't', 7);
	printf("%s\n",res);
	return (0);
}*/
