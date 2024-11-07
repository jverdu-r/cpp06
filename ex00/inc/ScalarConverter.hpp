/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:30:29 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/11/07 18:57:34 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>

class ScalarConverter
{
    private:
        ScalarConverter(void);
        ~ScalarConverter(void);
        ScalarConverter(const ScalarConverter &origin);
        ScalarConverter &operator=(const ScalarConverter &origin);
    public:
        static void convert(std::string input);
};
#endif