/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:23:32 by sameye            #+#    #+#             */
/*   Updated: 2021/09/15 19:01:48 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_normalize(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	*temp;

	i = 0;
	while (i <= a->l - 1)
	{
		j = 0;
		b->v[i] = 0;
		while (j <= a->l - 1)
		{
			if (a->v[j] < a->v[i])
				(b->v[i])++;
			j++;
		}
		i++;
	}
	b->l = 0;
	temp = a->v;
	a->v = b->v;
	b->v = temp;
}
