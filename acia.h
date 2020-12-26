/* vim: set noexpandtab ai ts=4 sw=4 tw=4: */
/* acia.h -- emulation of 6850 ACIA
   Copyright (C) 2012 Gordon JC Pearce

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

#ifndef __ACIA_H
#define __ACIA_H

#include "bus.h"

#define ACIA_CR 0
#define ACIA_SR 0
#define ACIA_TDR 1
#define ACIA_RDR 1

#define SR_RDRF  0x01
#define SR_TDRE  0x02
#define SR_IRQ  0x80


#define MIDISerial Serial1

void    acia_init();
void    acia_clk_CB();
void    acia_run(CPU6809* cpu);
uint8_t acia_rreg(uint8_t reg);
void    acia_wreg(uint8_t reg, uint8_t val);




#endif
