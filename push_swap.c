/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:26:27 by sameye            #+#    #+#             */
/*   Updated: 2021/09/15 16:52:00 by sameye           ###   ########.fr       */
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
	int i;

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

void	ft_printstacks(t_stack *a, t_stack *b)
{
	int i;

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

int ft_error()
{
	ft_putstr_fd("Error\n", 1);
	return (EXIT_FAILURE);
}

int ft_checkargs(int ac, char **av)
{
	int i;
	int j;

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
	t_stack a;
	t_stack b;

	//if (ac <= 1)
	//	return (ft_error());
	if (ft_checkargs(ac, av) == EXIT_FAILURE)
		return (ft_error());	
	if (ft_allocstacks(&a, &b, ac) == EXIT_FAILURE)
		return (ft_error());
	if (ft_fillstacks(&a, &b, ac, av) == EXIT_FAILURE)
		return (ft_error());
	if (ft_hasduplicates(&a))
		return (ft_error());
	ft_normalize(&a, &b);
	//ft_radix(&a, &b);
	//ft_printstacks(&a, &b);
	//ft_radixbase3(&a, &b);
	//ft_swapsort(&a, &b);
	ft_swapsort2(&a, &b);
	//ft_improvedswapsort(&a, &b);
	//ft_printstacks(&a, &b);
	free(a.v);
	free(b.v);
	return (EXIT_SUCCESS);
}