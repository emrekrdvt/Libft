/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 20:30:08 by a          #+#    #+#             */
/*   Updated: 2022/01/07 22:12:49 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len++;
	}
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*ret;
	const char	*dig;

	dig = "0123456789";
	len = ft_numlen(n);
	if (n == 0)
		return (ft_strdup("0"));
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ret[len] = 0;
	if (n < 0)
		ret[0] = '-';
	while (n)
	{
		if (n > 0)
			ret[--len] = dig[n % 10];
		else
			ret[--len] = dig[n % 10 * -1];
		n /= 10;
	}
	return (ret);
}
