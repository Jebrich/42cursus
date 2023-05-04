/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:58:11 by osericol          #+#    #+#             */
/*   Updated: 2023/05/04 21:04:55 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>
# include <unistd.h>

char	*read_line(int fd, char *str);
int		ft_strlen(char *str);
char	*ft_strchr(char *s, int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strjoin(char *str, char *buff);
char	*get_line(char *str);
char	*store_line(char *str);
char	*get_next_line(int fd);
#endif