/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:32:14 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 16:51:47 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_mem;
	size_t	i;
	size_t	len2;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start || len == 0)
		return (ft_strdup("\0"));
	if (ft_strlen(s) - start < len)
		len2 = ft_strlen(s) - start;
	else
		len2 = len;
	new_mem = malloc(sizeof(char) * (len2 + 1));
	if (!new_mem)
		return (NULL);
	while (i < len2 && s[start + i] != '\0')
	{
		new_mem[i] = s[start + i];
		i++;
	}
	new_mem[i] = '\0';
	return (new_mem);
}
