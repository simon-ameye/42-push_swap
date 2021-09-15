/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:46:08 by sameye            #+#    #+#             */
/*   Updated: 2021/09/15 19:08:49 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swapp2firsts(t_stack *s)
{
	int	temp;

	if (s->l >= 2)
	{
		temp = s->v[0];
		s->v[0] = s->v[1];
		s->v[1] = temp;
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}

int	sa(t_stack *a, t_stack *b)
{
	(void) b;
	if (ft_swapp2firsts(a) == EXIT_SUCCESS)
	{
		ft_putstr_fd("sa\n", 1);
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}

int	sb(t_stack *a, t_stack *b)
{
	(void) a;
	if (ft_swapp2firsts(b) == EXIT_SUCCESS)
	{
		ft_putstr_fd("sb\n", 1);
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}

int	ss(t_stack *a, t_stack *b)
{
	(void) a;
	if (a->l >= 2 && b->l >= 2)
	{
		if (ft_swapp2firsts(a) == EXIT_SUCCESS
			&& ft_swapp2firsts(b) == EXIT_SUCCESS)
		{
			ft_putstr_fd("ss\n", 1);
			return (EXIT_SUCCESS);
		}
	}
	return (EXIT_FAILURE);
}
