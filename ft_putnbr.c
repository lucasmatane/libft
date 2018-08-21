/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassehairi <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 20:27:33 by lucasseha         #+#    #+#             */
/*   Updated: 2018/08/09 23:27:20 by lucasseha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c); 

void	ft_putnbr(int nb) 
{
	
	if(nb < -2147483637)
	{
		ft_putchar('-'); 
		ft_putchar('2'); 
		ft_putnbr(147483648); 
	}
	if (nb < 0)
	{
		ft_putchar('-'); 
		nb = -nb;  
	}	

	if (nb > 9)
	{ 
		ft_putnbr(nb / 10); 
		ft_putchar((nb % 10) + 48); 		
	} 
	ft_putchar(nb + 48); 
	if (nb < 9)
}
