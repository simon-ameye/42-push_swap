/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:26:27 by sameye            #+#    #+#             */
/*   Updated: 2021/09/15 19:06:55 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_allocstacks(t_stack *a, t_stack *b, int ac)
{
	a->v = malloc(sizeof(int) * (ac - 1) * 2);
	if (a->v == NULL)
		return (EXIT_FAILURE);
	b->v = malloc(sizeof(int) * (ac - 1) * 2);
	if (b->v == NULL)
	{
		free(a->v);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int	ft_fillstacks(t_stack *a, t_stack *b, int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac - 1)
	{
		if (ft_atoi_protect(av[i + 1], &a->v[i]) == EXIT_FAILURE)
			return (EXIT_FAILURE);
		i++;
	}
	a->l = ac - 1;
	b->l = 0;
	return (EXIT_SUCCESS);
}

int	ft_checkargs(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (i <= ac - 2)
	{
		j = 0;
		if (av[i + 1][j] == '-')
			j++;
		while (av[i + 1][j] <= '9' && av[i + 1][j] >= '0')
			j++;
		if (av[i + 1][j] != '\0')
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	if (ft_checkargs(ac, av) == EXIT_FAILURE)
		return (ft_error());
	if (ft_allocstacks(&a, &b, ac) == EXIT_FAILURE)
		return (ft_error());
	if (ft_fillstacks(&a, &b, ac, av) == EXIT_FAILURE)
		return (ft_error());
	if (ft_hasduplicates(&a))
		return (ft_error());
	ft_normalize(&a, &b);
	if (ac <= 24)
		ft_swapsort(&a, &b);
	else
		ft_radix(&a, &b);
	free(a.v);
	free(b.v);
	return (EXIT_SUCCESS);
}
