/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaeys <bclaeys@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:42:14 by bclaeys           #+#    #+#             */
/*   Updated: 2024/07/03 13:44:18 by bclaeys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 9 
# endif

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*get_next_line(int fd);
char	*create_result(int i, char *s);
int		ft_extend(char **line, int *l_buf_mul);
int		ft_strlen(const char *str);
void	ft_reset_s(char *s, int j);
char	*ft_write_line(char *s, char *line, int bytes_returned, int j);
int		ft_s_eof_check(char *s, char *line, int bytes_returned);
void	ft_set_to_zero(int *i, int *j, int *k);

#endif
