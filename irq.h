#ifndef irq_h
#define irq_h

#include "stdbool.h"
#include "buttons.h"
#include "pit.h"
#include "ledz.h"
#include "slcd.h"
#include "buttons.h"
#include "buzzer.h"
#include "TSI.h"
#include "delay.h"
#include "tpm.h"

extern volatile int global_LDVAL;
extern volatile bool COUNTER_STATE;

void PORTC_PORTD_IRQHandler(void);	//Button IRQ Handler
void PIT_IRQHandler(void);					//Periodic Interrupt Timer IRQ Handler

void update(void);					//Function that recalculates LDVAL setting based on BPM and Metrum
void metrumchg(void);				//Function that handles change of metrum up to maxmetrum!
void sequence(bool);


#endif
