/* ************************************************************************** */
/*                                                                            */

/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:26:40 by osericol          #+#    #+#             */
/*   Updated: 2023/03/28 13:08:51 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"
#include <stddef.h>

void ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        ((char *)dst)[i] = ((char *)src)[i];
        i++;
    }
}

int main()
{
 char str[6];
 char src[6] = {"hello"};

ft_memmove(str, src, 3);

printf("%s", str);

}