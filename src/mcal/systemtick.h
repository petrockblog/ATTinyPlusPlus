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

  virtual void start() = 0;
  virtual void stop() = 0;

  virtual systick_t getTick() const = 0;
  virtual systick_t getTickPeriod() const = 0;

  virtual ~Systemtick() {
  }

};

} /* namespace mcal */

#endif /* SYSTEMTICK_H_ */
