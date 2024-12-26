#include "functions.h"
#include <iostream>
#include <limits>



clients* create_array_clients(int n) {
    clients* arr = (clients*)calloc(n, sizeof(clients));
    int i = 0;
    while (true) {
        std::cout<<"фамилия "<<"\n";
        std::cin>>arr[i].FirstName;
        i++;
        if(i==n) {
            break;
        }
    }
    return arr;
}



int check(int n) {
    while (true) {
        std::cin>>n;
        if (std::cin.fail()|| n <0 || std::cin.peek()!='\n') {
            std::cin.clear();
            std::cin.ignore(1000000, '\n');
            std::cout << "Неверный ввод.\n";
            std::cout << "Введите кол-во покупателей (положительное число) " << "\n";
            continue;
        }
        break;
    }
    return n;
}

