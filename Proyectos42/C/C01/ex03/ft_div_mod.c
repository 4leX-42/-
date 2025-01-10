/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:46:47 by aandreu           #+#    #+#             */
/*   Updated: 2024/02/27 18:43:48 by aandreu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main() {
  int a = 10;
  int b = 3;
  int div;
  int mod;

  ft_div_mod(a, b, &div, &mod);

  printf("División: %d\n", div);
  printf("Resto: %d\n", mod);

  return 0;
}
*/
