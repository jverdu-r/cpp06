/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:42:45 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/11/13 16:46:43 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"
#include "../inc/Data.hpp"

int main() {
    Data data(1, "TestName");

    // serializamos el objeto data
    uintptr_t serialized = Serializer::serialize(&data);
    std::cout << "Serialized value: " << serialized << std::endl;

    // deserializamos el objeto a puntero Data*
    Data* deserialized = Serializer::deserialize(serialized);
    std::cout << "Deserialized Data id: " << deserialized->id << ", name: " << deserialized->name << std::endl;

    // comprobamos si ambos coinciden
    if (deserialized == &data) {
        std::cout << "Serialization and deserialization are successful!" << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed." << std::endl;
    }

    return 0;
}