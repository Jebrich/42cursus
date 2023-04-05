/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 08:44:27 by osericol          #+#    #+#             */
/*   Updated: 2023/04/05 09:57:21 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *s2;
	size_t len = ft_strlen(s);
	size_t i;

	i = 0;
	s2 = malloc((len + 1) * sizeof(char));

	if(!s2)
	{
		return (NULL);
	}
	while(i < len)
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[len] = '\0';
	return (s2);
}
