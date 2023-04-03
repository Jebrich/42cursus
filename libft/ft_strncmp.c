/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:21:06 by osericol          #+#    #+#             */
/*   Updated: 2023/03/28 14:02:41 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
        i++;
    if (i == n)
        return (0);
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}