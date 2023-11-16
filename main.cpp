#include <SFML/Graphics.hpp>

int main(){
	sf::RenderWindow window(sf::VideoMode(444, 444), "Hello SFML");

	sf::CircleShape greenCirc;
	greenCirc.setFillColor(sf::Color::Green);
	greenCirc.setRadius(15);
	float positionX = 0.0;
	float positionY = 0.0;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		if (event.type == sf::Event::MouseMoved) {
			positionX = event.mouseMove.x;
			positionY = event.mouseMove.y;
		}

		if (event.type == sf::Event::MouseButtonPressed) {
			greenCirc.setPosition(positionX, positionY);
		}
			

		
		window.clear();
		window.draw(greenCirc);
		window.display();
	}

	

	return 0;
}






