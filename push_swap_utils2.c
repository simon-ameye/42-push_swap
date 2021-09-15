/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:26:56 by sameye            #+#    #+#             */
/*   Updated: 2021/09/15 19:05:00 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(int i, int j)
{
	if (i >= j)
		return (i);
	return (j);
}

void	ft_printstacks(t_stack *a, t_stack *b)
{
	int	i;

	i = ft_max(a->l, b->l) - 1;
	while (i >= 0)
	{
		if (i <= (a->l - 1))
			ft_putnbr_fd(a->v[a->l - 1 - i], 1);
		else
			ft_putstr_fd(" ", 1);
		ft_putstr_fd(" ", 1);
		if (i <= (b->l - 1))
			ft_putnbr_fd(b->v[b->l - 1 - i], 1);
		else
			ft_putstr_fd(" ", 1);
		ft_putstr_fd("\n", 1);
		i--;
	}
	ft_putstr_fd("- -\n", 1);
	ft_putstr_fd("a b\n\n\n", 1);
}
