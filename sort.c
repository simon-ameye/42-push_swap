/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:12:17 by sameye            #+#    #+#             */
/*   Updated: 2021/09/15 18:20:07 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_allsorted(t_stack *a, t_stack *b)
{
	if (ft_issorted (a, 1) == 1 && ft_issorted (b, -1))
		return 1;
	return (0);
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
		if (ft_allsorted(a, b))
			break;
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
	while (ft_issorted(a, 1) == 0)
	{
		ft_pushbit(a, b, bitshift);
		//ft_printstacks(a, b);
		ft_pusha(a, b);
		//ft_printstacks(a, b);
		bitshift++;
	}
}
