#ifndef _CPLUSPLUS_H
#define _CPLUSPLUS_H

#include <stdlib.h>
#include <stddef.h>

/*
 This is applicable if using virtual inheritance.
 */
__extension__ typedef int __guard __attribute__((mode (__DI__)));

extern "C" int __cxa_guard_acquire(__guard *);
extern "C" void __cxa_guard_release(__guard *);
extern "C" void __cxa_guard_abort(__guard *);

int __cxa_guard_acquire(__guard *g) {
	return !*(char *) (g);
}

void __cxa_guard_release(__guard *g) {
	*(char *) g = 1;
}

void __cxa_guard_abort(__guard *) {
}

/*
 This is applicable if using pure virtual inheritance.
 */
extern "C" void __cxa_pure_virtual(void);

void __cxa_pure_virtual(void) {
}

/*
 Operators required for C++
 */
void* operator new(size_t size);
void operator delete(void* size);

void * operator new(size_t size) {
	return malloc(size);
}

void operator delete(void* ptr) {
	free(ptr);
}

#endif //_CPLUSPLUS_H
