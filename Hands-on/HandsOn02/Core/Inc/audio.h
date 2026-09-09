/*
 * audio.h
 *
 *  Created on: Oct 20, 2020
 *      Author: adam berlinger
 */

#ifndef __AUDIO_H_
#define __AUDIO_H_

#include "main.h"
#include <stdio.h>
#include "stm32h735g_discovery_audio.h"

void Audio_Init(void);
void Audio_Play(void);
void Audio_Stop(void);

#endif /* INC_AUDIO_H_ */
