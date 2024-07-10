/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarissy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 03:12:51 by ifarissy          #+#    #+#             */
/*   Updated: 2024/07/01 03:32:46 by ifarissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	swap;

	start = 0;
	end = size - 1;
	while (start < (size / 2))
	{
		swap = tab[start];
		tab[start] = tab[end];
		tab[end] = swap;
		start++;
		end--;
	}
}
