/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:40:14 by aberenge          #+#    #+#             */
/*   Updated: 2024/10/22 18:02:05 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
void	ft_parser(char c, int *counter, va_list *args);

int		ft_print_hex_fd_maj(int nb, int fd);
int		ft_print_hex_fd_min(int nb, int fd);
int		ft_putchar_fd(char c, int fd);
int		ft_putnbr_fd(int nb, int fd);
int		ft_putstr_fd(const char *str, int fd);
int		ft_print_pointer(uintptr_t ptr, int fd);
int		ft_putnbr_unsigned_fd(unsigned int n, int fd);

#endif
