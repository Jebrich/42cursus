/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:51:54 by osericol          #+#    #+#             */
/*   Updated: 2023/03/28 14:02:31 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t k;

    i = 0;
    j = 0;
    k = 0;
    while (dst[i] != '\0')
        i++;
    while (src[j] != '\0')
        j++;
    if (dstsize <= i)
        j += dstsize;
    else
        j += i;
    while (src[k] != '\0' && i + 1 < dstsize)
    {
        dst[i] = src[k];
        i++;
        k++;
    }
    dst[i] = '\0';
    return (j);
}