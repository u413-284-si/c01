/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:02:58 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/06 17:33:13 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
 */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	buffer;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				buffer = tab[i];
				tab[i] = tab[j];
				tab[j] = buffer;
			}
			j++;
		}
		i++;
	}
}
