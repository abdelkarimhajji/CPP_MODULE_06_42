/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 07:44:46 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/18 13:24:31 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    srand(time(0));
    int random = rand() % 3;
    if(random == 0)
        return new A;
    else if(random == 1)
        return new B;
    return new C;
}

void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "A class" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "B class" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "C Class" << std::endl;
}

void identify(Base& p)
{
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A class" << std::endl;
    } catch(...) {
        try {
            (void)dynamic_cast<B&>(p);
            std::cout << "B class" << std::endl;
        } catch(...) {
            std::cout << "C class" << std::endl;
        }
    }
}
int main()
{   
    Base* b = generate();
    identify(b);
    identify(b);
    delete b;
    return 0;
}