/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:16:50 by osericol          #+#    #+#             */
/*   Updated: 2023/03/28 15:59:33 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"


char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);

    char *str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

    if (str == NULL)
    {
        return (NULL);
    }
    
    ft_memcpy(str, s1, len1);
    ft_memcpy(str + len1, s2, len2);
    str[len1 + len2] = '\0';

    return (str);
}