/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:54:05 by a          #+#    #+#             */
/*   Updated: 2022/01/08 18:46:08 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpys;
	size_t	i;
	size_t	l;

	l = ft_strlen(s1) + 1;
	if (!s1)
		return (NULL);
	cpys = (char *)malloc(sizeof(*s1) * l);
	if (!cpys)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		cpys[i] = s1[i];
		i++;
	}
	cpys[i] = 0;
	return (cpys);
}
