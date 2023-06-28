/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:16:36 by ychng             #+#    #+#             */
/*   Updated: 2023/06/28 16:35:27 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <stdlib.h>
# include <unistd.h>

// get_next_line
char	*get_next_line(int fd);

// get_next_line_utils
char	*has_newline_character(char *s);
int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
void	ft_strcpy(char *s1, char *s2);

#endif