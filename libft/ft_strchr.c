/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 21:30:36 by qhatahet          #+#    #+#             */
/*   Updated: 2024/09/13 17:07:19 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"
#include	<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0' && *s == '\0')
		return ((char *)s);
	if (*s)
		return ((char *)s);
	else
		return (NULL);
}
/*
int main(void)
{
    const char *str = "teste";
    //char ch = 1024;
    char *result;

    result = ft_strchr(str, 'e');
    if (result != NULL) 
    {
        //printf("Character '%c' found at position: %ld\n", ch, result - str);
        printf("Substring from found character: %s\n", result);
    } 
    else
    {
        printf("Character '%c' not found in the string.\n", 1024);
    }
    result = ft_strchr(str, '\0');
    if (result != NULL) 
    {
        printf("Null terminator found at position: %ld\n", result - str);
        printf("Substring from null terminator: %s\n", result);
    }
    return (0);
}*/