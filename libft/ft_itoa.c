/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: superbia <superbia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:39:17 by osericol          #+#    #+#             */
/*   Updated: 2023/04/04 16:08:12 by superbia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char* ft_itoa(int n) {
    // Determine the length of the resulting string
    int length = 0;
    int temp = n;
    while (temp != 0) {
        length++;
        temp /= 10;
    }
    if (n < 0) {
        length++; // Add one extra character for the '-' sign
        temp = -n;
    } else {
        temp = n;
    }
    
    // Allocate memory for the string
    char* result = malloc(length + 1);
    result[length] = '\0';
    
    // Convert the integer to a string
    int i = length - 1;
    while (temp != 0) {
        result[i] = '0' + (temp % 10);
        temp /= 10;
        i--;
    }
    if (n < 0) {
        result[0] = '-';
    }
    
    return result;
}


int main()
{
int n = -2147483647;

printf("%s", ft_itoa(n));


return (0);
}
