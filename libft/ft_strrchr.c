/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:18:55 by osericol          #+#    #+#             */
/*   Updated: 2023/03/28 14:02:48 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    while (i >= 0)
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i--;
    }
    return (NULL);
}