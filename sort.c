/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:12:17 by sameye            #+#    #+#             */
/*   Updated: 2021/09/14 17:07:43 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushbit(t_stack *a, t_stack *b, int bitshift)
{
	int i;
	int actions;

	i = 0;
	actions = a->l;
	while (i < actions)
	{
		if ((((a->v[0]) >> bitshift) & 1) == 0)
			pb(a, b);
		else
			ra(a, b);
		i++;
	}
}

void	ft_pusha(t_stack *a, t_stack *b)
{
	while (b->l > 0)
	{
		pa(a, b);
	}
}

void	ft_sort(t_stack *a, t_stack *b)
{
	int bitshift;
	
	bitshift = 0;
	while (ft_issorted(a) == 0)
	{
		ft_pushbit(a, b, bitshift);
		//ft_printstacks(a, b);
		ft_pusha(a, b);
		//ft_printstacks(a, b);
		bitshift++;
	}
}