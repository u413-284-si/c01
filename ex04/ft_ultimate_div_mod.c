/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimative_div_mod.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:26:37 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/05 11:48:47 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dividend;
	int	divisor;

	dividend = *a;
	divisor = *b;
	*a = dividend / divisor;
	*b = dividend % divisor;
}
