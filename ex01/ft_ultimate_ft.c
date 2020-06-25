/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandwen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:30:21 by asandwen          #+#    #+#             */
/*   Updated: 2020/06/25 08:18:02 by asandwen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int main()
{
	int a;
	int *b;
	int **c;
	int ***d;
	int ****e;
	int *****f;
	int ******g;
	int *******h;
	int ********i;
	int *********j;

	a = 32;
	b =&a;
	c =&b;
	d =&c;
	e =&d;
	f =&e;
	g =&f;
	h =&g;
	i =&h;
	j =&i;
	ft_ultimate_ft(j);
	printf("%d",a);
	return 0;
	
}

