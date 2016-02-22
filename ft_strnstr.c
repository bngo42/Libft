/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:35:05 by bngo              #+#    #+#             */
/*   Updated: 2015/12/02 14:04:29 by bngo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] == s1[i + j] && s2[j] != '\0' && (i + j) < n)
			j++;
		if (s2[j] == '\0')
			return (char*)&s1[i];
		i++;
	}
	return (NULL);
}
