/**
 * @file    panel_ili7807d.h
 * @brief   ILI7807D (AML055-FHD-056A) panel driver header
 */

#ifndef PANEL_ILI7807D_H
#define PANEL_ILI7807D_H

#include "main.h"

void ILI7807D_Init(void);
void ILI7807D_DisplayOn(void);
void ILI7807D_DisplayOff(void);
void ILI7807D_SleepIn(void);

#endif /* PANEL_ILI7807D_H */
