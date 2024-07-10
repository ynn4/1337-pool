  /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarissy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:26:02 by ifarissy          #+#    #+#             */
/*   Updated: 2024/06/30 18:33:43 by ifarissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
int main()
{
    int i = 12;
    int *a = &i;
    int j = 6;
    int *b = &j;
    ft_ultimate_div_mod(a, b);
    printf("%d\n", *a);
    printf("%d\n", *b);
}
