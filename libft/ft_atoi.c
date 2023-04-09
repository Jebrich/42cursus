/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: superbia <superbia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:15:28 by osericol          #+#    #+#             */
/*   Updated: 2023/04/08 19:50:50 by superbia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char ch)
{
	if (ch == ' ' || ch == '\f' || ch == '\n' \
	|| ch == '\r' || ch == '\t' || ch == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	const char	*ptr;
	int			sign;
	int			result;

	ptr = str;
	sign = 1;
	result = 0;
	while (ft_isspace(*ptr))
		ptr++;
	if (*ptr == '+')
	{
		ptr++;
	}
	else if (*ptr == '-')
	{
		sign *= -1;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		result = (result * 10) + (*ptr - '0');
		ptr++;
	}	
	return (result * sign);
}
