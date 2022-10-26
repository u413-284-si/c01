/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:37:57 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/05 11:26:19 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;

	a = 17;
	b = 4;
	ptr_a = &a;
	ptr_b = &b;
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}
