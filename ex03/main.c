/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:37:57 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/05 10:50:15 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	division;
	int	modulo;
	int	*ptr_div;
	int	*ptr_mod;

	a = 17;
	b = 4;
	ptr_div = &division;
	ptr_mod = &modulo;
	ft_div_mod(a, b, ptr_div, ptr_mod);
	printf("%d\n", division);
	printf("%d\n", modulo);
	return (0);
}
