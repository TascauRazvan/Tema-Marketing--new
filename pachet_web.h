//
// Created by Tascau Razvan on 30.10.2022.
//

#ifndef MARKETING_PACHET_WEB_H
#define MARKETING_PACHET_WEB_H
#include <iostream>


class pachet_web {
public:
    explicit pachet_web(int price);
    pachet_web(int& PRICE);
    pachet_web(const pachet_web& other);
    pachet_web& operator=(pachet_web& other);
    void get_Price(int PRICE);
    int set_Price();
    friend std::ostream& operator <<(std::ostream& os, pachet_web& pa1);


private:
    int Price;
};
#endif //MARKETING_PACHET_WEB_H
