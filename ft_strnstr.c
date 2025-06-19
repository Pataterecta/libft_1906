/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 18:28:22 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/19 12:45:06 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		len_little;

	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	i = 0;
	len_little = ft_strlen(little);
	while (big[i] != '\0' && i + len_little <= len)
	{
		if (ft_strncmp(&big[i], little, len_little) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	const char *big = "abcdefg";
// 	const char *little = "ef";
// 	size_t len = 6;
// 	printf("%s\n", ft_strnstr(big, little, len));
// 	return (0);
// }