//
// Created by Tascau Razvan on 30.10.2022.
//

#include "pachet_ads.h"



pachet_ads::pachet_ads(int PRICE) : Price{PRICE}
{
    std::cout << "Constructor de initializare pachet_ads";

}

pachet_ads::pachet_ads(pachet_ads &other) :Price{other.Price}
{
    std::cout<<" Constructor de copiere pachet_ads";
}

pachet_ads &pachet_ads::operator=(pachet_ads &other) {
    Price = other.Price;
    std::cout << "operator = copiere pachet_ads";
    return *this;
}

void pachet_ads::get_Price(int PRICE) {
    Price = PRICE;

}

int pachet_ads::set_Price() {
    return Price;
}

std::ostream &operator<<(std::ostream &os, pachet_ads &pa1) {
    os<<"Price: " << pa1.Price;
    return os;
}
