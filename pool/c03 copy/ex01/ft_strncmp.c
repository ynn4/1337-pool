/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarissy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:29:58 by ifarissy          #+#    #+#             */
/*   Updated: 2024/07/10 03:19:52 by ifarissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n)
	{
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		counter++;
	}
	return (0);
}

/*int main()
{
	char s1[20] = "avdhagdWQ";
	char s2[20] = "avdhagdWQTT";
	printf("%d", ft_strncmp(s1, s2, 12));
}*/
