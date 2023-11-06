/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudiba <aboudiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:05:28 by aboudiba          #+#    #+#             */
/*   Updated: 2023/11/03 20:30:16 by aboudiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	while (i + start < slen && i < len)
		i++;
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	slen = 0;
	while (i > 0)
	{
		str[slen++] = s[start++];
		i--;
	}
	str[slen] = '\0';
	return (str);
}
