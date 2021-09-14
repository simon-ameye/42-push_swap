/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:56:46 by sameye            #+#    #+#             */
/*   Updated: 2021/09/13 20:11:41 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_rotatereverse(t_stack *s)
{
	int i;
	int tmp;

	tmp = s->v[s->l - 1];
	i = s->l - 1;
	while (i >= 0)
	{
		s->v[i] = s->v[i - 1];
		i--;
	}
	s->v[0] = tmp;
	return (EXIT_SUCCESS);
}

int rra(t_stack *a, t_stack *b)
{
	(void) b;
	if (a->l >= 2)
	{
		ft_rotatereverse(b);
		ft_putstr_fd("rra\n", 1);
	}
	return (EXIT_SUCCESS);
}

int rrb(t_stack *a, t_stack *b)
{
	(void) a;
	if (b->l >= 2)
	{
		ft_rotatereverse(b);
		ft_putstr_fd("rrb\n", 1);
	}
	return (EXIT_SUCCESS);
}

int rrr(t_stack *a, t_stack *b)
{
	if (b->l >= 2)
		ft_rotatereverse(b);
	if (a->l >= 2)
		ft_rotatereverse(a);
	ft_putstr_fd("rrr\n", 1);
	return (EXIT_SUCCESS);
}