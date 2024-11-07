/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:10:10 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/11/07 18:52:15 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

int main(void)
{
    std::string input;
    std::cout << "Introduce un valor: ";
    std::cin >> input;

    ScalarConverter::convert(input);

    return 0;
}