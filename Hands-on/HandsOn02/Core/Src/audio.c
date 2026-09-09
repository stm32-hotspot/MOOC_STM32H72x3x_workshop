/**
  ******************************************************************************
  * @file    Src/audio.c
  * @author  MCD Application Team
  * @brief   This example code shows how to use the audio feature in the
  *          stm32h735G-dk_audio driver
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "audio.h"
#include "audio_16khz_wav.h"

static int is_playing = 0;

void Audio_Init(){
	BSP_AUDIO_Init_t AudioInit;

	AudioInit.BitsPerSample = AUDIO_RESOLUTION_16B;
	AudioInit.Device = AUDIO_OUT_DEVICE_HEADPHONE;
	AudioInit.ChannelsNbr = 2;
	AudioInit.SampleRate = AUDIO_FREQUENCY_16K;
	AudioInit.Volume = 50;

	BSP_AUDIO_OUT_Init(0, &AudioInit);
	is_playing = 0;
}

void Audio_Play(){
	if(is_playing == 0){
		uint32_t num_samples = (134384UL - 44) / 2;
		/* This is the maximum limit for DMA */
		if(num_samples > 65534) num_samples = 65534;
		BSP_AUDIO_OUT_Play(0, (uint8_t*)audio_wav, num_samples * 2);
		is_playing = 1;
	}
}

void Audio_Stop(){
	if(is_playing == 1){
		BSP_AUDIO_OUT_Stop(0);
		is_playing = 0;
	}
}

extern SAI_HandleTypeDef haudio_out_sai;

void AUDIO_OUT_SAIx_DMAx_IRQHandler(){
	HAL_DMA_IRQHandler(haudio_out_sai.hdmatx);
}
