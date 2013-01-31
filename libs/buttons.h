#ifndef BUTTONS_H_
#define BUTTONS_H_

#include "main.h"

#define KEY_A (1<<0)


uint16_t get_key_press( uint16_t key_mask );
uint16_t get_key_state( uint16_t key_mask );
void sample_buttons(void);
void INIT_Buttons(void);

#endif
