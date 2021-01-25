/*
** EPITECH PROJECT, 2021
** cat.c
** File description:
** cat
*/

#include "../Object.hpp"
#include "../Wrap.hpp"
#include "../GiftPaper.hpp"
#include "../Box.hpp"
#include "../Toy.hpp"
#include "../Teddy.hpp"
#include "../LittlePony.hpp"
#include <iostream>
using namespace std;

Object **MyUnitests() {
    auto **objectArray = new Object*[4];
    objectArray[0] = new Teddy("happy pony");
    objectArray[1] = new Box();
    objectArray[2] = new GiftPaper();
    objectArray[3] = nullptr;
    return objectArray;
}

GiftPaper *unitests(Object **result)

{
    Teddy* teddy_b = static_cast<Teddy*>(result[0]);
    Box* box = static_cast<Box*>(result[1]);
    GiftPaper* giftpaper = static_cast<GiftPaper*>(result[2]);

    std::cout << "Wrapping a gift : " << std::endl;
    std::cout << "Wrapping the toy in the box..." << std::endl;
    box->wrapMeThat(teddy_b);
    std::cout << "Wrapping the box in the giftpaper..." << std::endl;
    giftpaper->wrapMeThat(box);
    return giftpaper;
}

void openGift(GiftPaper *gift)
{
    std::cout << "Open the giftpaper : " << std::endl;
    Box *box = static_cast<Box*>(gift->getObject());
    std::cout << "Open the box..." << std::endl;
    std::cout << "There is a " << box->getObject()->getSecondType() << " inside !" << std::endl;
}

int main()
{
    Object **result = MyUnitests();
    GiftPaper *gift = unitests(result);
    std::cout << std::endl;
    openGift(gift);
    return 0;
}