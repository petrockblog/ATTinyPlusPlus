/*
 * LEDController.cpp
 *
 *  Created on: 27.12.2014
 *      Author: florian
 */

#include <LEDController.h>

namespace app {

uint8_t LEDController::offPattern[] = { 1, 0, 1 };
uint8_t LEDController::bootPattern[] = { 2, 1, 10, 0, 10 };
uint8_t LEDController::onPattern[] = { 1, 1, 1 };
uint8_t LEDController::shutdownPattern[] = { 2, 1, 5, 0, 5 };
uint8_t* LEDController::patterns[] = { offPattern, bootPattern, onPattern,
		shutdownPattern };

LEDController::LEDController(hal::LED& led) :
		led(led), patternIndex(0), currentTimeslot(0), currentPair(0) {
	updateCurrentParameters();
}

LEDController::~LEDController() {
} /* namespace app */

void LEDController::update() {
	currentTimeslot += 1;
	if (currentTimeslot >= currentDuration) {
		currentTimeslot = 0;
		currentPair = (currentPair + 1) % currentNumberOfPairs;
		currentValue = patterns[patternIndex][(2 * currentPair) + 1];
		currentDuration = patterns[patternIndex][(2 * currentPair) + 2];
		led.set(this->currentValue == 0 ? hal::LED::LED_LOW : hal::LED::LED_HIGH);
	}
}

void LEDController::setPattern(uint8_t index) {
	if ((index >= 0) && (index < 4) && (index != patternIndex)) {
		patternIndex = index;
		updateCurrentParameters();
	}
}

void LEDController::updateCurrentParameters() {
	this->currentNumberOfPairs = patterns[patternIndex][0];
	this->currentValue = patterns[patternIndex][1];
	this->currentDuration = patterns[patternIndex][2];
	led.set(this->currentValue == 0 ? hal::LED::LED_LOW : hal::LED::LED_HIGH);
}

}
