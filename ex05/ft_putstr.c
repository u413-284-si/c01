/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:18:15 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/05 15:06:36 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Last element of arrays is always 'zero'.
Go through array elements until last element zero is reached
(which doesn't count as a defined element)
and count up with every loop. */

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	write(1, str, length);
}
