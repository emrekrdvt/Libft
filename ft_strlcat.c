/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:09:47 by a          #+#    #+#             */
/*   Updated: 2022/01/08 19:44:12 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_l;
	size_t	src_l;

	src_l = ft_strlen(src);
	dst_l = ft_strlen(dst);
	j = dst_l;
	i = 0;
	if (dst_l < size && size > 0)
	{
		while (src[i] && dst_l + i < size - 1)
		{
				dst[j] = src[i];
				j++;
				i++;
		}
		dst[j] = 0;
	}
	if (dst_l >= size)
		dst_l = size;
	return (dst_l + src_l);
}
