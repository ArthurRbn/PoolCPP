
#include "Sfml.hpp"
#include <string>
#include <iostream>

void Sfml::renderWindow() {
    _window = new sf::RenderWindow(sf::VideoMode(1200, 800), "Rush3");
    _window->setFramerateLimit(60);
}

void Sfml::manageEvents() {
    _event = new sf::Event;
    while (_window->pollEvent(*_event))
    {
        if (_event->type == sf::Event::Closed)
        {
            _window->close();
        }
    }
}

float Sfml::rectgetSizeMem(float height) {
    float top = _mMemory->getMemoryUsed();
    float bottom = _mMemory->getMemoryMax();

    //std::cout << top << std::endl << bottom << std::endl;
    double customheight = top / bottom;
    float resize = height * customheight;
    //std::cout << resize << std::endl;
    return resize;
}

/*float Sfml::rectGpusize(float size) {
    std::vector <std::string> temp = _mCpu->getFrequency();

    float top;
    float bottom = _mMemory->getMemoryMax();

    //std::cout << top << std::endl << bottom << std::endl;
    double customheight = top / bottom;
    std::cout << customheight << std::endl;
    float resize = size * customheight;
    //std::cout << resize << std::endl;
    return resize;
}*/

void Sfml::displayWindow() {

    sf::Font font;
    font.loadFromFile("./SFML/Roboto-Regular.ttf");
    sf::Text tTime(_mDate->getTime(), font, 20);
    sf::Text iTime("Time :", font, 20);
    iTime.setPosition(0, 10);
    tTime.setPosition({150, 10});
    sf::Text tDate(_mDate->getDate(), font, 20);
    sf::Text iDate("Date :", font, 20);
    iDate.setPosition(0, 40);
    tDate.setPosition({150, 40});
    sf::Text tHostname(_mSystem->getHostname(), font, 20);
    sf::Text iHostname("Hostname :", font, 20);
    iHostname.setPosition(0, 70);
    tHostname.setPosition({150, 70});
    sf::Text tUsername(_mSystem->getUsername(), font, 20);
    sf::Text iUsername("Username :", font, 20);
    iUsername.setPosition(0, 100);
    tUsername.setPosition({150, 100});
    sf::Text tPourcent(_mSystem->getPourcentage(), font, 20);
    sf::Text iPourcent("Battery :", font, 20);
    iPourcent.setPosition(0, 130);
    tPourcent.setPosition({150, 130});
    sf::Text tPrettyname(_mSystem->getPrettyName(), font, 20);
    sf::Text iPrettyname("Prettyname :", font, 20);
    iPrettyname.setPosition(0, 160);
    tPrettyname.setPosition({150, 160});
    /*____________________________________________________________________________*/
    sf::Text tMaxmem(std::to_string(_mMemory->getMemoryMax()), font, 20);
    sf::Text iMaxmem("Maxmem :", font, 20);
    iMaxmem.setPosition(75, 310);
    tMaxmem.setPosition({175, 310});
    sf::Text tFreemem(std::to_string(_mMemory->getMemoryFree()), font, 20);
    sf::Text iFreemem("FreeMem :", font, 20);
    iFreemem.setPosition(450, 70);
    tFreemem.setPosition({600, 70});
    sf::Text tUsedmem(std::to_string(_mMemory->getMemoryUsed()), font, 20);
    sf::Text iUsedmem("Usedmem :", font, 20);
    iUsedmem.setPosition(75, 350);
    tUsedmem.setPosition({600, 100});
    /*_____________________________________________________________________________*/

    sf::Text tFrequency(_mCpu->getModelName(), font, 20);
    sf::Text iFrequency("Frequency", font, 20);
    iFrequency.setPosition(600, 310);
    tFrequency.setPosition(475 , 310);

    /*______________________________________________________________________________*/

    float height = rectgetSizeMem( 150);
    sf::RectangleShape rectOne{{150, 20}};
    rectOne.setFillColor(sf::Color::Black);
    rectOne.setOutlineColor(sf::Color::White);
    rectOne.setOutlineThickness(2.f);
    rectOne.setPosition(200, 350);

    sf::RectangleShape rectOneFill{{height, 20}};
    rectOneFill.setFillColor(sf::Color::White);
    rectOneFill.setPosition(200, 350);

    /*______________________________________________________________________________*/

    //float heightGpu = rectGpusize(300);
    sf::RectangleShape rectTwo{{50.f, 300.f}};
    rectTwo.setFillColor(sf::Color::Black);
    rectTwo.setOutlineColor(sf::Color::White);
    rectTwo.setOutlineThickness(2.f);
    rectTwo.setPosition(700, 325);

    sf::RectangleShape rectTwoFill{{50.f, 300.f}};
    rectTwoFill.setFillColor(sf::Color::White);
    rectTwoFill.setPosition(700, 300);

    /*________________________________________________________________________________*/

    sf::RectangleShape rectThree{{350.f, 350.f}};
    rectThree.setFillColor(sf::Color::Transparent);
    rectThree.setOutlineColor(sf::Color::White);
    rectThree.setOutlineThickness(5.f);
    rectThree.setPosition(450, 275);

    sf::RectangleShape rectThreeFill{{50.f, 300.f}};
    rectThreeFill.setFillColor(sf::Color::White);
    rectThreeFill.setPosition(300, 300);

    /*_________________________________________________________________________________*/

    sf::RectangleShape rectFour{{350.f, 100.f}};
    rectFour.setFillColor(sf::Color::Transparent);
    rectFour.setOutlineColor(sf::Color::White);
    rectFour.setOutlineThickness(5.f);
    rectFour.setPosition(50, 295);

    sf::RectangleShape rectFourFill{{50.f, 300.f}};
    rectFourFill.setFillColor(sf::Color::White);
    rectFourFill.setPosition(400, 300);

    /*_____________________________________________________________________________*/

    _window->clear();
    _window->draw(tTime);
    _window->draw(iTime);
    _window->draw(tDate);
    _window->draw(iDate);
    _window->draw(tHostname);
    _window->draw(iHostname);
    _window->draw(tUsername);
    _window->draw(iUsername);
    _window->draw(tPourcent);
    _window->draw(iPourcent);
    _window->draw(tPrettyname);
    _window->draw(iPrettyname);
    _window->draw(tMaxmem);
    _window->draw(iMaxmem);
    _window->draw(tFreemem);
    _window->draw(iFreemem);
    _window->draw(tUsedmem);
    _window->draw(iUsedmem);
    _window->draw(tFrequency);
    //_window->draw(iFrequency);
    _window->draw(rectOne);
    _window->draw(rectOneFill);
    //_window->draw(rectTwo);
    //_window->draw(rectThree);
    _window->draw(rectFour);
    for (auto b = _vUsage.begin(); b != _vUsage.end(); b++) {
        _window->draw(*b);
    }
    _window->display();

}

void Sfml::getInfo() {
    _mMemory->getMemory();
    _mNetwork->refresh();
    _mSystem->refresh();
    _mDate->refresh();
    _mCpu->refresh();
}

void Sfml::GetActivity() {

    float x = 10;
    float y = 300;

    std::vector<float>Ttemp = _mCpu->getUsages();
    sf::Font font;
    font.loadFromFile("./SFML/Roboto-Regular.ttf");

    for (auto i = Ttemp.begin(); i != Ttemp.end(); ++i) {
        sf::Text temp {std::to_string(*i), font, 20};
        temp.setPosition(x, y);
        temp.setFillColor(sf::Color::White);
        if (x < 500)
            x += 350;
        else {
            x = 10;
            y += 350;
        }
        _vUsage.push_back(temp);
    }
}

void Sfml::GetFrequency() {
    int x = 10;
    int y = 300;

    std::vector<std::string>Ttemp = _mCpu->getFrequency();


    sf::Font font;
    font.loadFromFile("./SFML/Roboto-Regular.ttf");

    for (auto i = Ttemp.begin(); i != Ttemp.end(); ++i) {
        sf::Text temp {i->data(), font, 20};
        temp.setPosition(x, y);
        if (x > 500)
            x += 350;
        else {
            x = 10;
            y += 350;
        }
        _vText.push_back(temp);
    }

}



