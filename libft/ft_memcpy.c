/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:17:13 by osericol          #+#    #+#             */
/*   Updated: 2023/03/28 14:01:47 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        ((char *)dst)[i] = ((char *)src)[i];
        i++;
    }
    return (dst);
}