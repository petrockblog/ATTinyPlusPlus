///*
// * port_pin.h
// *
// *  Created on: 02.10.2014
// *      Author: florian
// */
//
//#ifndef PORT_PIN_H_
//#define PORT_PIN_H_
//
//#include <cstdint.h>
//#include <mcal.h>
//
//namespace mcal {
//
//template<typename addr_type, typename reg_type, const addr_type port,
//		const reg_type bpos>
//class port_pin {
//public:
//	static void set_direction_output() {
//		port_dir_type::bit_set();
//	}
//
//	static void set_direction_input() {
//		port_dir_type::bit_clr();
//	}
//
//	static void set_pin_high() {
//		port_pin_type::bit_set();
//	}
//
//	static void set_pin_low() {
//		port_pin_type::bit_clr();
//	}
//
//	static bool read_input_value() {
//		return port_inp_type::bit_get();
//	}
//
//	static void toggle() {
//		port_pin_type::bit_not();
//	}
//
//private:
//
//	static constexpr addr_type pdir = port - 1U;
//	static constexpr addr_type pinp = port - 2U;
//
//	typedef reg::reg_access<addr_type, reg_type, port, bpos> port_pin_type;
//	typedef reg::reg_access<addr_type, reg_type, pdir, bpos> port_dir_type;
//	typedef reg::reg_access<addr_type, reg_type, pinp, bpos> port_inp_type;
//
//};
//
//}
//
//#endif /* PORT_PIN_H_ */
