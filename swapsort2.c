/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapsort2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:19:19 by sameye            #+#    #+#             */
/*   Updated: 2021/09/15 17:05:25 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swapsort2(t_stack *a, t_stack *b)
{
	int max;
	int sent;

	sent = -1;
	max = a->l - 1;
	while (ft_issorted(a) == 0)
	{
		if (a->v[0] > a->v[1] && a->v[0] != max && a->v[1] != max)
			sa(a, b);
		if (ft_issorted(a) == 1)
			break;
		if (a->v[0] - sent == 1)
		{
			sent = a->v[0];
			pb(a, b);
		}
		if (ft_issorted(a) == 1)
			break;
		ra(a, b);
	}
	ft_pusha(a, b);
}
