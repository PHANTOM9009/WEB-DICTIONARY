/*
#include <TGUI/TGUI.hpp>
#include<vector>
#include<iostream>
#include<thread>
using namespace std;
main()
{
    sf::RenderWindow window(sf::VideoMode(1980,1080),"checking");
    tgui::GuiSFML gui(window);
    auto button=tgui::Button::create();
    button->setSize(400,60);
    button->setPosition(10,10);

        sf::Texture tex;
        tex.loadFromFile("search.png");
        button->getRenderer()->setTexture(tex);
        gui.add(button);

        auto button2=tgui::Button::create();
        button2->setSize(100,100);
        button2->setPosition(500,500);
        gui.add(button2);
     while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();

            }
            if(button->isMouseOnWidget(static_cast<sf::Vector2f>(sf::Mouse::getPosition(window))))
            {
                cout<<"\n on it";
            }
            if(button2->isMouseOnWidget(static_cast<sf::Vector2f>(sf::Mouse::getPosition(window))))
            {
                cout<<"\n 2 on it";
            }
            gui.handleEvent(event);
        }
        window.clear(sf::Color::Black);
        gui.draw();
        window.display();
    }
}
*/
