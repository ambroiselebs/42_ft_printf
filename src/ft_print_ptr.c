/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:59:06 by aberenge          #+#    #+#             */
/*   Updated: 2024/10/22 18:02:02 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_pointer(uintptr_t ptr, int fd)
{
	int			counter;

	if (!ptr)
		return (ft_putstr_fd("(nil)", fd));
	counter = 0;
	counter += ft_putstr_fd("0x", fd);
	counter += ft_print_hex_fd_min(ptr, fd);
	return (counter);
}
