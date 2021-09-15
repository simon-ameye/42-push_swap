/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:26:56 by sameye            #+#    #+#             */
/*   Updated: 2021/09/15 19:04:53 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_protect(const char *nptr, int *result)
{
	int		sign;
	int		i;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - 48);
		if ((res * sign > 2147483647) || (res * sign < -2147483648))
			return (EXIT_FAILURE);
		i++;
	}
	*result = (int) res * sign;
	return (EXIT_SUCCESS);
}

int	ft_issorted(t_stack *s, int dir)
{
	int	i;

	i = 0;
	while (i <= s->l - 2)
	{
		if (dir >= 0)
		{
			if ((s->v[i]) > (s->v[i + 1]))
				return (0);
		}
		else
		{
			if ((s->v[i]) < (s->v[i + 1]))
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_hasduplicates(t_stack *s)
{
	int	i;
	int	j;

	i = 0;
	while (i <= (s->l - 2))
	{
		j = i + 1;
		while (j <= (s->l - 1))
		{
			if (s->v[i] == s->v[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_pusha(t_stack *a, t_stack *b)
{
	while (b->l > 0)
		pa(a, b);
}

int	ft_error(void)
{
	ft_putstr_fd("Error\n", 1);
	return (EXIT_FAILURE);
}
