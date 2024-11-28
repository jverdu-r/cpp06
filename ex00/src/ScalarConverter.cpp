/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:41:57 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/11/13 17:44:51 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void){}

ScalarConverter::~ScalarConverter(void){}

ScalarConverter::ScalarConverter(const ScalarConverter &origin)
{
    *this = origin;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &origin)
{
    (void)origin;
    return (*this);
}

void ScalarConverter::convert(std::string input)
{
    char *end;

    std::cout << "\033[33m" << "char: " << "\033[0m";
    if (input.length() == 1)
        std::cout << "\033[32m" << input[0] << "\033[0m" << std::endl;
    else
        std::cout << "\033[31m" << "imposible" << "\033[0m" << std::endl;

    std::cout << "\033[33m" << "int: " << "\033[0m";
    float floatValue = std::strtof(input.c_str(), &end);
    int intValue = static_cast<int>(floatValue);
    if (*end == 0 && intValue <= std::numeric_limits<int>::max() && intValue >= std::numeric_limits<int>::min())
        std::cout << "\033[32m" << intValue << "\033[0m" << std::endl;
    else
        std::cout << "\033[31m" << "imposible" << "\033[0m" << std::endl;

    std::cout << "\033[33m" << "float: " << "\033[0m";
    if (*end == '\0' || floatValue < std::numeric_limits<float>::epsilon() || floatValue > std::numeric_limits<float>::epsilon())
        std::cout << std::fixed << std::setprecision(2) << "\033[32m" << floatValue << "f" <<  "\033[0m" << std::endl;
    else
        std::cout << "\033[31m" << "imposible" << "\033[0m" << std::endl;
    
    std::cout << "\033[33m" << "double: " << "\033[0m";
    double doubleValue = std::strtod(input.c_str(), &end);
    if (*end == '\0' || doubleValue < std::numeric_limits<double>::epsilon() || doubleValue > std::numeric_limits<double>::epsilon())
        std::cout << std::fixed << std::setprecision(4) << "\033[32m" << doubleValue << "\033[0m" << std::endl;
    else
        std::cout << "\033[31m" << "imposible" << "\033[0m" << std::endl;
}