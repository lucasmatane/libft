/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassehairi <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 23:27:36 by lucasseha         #+#    #+#             */
/*   Updated: 2018/08/20 13:52:06 by lucasseha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int sign; 
	int nb; 
	int i; 

	nb = 0; 
	i = 0; 
	while(str[i] && ((str[i] => 8 && str[i] <= 13) || str[i] == ' '))
		i++; 
	if(str[i] == '-')
		sign = -1; 
	if(str[i] == '-' || str[i] == '+')
		i++; 
	while(str[i] >= '0' && str[i] <= '9' && str[i])
	{
		nb = nb * 10; 
		nb = nb + (str[i] - 48); 
		i++; 
	} 
	return (nb * sign); 
}
