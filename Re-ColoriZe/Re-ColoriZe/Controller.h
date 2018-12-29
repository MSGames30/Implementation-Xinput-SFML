#pragma once

#include <Windows.h>
#include <Xinput.h>


class Controller {

public:
	Controller(int num);
	~Controller();
	XINPUT_STATE getState();
	bool isConnected();
	void vibrate(int left = 0, int right = 0);
private:
	XINPUT_STATE controllerState;
	int controllerNum;
};
