/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:07:58 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/06 17:13:00 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

/* Pointer points to adress of first element of the array */

int	main(void)
{
	int	tab[5];
	int	size;
	int	i;

	tab[0] = 7;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = -5;
	tab[4] = -1;
	size = 5;
	for (i = 0; i < size; i++)
		printf("%d\n", tab[i]);
	ft_sort_int_tab(tab, size);
	printf("\n");
	for (i = 0; i < size; i++)
		printf("%d\n", tab[i]);
	return (0);
}
