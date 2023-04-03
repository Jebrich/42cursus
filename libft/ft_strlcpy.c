/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:37:34 by osericol          #+#    #+#             */
/*   Updated: 2023/03/28 14:02:34 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    i = 0;
    while (i < dstsize)
    {
        dst[i] = src[i];
        i++;
    }
}