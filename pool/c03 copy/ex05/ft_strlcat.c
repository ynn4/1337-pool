/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarissy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 03:42:36 by ifarissy          #+#    #+#             */
/*   Updated: 2024/07/10 05:11:32 by ifarissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	tlen;
	unsigned int	i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	tlen = slen + dlen;
	if (size <= dlen)
	{
		return (size + slen);
	}
	i = dlen;
	while (dlen < size - 1 && *src != '\0')
	{
		dest[i++] = *src++;
		dlen++;
	}
	dest[i] = '\0';
	return (tlen);
}
