#include <iostream>
#include "functions.h"
#include <limits>
int main()
{
    int amount;
    std::cout << "Введите количество покупателей: ";
    amount=check(amount);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    clients* massiv=create_array_clients(amount);
    std::cout <<"количество покупателей "<<amount<< std::endl;


   free(massiv);
    return 0;
}
