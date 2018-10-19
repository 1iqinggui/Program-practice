/* include unph */
/* Our own header. Tabs are set for 4 spaces, not 8 */

#ifndef __unp_h
#define __unp_h

#include <sys/socket.h>		/* basic socket definitions */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef HAVE_STRINGS_H
# include <strings.h>		/* for convenience */
#endif


/* Miscellaneous constants */
#define MAXLINE		4096	/* max text line length */
#define BUFFSIZE 	8196	/* buffer size for reads and writes */

/* Define some port number that can be used for our example */
#define SERV_PORT	9877		/* TCP and UDP */
#define SERV_PORT_STR	"9877"	/* TCP and UDP */

/* Following shortens all the typecasts of pointer arguments: */
#define SA struct sockaddr



#define min(a, b)	((a) < (b) ? (a) : (b))
#define max(a, b)	((a) > (b) ? (a) : (b))



void dg_cli(FILE *, int, const SA *, socklen_t);
void dg_echo(int, SA *, socklen_t);
























#endif
