/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:02:51 by osericol          #+#    #+#             */
/*   Updated: 2023/04/11 14:45:28 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && char_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && char_set(s1[end - 1], set))
		end--;
	new = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (start < end)
		new[i++] = s1[start++];
	new[i] = 0;
	return (new);
}
