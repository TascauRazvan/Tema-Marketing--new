//
// Created by Tascau Razvan on 30.10.2022.
//

#include "pachet_web.h"


pachet_web::pachet_web(int price) : Price(price) {}

pachet_web::pachet_web(int &PRICE) : Price{PRICE}{
    std::cout<<"Constructor de initializare pachete_web";
}

pachet_web::pachet_web(const pachet_web &other) : Price{other.Price}{
    std::cout<<"Constr de copiere pachete_ads";
}

pachet_web &pachet_web::operator=(pachet_web &other) {
    Price = other.Price;
    std::cout<<"operator = copiere pachet_web";
    return *this;
}

void pachet_web::get_Price(int PRICE) {
    Price = PRICE;
}

int pachet_web::set_Price() {
    return Price;
}

std::ostream &operator<<(std::ostream &os, pachet_web &pa1) {
    os<<"Price: "<< pa1.Price;
    return os;
}



