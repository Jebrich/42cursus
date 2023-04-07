/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:02:51 by osericol          #+#    #+#             */
/*   Updated: 2023/04/07 14:12:55 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*runner;

	runner = (char *) s;
	while (*runner)
	{
		if (*runner == (char) c)
			return (runner);
		runner++;
	}
	if (*runner == (char) c)
		return (runner);
	return (NULL);
}
