/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burun <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:42:58 by burun             #+#    #+#             */
/*   Updated: 2022/12/20 18:09:14 by burun            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)

{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*#include <fcntl.h>

int main()
{
	int fd = open("/Users/burun/Desktop/merhaba.txt",O_WRONLY | O_CREAT ,777);
	ft_putendl_fd("Merhaba 42 Kocaeli",fd);
}*/