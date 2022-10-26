/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:02:58 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/06 11:42:21 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* Save first element in a buffer. 
Save value of last element into first.
Save buffer into last element. 
Iterate to next pair of elements inwards.
Stop iteration before the middle element (middle swap unnecessary;
following swaps would undo previous operations. */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buffer;

	i = 0;
	while (i < size / 2)
	{
		buffer = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = buffer;
		i++;
	}
}
