/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarissy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 03:49:43 by ifarissy          #+#    #+#             */
/*   Updated: 2024/07/07 05:50:47 by ifarissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	char	*start_str;
	char	*original;

	original = to_find;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		start_str = str;
		while (*to_find && *str && *str == *to_find)
		{
			str++;
			to_find++;
		}
		if (*to_find == '\0')
		{
			return (start_str);
		}
		str = start_str + 1;
		to_find = original;
	}
	return (0);
}
/*int main()
{
	char s1[] = "salam 3alaykom, hani liya a bro?";
	char s2[] = "ya";
	printf("%s", ft_strstr(s1, s2));
}*/
