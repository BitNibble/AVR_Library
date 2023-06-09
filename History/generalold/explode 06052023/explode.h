/************************************************************************
	EXPLODE
Author: Sergio Santos
	<sergio.salazar.santos@gmail.com>
License: GNU General Public License
Hardware: all
Date: 06052023
Comment:
	Pin Analysis
************************************************************************/
#ifndef _EXPLODE_H_
	#define _EXPLODE_H_

/*** Global Library ***/
#include <inttypes.h>

/*** Global Constant & Macro ***/

/*** Global Variable ***/
typedef struct {
	unsigned int XI;
	unsigned int XF;
}expldparam;

typedef struct {
	unsigned int HL;
	unsigned int LH;
	unsigned int HH;
	unsigned int LL;
}expldsign;

struct expld{
	// Variable
	expldparam par;
	expldsign sig;
	// PROTOTYPES VTABLE
	void (*update)(struct expld *self, uint8_t x); // preamble in (while loop)
};

typedef struct expld EXPLODE;

/*** Global Header ***/
EXPLODE EXPLODEenable(void);

#endif

/***EOF***/

