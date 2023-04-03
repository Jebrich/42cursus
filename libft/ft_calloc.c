/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:29:41 by osericol          #+#    #+#             */
/*   Updated: 2023/03/28 14:00:53 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    size_t i;

    i = 0;
    ptr = malloc(count * size);
    if (ptr == NULL)
        return (NULL);
    while (i < count * size)
    {
        ((char *)ptr)[i] = 0;
        i++;
    }
    return (ptr);
}