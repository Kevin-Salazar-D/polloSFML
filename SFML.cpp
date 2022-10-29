#include <SFML/Graphics.hpp>
#include "Pollito.h"
using namespace std;

int main()
{
    Pollito pepe(15);
    Pollito pio(90);
    Pollito chiken(100);
    Pollito plumadizimo(2.5);
    Pollito carlo(500);
    chiken.polliPio();

    sf::RenderWindow window(sf::VideoMode(500, 300), "console ");
    sf::CircleShape cabezita(100.f);
    sf::CircleShape ojitoLeft(20.f);
    sf::CircleShape ojitoRight(20.f);
    sf::CircleShape pupilaLeft(7.f);
    sf::CircleShape pupilaRight(7.f);
    sf::CircleShape pico(40,3);
    sf::RectangleShape pelo(sf::Vector2f(50, 10));
 
    sf::CircleShape pelo2(20, 4);
    sf::CircleShape pelo3(20, 4);
    

    cabezita.setFillColor(sf::Color::Yellow);
    cabezita.setPosition(sf::Vector2f{ 145,40 });
    ojitoLeft.setFillColor(sf::Color::Black);
    ojitoLeft.setPosition(sf::Vector2f{ 190,100});
    ojitoRight.setFillColor(sf::Color::Black);
    ojitoRight.setPosition(sf::Vector2f{ 250,100});
    pupilaLeft.setFillColor(sf::Color::White);
    pupilaLeft.setPosition(sf::Vector2f{ 260,110 });
    pupilaRight.setFillColor(sf::Color::White);
    pupilaRight.setPosition(sf::Vector2f{ 205,110 });
    pico.setFillColor(sf::Color::Red);
    pelo.rotate(90);
    pelo.setFillColor(sf::Color::Red);
    pelo.setPosition(sf::Vector2f{250, 20});
    pico.setPosition(sf::Vector2f{ 190,130});
    
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
       
        window.clear();
        window.draw(cabezita);
        window.draw(ojitoLeft);
        window.draw(ojitoRight);
        window.draw(pupilaLeft);
        window.draw(pupilaRight);
        window.draw(pico);
        window.draw(pelo);
        window.display();
    }

    return 0;
}