/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:00:50 by sameye            #+#    #+#             */
/*   Updated: 2021/09/15 15:48:57 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swapsort(t_stack *a, t_stack *b)
{
	int count;
	int maxsteps;

	maxsteps = a->l - 2;
	count = 0;
	while (ft_issorted(a) == 0)
	{
		if (a->v[0] > a->v[1])
			sa(a, b);
		if (ft_issorted(a) == 1)
			return;
		if (count % (2 * maxsteps) < maxsteps)
			ra(a, b);
		else
			rra(a, b);
		count++;
	}
}

/*
int ft_shouldreverse(t_stack *a, int dir, int count)
{
	if (dir == 1)
	{
		
	}
}

void ft_improvedswapsort(t_stack *a, t_stack *b)
{
	int count;
	int maxsteps;
	int dir;

	maxsteps = a->l - 2;
	count = 0;
	dir = 1;
	while (ft_issorted(a) == 0)
	{
		if (a->v[0] > a->v[1])
			sa(a, b);
		if (ft_issorted(a) == 1)
			return;

		if (count == maxsteps)
			dir = -1;
		if (count == 0)
			dir = 1;

		if (ft_shouldreverse(a, dir, count));
			dir = -dir;

		if (dir == 1)
		{
			rra(a, b);
			count++;
		}
		else
		{
			ra(a, b);
			count--;
		}
	}
}
*/