/*
 * register_access.h
 *
 *  Created on: 12.10.2014
 *      Author: florian
 */

#ifndef REGISTER_ACCESS_H_
#define REGISTER_ACCESS_H_

namespace mcal {

namespace reg {

template<typename register_address_type, typename register_value_type,
		const register_address_type address>
struct register_access {

	static void reg_set(const register_value_type value =
			static_cast<register_value_type>(0)) {
		*reinterpret_cast<volatile register_value_type*>(address) = value;
	}

	static void reg_and(const register_value_type value =
			static_cast<register_value_type>(0)) {
		*reinterpret_cast<volatile register_value_type*>(address) &= value;
	}
	static void reg_or(const register_value_type value =
			static_cast<register_value_type>(0)) {
		*reinterpret_cast<volatile register_value_type*>(address) |= value;
	}

	static void reg_not(const register_value_type value =
			static_cast<register_value_type>(0)) {
		*reinterpret_cast<volatile register_value_type*>(address) &=
				register_value_type(~value);
	}

	static register_value_type reg_get() {
		return *reinterpret_cast<volatile register_value_type*>(address);
	}

	template<const register_value_type mask_value>
	static void reg_msk(const register_value_type value =
			static_cast<register_value_type>(0)) {
		*reinterpret_cast<volatile register_value_type*>(address) =
				register_value_type(
						register_value_type(
								reg_get() & register_value_type(~mask_value))
								| register_value_type(value & mask_value));
	}

	static void bit_set(const register_value_type value =
			static_cast<register_value_type>(0)) {
		*reinterpret_cast<volatile register_value_type*>(address) |=
				static_cast<register_value_type>(1UL << value);
	}

	static void bit_clr(const register_value_type value =
			static_cast<register_value_type>(0)) {
		*reinterpret_cast<volatile register_value_type*>(address) &=
				static_cast<register_value_type>(~static_cast<register_value_type>(1UL
						<< value));
	}

	static void bit_not(const register_value_type value =
			static_cast<register_value_type>(0)) {
		*reinterpret_cast<volatile register_value_type*>(address) ^=
				static_cast<register_value_type>(1UL << value);
	}

	static bool bit_get(const register_value_type value =
			static_cast<register_value_type>(0)) {
		return (static_cast<volatile register_value_type>(reg_get()
				& static_cast<register_value_type>(1UL << value))
				!= static_cast<register_value_type>(0U));
	}
};

}

}

#endif /* REGISTER_ACCESS_H_ */
