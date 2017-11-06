#ifndef _DUALCORE_h
#define _DUALCORE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

typedef void(*tarefa_core)();
static tarefa_core tarefa_core_0;
static tarefa_core tarefa_core_1;

class DualCoreClass
{
	TaskHandle_t tarefa_core_0_;
	TaskHandle_t tarefa_core_1_;
public:
	DualCoreClass(tarefa_core t0, tarefa_core t1);
};
#endif