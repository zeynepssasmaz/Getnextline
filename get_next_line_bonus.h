/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:20:26 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/07/27 13:20:31 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

int		ft_find_new_line(char *all_first_left_last);
size_t	ft_strlen(char *all_first_left_last);
char	*ft_strjoin(char *buff, char *all_first_left_last);
char	*ft_with_new_line(int fd, char *all_first_left_last);
char	*ft_until_new_line(char *all_first_left_last);
char	*ft_left(char *all_first_left_last);
char	*get_next_line(int fd);

#endif
