/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassehairi <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 20:32:45 by lucasseha         #+#    #+#             */
/*   Updated: 2018/08/12 11:45:07 by lucasseha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_atoi(char *str); 
int	main(void)
{
	printf("%d", ft_atoi("  13"));  
	return 0; 
}
