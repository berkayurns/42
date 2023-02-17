/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burun <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:48:37 by burun             #+#    #+#             */
/*   Updated: 2022/12/20 18:07:25 by burun            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)

{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = (nb * -1);
	}
	if (nb < 10)
		ft_putchar_fd(nb + 48, fd);
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
/*#include <fcntl.h>

int main()
{
	int fd = open("/Users/burun/Desktop/testt.txt", O_WRONLY | O_CREAT,777);
	ft_putstr_fd("Merhaba ",fd);
	ft_putnbr_fd(42,fd);
	ft_putstr_fd(" Kocaeli",fd);
}*/