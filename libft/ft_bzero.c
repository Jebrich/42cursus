/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:15:46 by osericol          #+#    #+#             */
/*   Updated: 2023/03/28 13:57:55 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;
    size_t i;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}

int main()
{
    char str[50] = "Hello World";
    ft_bzero(str, 5);
    printf("%s", str);
    return 0;
}