/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehyoyee <taehykim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:56:32 by tehyoyee          #+#    #+#             */
/*   Updated: 2021/09/20 20:16:09 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *c)
{
	unsigned int	i;

	i = 0;
	while (*c)
	{
		i++;
		c++;
	}
	return (i);
}

unsigned char	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_size;
	unsigned int	s_size;
	unsigned int	i;

	i = 0;
	d_size = ft_len(dest);
	s_size = ft_len(src);
	while (*dest && i < size)
	{
		dest++;
		i++;
	}
	while (*src && i + 1 < size)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	if (d_size < size)
		return (s_size + d_size);
	else
		return (s_size + size);
}
