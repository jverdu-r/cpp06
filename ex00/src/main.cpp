/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:10:10 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/11/11 16:20:35 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

int main(int argc, char **argv)
{
    switch (argc)
    {
        case 1:
        {
            std::cout << "\033[33m" << "no arguments" << "\033[0m" << std::endl;
            break;
        }
        case 2:
        {
            ScalarConverter::convert(argv[1]);
            break;
        }
        default :
        {
            std::cout << "\033[33m" << "too much arguments" << "\033[0m" << std::endl;
            break;
        }
    }

    return 0;
}