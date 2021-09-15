/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:12:17 by sameye            #+#    #+#             */
/*   Updated: 2021/09/15 11:59:49 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_maline(t_stack *a, t_stack *b)
{
	if (a->l >= 2 && b->l >= 2 && 0)
	{
		if (a->v[0] >= a->v[1] && b->v[0] <= b->v[1])
		{
			ss(a, b);
			return;
		}
	}
	if (a->l >= 2 && 0)
	{
		if (a->v[0] >= a->v[1])
		{
			sa(a, b);
			return;
		}
	}
	if (b->l >= 2 && 0)
	{
		if (b->v[0] >= b->v[1])
		{
			sb(a, b);
			return;
		}
	}
}

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
		//ft_maline(a, b);
		i++;
	}
}

void	ft_pusha(t_stack *a, t_stack *b)
{
	while (b->l > 0)
		pa(a, b);
}

void	ft_radix(t_stack *a, t_stack *b)
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
