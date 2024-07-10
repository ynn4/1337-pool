/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarissy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 14:21:44 by ifarissy          #+#    #+#             */
/*   Updated: 2024/06/30 14:23:14 by ifarissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int main()
{
    int i = 12;
    int *nbr = &i;
    int **nbr1 = &nbr;
    int ***nbr2 = &nbr1;
    int ****nbr3 = &nbr2;
    int *****nbr4 = &nbr3;
    int ******nbr5 = &nbr4;
    int *******nbr6 = &nbr5;
    int ********nbr7 = &nbr6;
    int *********nbr8 = &nbr7;
    ft_ultimate_ft(nbr8);
    printf("%d", i);
}
