
#include "Controller.h"


Controller::Controller(int num) {
	controllerNum = num - 1;
}

Controller::~Controller() {

}

XINPUT_STATE Controller::getState() {
	ZeroMemory(&controllerState, sizeof(XINPUT_STATE));

	XInputGetState(controllerNum, &controllerState);

	return controllerState;
}

bool Controller::isConnected() {
	ZeroMemory(&controllerState, sizeof(XINPUT_STATE));

	DWORD Result = XInputGetState(controllerNum, &controllerState);

	return Result == ERROR_SUCCESS;
}

void Controller::vibrate(int left, int right) {
	XINPUT_VIBRATION v;

	ZeroMemory(&v, sizeof(XINPUT_VIBRATION));

	v.wLeftMotorSpeed = left;
	v.wRightMotorSpeed = right;

	XInputSetState(controllerNum, &v);
}