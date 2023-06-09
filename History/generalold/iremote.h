/*
 * IREMOTE.h
 *
 *  Created: 10/07/2016 01:06:18
 *  Author: S�rgio Santos
 *  Excellent
 */ 
#ifndef _IREMOTE_H_
	#define _IREMOTE_H_

/*
** constant and macro
*/
/***CONFIG***/
#define IR_INPORT PIND
#define IR_PIN 2
/***TIMER***/
#define IR_F_DIV 32 // 32 at 8Mhz
#define IR_CTC_VALUE 237 // 235 236 237 238 239
/***DATA***/
#define IR_BYTE 5
#define IR_BIT 7 // DO NOT CHANGE
/*
** variable
*/
struct iremote{
	// prototype pointers
	volatile uint8_t (*key)(uint8_t byte);
	void (*start)(void);
	void (*stop)(void);
	volatile uint8_t (*decode)(void);
	void (*clear)(void);
};
typedef struct iremote IR;
/*
** procedure and function header
*/
IR IRenable(void);

#endif
/***EOF***/
