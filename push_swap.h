/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:23:33 by sameye            #+#    #+#             */
/*   Updated: 2021/09/15 20:20:09 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_stack
{
	int	*v;
	int	l;
}				t_stack;

int		main(int ac, char **av);
void	ft_printstacks(t_stack *a, t_stack *b);
int		ft_fillstacks(t_stack *a, t_stack *b, int ac, char **av);
int		ft_allocstacks(t_stack *a, t_stack *b, int ac);
int		ft_push(t_stack *from, t_stack *dst);
int		pa(t_stack *a, t_stack *b);
int		pb(t_stack *a, t_stack *b);
int		ft_rotatereverse(t_stack *s);
int		rra(t_stack *a, t_stack *b);
int		rrb(t_stack *a, t_stack *b);
int		rrr(t_stack *a, t_stack *b);
int		ft_rotateup(t_stack *s);
int		ra(t_stack *a, t_stack *b);
int		rb(t_stack *a, t_stack *b);
int		rr(t_stack *a, t_stack *b);
int		ft_swapp2firsts(t_stack *s);
int		sa(t_stack *a, t_stack *b);
int		sb(t_stack *a, t_stack *b);
int		ss(t_stack *a, t_stack *b);
int		ft_atoi_protect(const char *nptr, int *res);
int		ft_max(int i, int j);
int		ft_issorted(t_stack *s, int dir);
int		ft_hasduplicates(t_stack *s);
void	ft_normalize(t_stack *a, t_stack *b);
void	ft_radix(t_stack *a, t_stack *b);
void	ft_swapsort(t_stack *a, t_stack *b);
void	ft_pusha(t_stack *a, t_stack *b);
int		ft_error(void);
int		ft_checkargs(int ac, char **av);
int		ft_allsorted(t_stack *a, t_stack *b);
void	ft_pushbit(t_stack *a, t_stack *b, int bitshift);
int		ft_error_free(t_stack *a, t_stack *b);

#endif