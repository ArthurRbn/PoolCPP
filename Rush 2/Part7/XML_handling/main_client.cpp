/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPrush2_nicolas_schneider
** File description:
** Created by arthur,
*/

#include <algorithm>
#include <iostream>
#include "../../PapaXmasTable.hpp"
#include "../../PapaXmasElf.hpp"
#include "../../ConveyorBelt.hpp"
#include "../../Box.hpp"
#include "../../GiftPaper.hpp"
#include "../../Toy.hpp"
#include "../../Teddy.hpp"
#include "../../TableRand.hpp"
#include "xmlGift.hpp"
#include <vector>

void displayTable(PapaXmasElf *elf_leo)
{
    unsigned long index = 0;
    std::vector<std::string> whats_on_table;

    std::cout << "Checking what's on the table..." << std::endl;
    whats_on_table = elf_leo->lookAtTable();
    for(; index < (whats_on_table.size() - 1); index++)
        std::cout << whats_on_table[index] << ", ";
    std::cout << whats_on_table.at(index) << "." << std::endl;
}

void MyUnitests(int port) {
    xmlGift *xml;
    ITable *table = new TableRand();
    IConveyorBelt *conveyorBelt = createConveyorBelt();
    PapaXmasElf *elf_leo = new PapaXmasElf(table);
    bool wrapping = true;
    Box *box = nullptr;
    Toy *toy = nullptr;
    GiftPaper *giftPaper = nullptr;
    std::cout << "Welcome to the santa chain production !" << std::endl;
    while (wrapping) {
        if (table->check()) {
            displayTable(elf_leo);
            std::cout << "Taking the toy and wrapping it into the box..." << std::endl;
            toy = dynamic_cast<Toy*>(table->takeToy());
            xml = new xmlGift(toy->getType(), toy->getName());
            box = dynamic_cast<Box*>(table->takeBox());
            box->wrapMeThat(toy);
            giftPaper = dynamic_cast<GiftPaper*>(table->takeGiftPaper());
            std::cout << "Wrapping the box into the giftpaper..." << std::endl;
            giftPaper->wrapMeThat(box);
            std::cout << "Deposing the gift into the conveyor Belt..." << std::endl;
            conveyorBelt->add(giftPaper);
            std::cout << "Push the bouton and sent it to Santa..." << std::endl;
            xml->createXML();
            xml->sendXML(port);
            conveyorBelt->OUT();
        } else {
            std::cout << "Pushing the IN button and deposing the object on the table..." << std::endl;
            wrapping = elf_leo->put_on_table(elf_leo->pressIn());
            displayTable(elf_leo);
        }
    }
    std::cout << "Table collapsed... I can't work anymore..." << std::endl;
    std::cout << "Thanks for visiting us !" << std::endl;
}

int main(int ac, char **av)
{
    std::string str;

    if (ac < 2) {
        std::cout << "Usage: ./warpMachine [mystical number]" << std::endl;
        return 84;
    }
    str.append(av[1]);
    if (!std::all_of(str.begin(), str.end(), ::isdigit))
        return 84;
    MyUnitests(atoi(str.c_str()));
    return 0;
}