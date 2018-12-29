//Installer le windows 10 SDK (10.0.17763.132) pour avoir le header Xinput
//inclure xinput.lib au proprietes du projet 

#include <SFML/Graphics.hpp>
#include "Controller.h"
#include <iostream>
#include <conio.h>
#include <vector>

#define VIBRATION_DELAY 0.2f

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
	window.setFramerateLimit(60);

	Controller* controller = new Controller(1);
	sf::Clock vibrationTimer;
	vibrationTimer.restart();

	bool isVibrating = false;

	int lpower = 10000;
	int rpower = 10000;

	std::cout << "A vibration courte des 2 cotes" << std::endl;
	std::cout << "Y vibration continue droite" << std::endl;
	std::cout << "X vibration continue gauche" << std::endl;
	std::cout << "B couper vibration" << std::endl;
	std::cout << "START quitter" << std::endl;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		
		if (controller->isConnected())
		{
			//std::cout << "connected" << std::endl;
			if (controller->getState().Gamepad.wButtons & XINPUT_GAMEPAD_A) {
				controller->vibrate(lpower, rpower);
				isVibrating = true;
				vibrationTimer.restart();
			}
			if (controller->getState().Gamepad.wButtons & XINPUT_GAMEPAD_B) {
				controller->vibrate();
			}
			if (controller->getState().Gamepad.wButtons & XINPUT_GAMEPAD_Y) {
				controller->vibrate(0, rpower);
			}
			if (controller->getState().Gamepad.wButtons & XINPUT_GAMEPAD_X) {
				controller->vibrate(lpower, 0);
			}
			if (controller->getState().Gamepad.wButtons & XINPUT_GAMEPAD_START) {
				window.close();
			}
		}
		else
		{
			//std::cout << "not connected" << std::endl;
		}

		if (isVibrating)
		{
			if (vibrationTimer.getElapsedTime().asSeconds() > VIBRATION_DELAY)
			{
				controller->vibrate();
				isVibrating = false;
			}
		}

		window.display();
	}

	return 0;
}