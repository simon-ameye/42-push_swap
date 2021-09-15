/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radixbase3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:42:42 by sameye            #+#    #+#             */
/*   Updated: 2021/09/15 15:05:54 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	ft_pushbit3(t_stack *a, t_stack *b, int shift)
{
	int i;
	int actions;
	int val;
	int pow;

	i = 0;
	actions = a->l;
	while (i < actions)
	{
		pow = 0;
		val = a->v[0];
		while (pow < shift)
		{
			val = val / 3;
			pow++;
		}
		
		if (val % 3 == 1)
		{
			pb(a, b);
			ra(a, b);
		}
		if (val % 3 == 0)
		{
			pb(a, b);
			rr(a, b);
		}
		else
			ra(a, b);
		i++;
	}
}

void	ft_radixbase3(t_stack *a, t_stack *b)
{
	int shift;
	
	shift = 0;
	while (ft_issorted(a) == 0 && shift <= 3)
	{
		ft_pushbit3(a, b, shift);
		ft_printstacks(a, b);
		ft_pusha(a, b);
		ft_printstacks(a, b);
		shift++;
	}
}