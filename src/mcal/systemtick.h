/*
 * systemtick.h
 *
 *  Created on: 25.10.2014
 *      Author: florian
 */

#ifndef SYSTEMTICK_H_
#define SYSTEMTICK_H_

#include "lib/STL/cstdint.h"

namespace mcal {

class Systemtick {

 public:
  typedef uint32_t systick_t;

  systick_t tickDifferenceToNow(systick_t tickCount) const {
    const systick_t currentTick = getTick();
    if (currentTick >= tickCount) {
      return currentTick - tickCount;
    } else {  // overflow occurred
      return 0xFFFFFFFF - tickCount + currentTick;
    }
  };

  virtual void start() = 0;
  virtual void stop() = 0;

  virtual systick_t getTick() const = 0;
  virtual systick_t getTickPeriod() const = 0;

  virtual ~Systemtick() {
  }

};

} /* namespace mcal */

#endif /* SYSTEMTICK_H_ */
