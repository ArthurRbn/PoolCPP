//
// Created by derazeloic on 1/23/21.
//

#ifndef B_CPP_300_STG_3_1_CPPRUSH3_LOIC_DERAZE_SFML_HPP
#define B_CPP_300_STG_3_1_CPPRUSH3_LOIC_DERAZE_SFML_HPP

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "../ModuleHandling/IMonitorModule.hpp"
#include "../ModuleHandling/System.hpp"
#include "../ModuleHandling/CPU.hpp"
#include "../ModuleHandling/Memory.hpp"
#include "../ModuleHandling/Network.hpp"
#include "../ModuleHandling/Date.hpp"

class Sfml {
public:
    Sfml();

    virtual ~Sfml();

    void mainWindow();

    void renderWindow();

    void manageEvents();

    void displayWindow();

    sf::RenderWindow *getWindow() const;

    sf::Event *getEvent() const;

    void getInfo();

    void initText();

    float rectgetSizeMem(float );

    float rectgetSizeSwap(float );

    float rectGpusize(float);

    void GetActivity();


private:

    sf::RenderWindow *_window;
    sf::Event *_event;
    ModuleSystem *_mSystem;
    ModuleMemory *_mMemory;
    Network *_mNetwork;
    Date *_mDate;
    CPU *_mCpu;
    sf::Text *_tDate;
    sf::Text *_tTime;
    std::vector<sf::Text> _vText;
    std::vector<sf::RectangleShape> *_vRect;
    std::vector<sf::Text> _vUsage;
    std::string *_Frequency;
    void GetFrequency();


};


#endif //B_CPP_300_STG_3_1_CPPRUSH3_LOIC_DERAZE_SFML_HPP
