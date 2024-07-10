/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarissy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 14:25:08 by ifarissy          #+#    #+#             */
/*   Updated: 2024/06/30 14:37:41 by ifarissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
    int nbr1 = 42;
    int *ptr1 = &nbr1;
    int nbr2 = 50;
    int *ptr2 = &nbr2;
    ft_swap(ptr1, ptr2);
    printf("%d", nbr1);
}
