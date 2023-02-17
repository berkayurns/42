/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burun <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:31:16 by burun             #+#    #+#             */
/*   Updated: 2022/12/20 18:10:01 by burun            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)

{
	write(fd, &c, 1);
}
/*#include <fcntl.h>

int main(){

	int fd =open("deneme.txt",O_WRONLY);
	ft_putchar_fd('a',fd);
}*/