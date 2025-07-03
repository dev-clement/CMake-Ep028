#include <iostream>
#include <SFML/Graphics.hpp>

int main() {
    // Create the window
    sf::RenderWindow window{sf::VideoMode({1920, 1080}), "I would rather drop the mic !"};
    window.setFramerateLimit(144);

    while (window.isOpen()) {
        // Check all the window's event that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event)) {
            // "close" requested event: We close the window
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        // Clear the window with a color
        window.clear(sf::Color(142, 125, 0));

        // Draw everything here
        // window.draw(...);

        // End the current frame.
        window.display();
    }

    //return EXIT_SUCCESS;
}