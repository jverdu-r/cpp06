/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:10:26 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/11/13 17:24:54 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"

Base* generate(void)
{
    switch(rand() % 3)
    {
        case (0):
            return (new A());
        case (1):
            return (new B());
        case (2):
            return (new C());
        default:
            return (NULL);
    }
}

void identify(Base *p)
{
    Base *aux;

    aux = dynamic_cast<A *>(p);
    if (aux)
    {
        std::cout << "\033[31m" << "Type A" << "\033[0m" << std::endl;
        return;
    }
    aux = dynamic_cast<B *>(p);
    if (aux)
    {
        std::cout << "\033[32m" << "Type B" << "\033[0m" << std::endl;
        return;
    }

    aux = dynamic_cast<C *>(p);
    if (aux)
    {
        std::cout << "\033[33m" << "Type C" << "\033[0m" << std::endl;
        return;
    }

    std::cout << "unknowm type" << std::endl;
}

void identify(Base &p)
{
    try
    {
        (void) dynamic_cast<A &>(p);
        std::cout << "\033[31m" << "Type A" << "\033[0m" << std::endl;
        return;
    }
    catch(...){}

    try
    {
        (void) dynamic_cast<B &>(p);
        std::cout << "\033[32m" << "Type b" << "\033[0m" << std::endl;
        return;
    }
    catch(...){}

    try
    {
        (void) dynamic_cast<C &>(p);
        std::cout << "\033[33m" << "Type C" << "\033[0m" << std::endl;
        return;
    }
    catch(...){}

    std::cout << "unknowm type" << std::endl;
}

int main() {
	srand(time(NULL));

	A a;
	B b;
	C c;
	Base base;
	Base *aux;
	

	for (int i = 0; i < 10; i++) {
		aux = generate();
		identify(aux);
		delete aux;
	}

	std::cout << std::endl;
	identify(&a);
	identify(&b);
	identify(&c);
	identify(&base);

	std::cout << std::endl;
	identify(a);
	identify(b);
	identify(c);
	identify(base);
    return (0);
}