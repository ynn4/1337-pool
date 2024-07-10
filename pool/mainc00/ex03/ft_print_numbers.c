/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarissy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:51:54 by ifarissy          #+#    #+#             */
/*   Updated: 2024/06/27 10:58:03 by ifarissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	int i;
	i = 0;
	while (i <= 9)
	{
		ft_putchar(i + '0');
		i++;
	}
}
    int main(){
        ft_print_numbers();
    }
