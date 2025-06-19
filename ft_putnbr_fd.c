/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:27:46 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 16:31:52 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10 && n <= 2147483647)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = '0' + (n % 10);
	write(fd, &c, 1);
}

// int main(void)
// {
// 	ft_putnbr_fd(12345, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-9876, 1);
// 	write(1, "\n", 1);
// 	return 0;
// }