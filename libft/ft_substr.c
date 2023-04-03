/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:37:13 by osericol          #+#    #+#             */
/*   Updated: 2023/03/28 14:02:52 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    i = 0;
    if (!s)
        return (NULL);
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (i < len && s[start])
    {
        str[i] = s[start];
        i++;
        start++;
    }
    str[i] = '\0';
    return (str);
}
