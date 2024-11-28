/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 07:33:48 by qhatahet          #+#    #+#             */
/*   Updated: 2024/09/13 17:01:15 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"
#include	<unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*st;
	char	*str;

	st = NULL;
	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == ((char)c))
			st = str;
		str++;
	}
	if (*str == ((char)c))
		st = str;
	return (st);
}
/*
int	main(void)
{
	char	s[] = "qais hatahet";
	char	*p;

	p = ft_strrchr(s, 'h');
	write (1, p, 4);
	return (0);
}*/
