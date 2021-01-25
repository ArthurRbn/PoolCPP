//
// Created by nicolass on 16/01/2021.
//

#include <iostream>
#include "../PapaXmasTable.hpp"
#include "../ConveyorBelt.hpp"
#include "../Box.hpp"
#include "../GiftPaper.hpp"

void MyUnitests() {
    ITable *table = createTable();
    IConveyorBelt *conveyorBelt = createConveyorBelt();
    int gift_sent = 0;

    Box *box = nullptr;
    Toy *toy = nullptr;
    GiftPaper *giftPaper = nullptr;
    bool wrapping = true;
    while (wrapping && gift_sent != 2) {
        if (table->check()) {
            box = dynamic_cast<Box*>(table->takeBox());
            toy = dynamic_cast<Toy*>(table->takeToy());
            giftPaper = dynamic_cast<GiftPaper*>(table->takeGiftPaper());
            box->wrapMeThat(toy);
            giftPaper->wrapMeThat(box);
            conveyorBelt->add(giftPaper);
            conveyorBelt->OUT();
            gift_sent += 1;
        } else {
            wrapping = table->add(conveyorBelt->IN());
        }
    }
    if (gift_sent == 2) {
        std::cout << "No more gift to send!" << std::endl;
    }
}

int main() {
    MyUnitests();

    return 0;
}