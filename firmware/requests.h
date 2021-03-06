/* Name: requests.h
 * Project: custom-class, a basic USB example
 * Author: Christian Starkjohann
 * Creation Date: 2008-04-09
 * Tabsize: 4
 * Copyright: (c) 2008 by OBJECTIVE DEVELOPMENT Software GmbH
 * License: GNU GPL v2 (see License.txt), GNU GPL v3 or proprietary (CommercialLicense.txt)
 * This Revision: $Id$
 */

/* This header is shared between the firmware and the host software. It
 * defines the USB request numbers (and optionally data types) used to
 * communicate between the host and the device.
 */

#ifndef __REQUESTS_H_INCLUDED__
#define __REQUESTS_H_INCLUDED__
enum {
	CUSTOM_RQ_LED=0,
	SPI_TRANS,
	SPI_BURST,
	CUSTOM_RXTXRX,
	CUSTOM_INTERVALS,
	CUSTOM_RESPONDER,
	
};

#define SPI_CS_BEFORE  0x01
#define SPI_CS_AFTER   0x02

#define RXTXRX_IDLE 0
#define RXTXRX_RX1  1
#define RXTXRX_TX1  2
#define RXTXRX_RX2  3
#define RXTXRX_FIN  4
#define RXTXRX_DONE 128


#endif /* __REQUESTS_H_INCLUDED__ */
