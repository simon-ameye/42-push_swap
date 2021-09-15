/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:56:11 by sameye            #+#    #+#             */
/*   Updated: 2021/09/15 19:09:36 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotateup(t_stack *s)
{
	int	i;
	int	tmp;

	tmp = s->v[0];
	i = 0;
	while (i <= (s->l - 2))
	{
		s->v[i] = s->v[i + 1];
		i++;
	}
	s->v[s->l - 1] = tmp;
	return (EXIT_SUCCESS);
}

int	ra(t_stack *a, t_stack *b)
{
	(void) b;
	if (a->l >= 2)
	{
		ft_rotateup(a);
		ft_putstr_fd("ra\n", 1);
	}
	return (EXIT_SUCCESS);
}

int	rb(t_stack *a, t_stack *b)
{
	(void) a;
	if (b->l >= 2)
	{
		ft_rotateup(b);
		ft_putstr_fd("ra\n", 1);
	}
	return (EXIT_SUCCESS);
}

int	rr(t_stack *a, t_stack *b)
{
	if (b->l >= 2)
		ft_rotateup(b);
	if (a->l >= 2)
		ft_rotateup(a);
	ft_putstr_fd("rr\n", 1);
	return (EXIT_SUCCESS);
}
