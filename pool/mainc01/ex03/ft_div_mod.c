/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarissy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:21:26 by ifarissy          #+#    #+#             */
/*   Updated: 2024/06/30 18:24:21 by ifarissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main()
{
    int division;
    int *div = &division;
    int remainder;
    int *mod = &remainder;
    ft_div_mod(12, 6, div, mod);
    printf("%d\n", *div);
    printf("%d\n", *mod);
}
