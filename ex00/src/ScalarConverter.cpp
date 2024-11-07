/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:41:57 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/11/07 19:05:18 by jverdu-r         ###   ########.fr       */
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

    //intentar convertir a int
    long int intValue = std::strtol(input.c_str(), &end, 10);
    if (*end == 0 && intValue <= std::numeric_limits<int>::max() && intValue >= std::numeric_limits<int>::min())
    {
        std::cout << "\033[32m" << "el valor es un entero " << static_cast<int>(intValue) << "\033[0m" << std::endl;
        return;
    }

    //intentar convertir a float
    float floatValue = std::strtof(input.c_str(), &end);
    if (*end == '\0')
    {
        double doubleValue = std::strtod(input.c_str(), NULL);
        if (std::abs(doubleValue - floatValue) < std::numeric_limits<float>::epsilon())
            std::cout << "\033[32m" << "el valor es un float " << floatValue << "\033[0m" << std::endl;
        else
            std::cout << "\033[32m" << "el valor es un double " << doubleValue << "\033[0m" << std::endl;
        return;
    }

    //intentar convertir a char
    if (input.length() == 1)
    {
        std::cout << "\033[32m" << "el valor es un char " << input[0] << "\033[0m" << std::endl;
        return;
    }
}