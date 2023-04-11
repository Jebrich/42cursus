/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:02:51 by osericol          #+#    #+#             */
/*   Updated: 2023/04/11 14:45:46 by osericol         ###   ########.fr       */
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
