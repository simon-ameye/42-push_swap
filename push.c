/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:57:52 by sameye            #+#    #+#             */
/*   Updated: 2021/09/13 20:04:21 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_push(t_stack *from, t_stack *dst)
{
	int elt;
	int i;

	elt = from->v[0];
	(from->l)--;
	i = 0;
	while (i <= from->l - 1)
	{
		from->v[i] = from->v[i + 1];
		i++;
	}
	i = dst->l - 1;
	while (i >= 0)
	{
		dst->v[i + 1] = dst->v[i];
		i--;
	}
	dst->v[0] = elt;
	(dst->l)++;
	return (EXIT_SUCCESS);
}

int	pa(t_stack *a, t_stack *b)
{
	if (b->l >= 1)
	{
		ft_putstr_fd("pa\n", 1);
		ft_push(b, a);
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}

int	pb(t_stack *a, t_stack *b)
{
	if (a->l >= 1)
	{
		ft_putstr_fd("pb\n", 1);
		ft_push(a, b);
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}
