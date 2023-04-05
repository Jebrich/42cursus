/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:02:00 by osericol          #+#    #+#             */
/*   Updated: 2023/04/05 16:42:21 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (!*str++)
			return (NULL);
	}
	return ((char *)str);
}
