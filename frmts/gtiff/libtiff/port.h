/*
 * This file is hand hacked to use GDAL portability definitions.  It is
 * normally autogenerated by libtiff's configure.
 *
 */

#ifndef _PORT_
#define _PORT_ 1

#ifdef __cplusplus
extern "C" {
#endif

#include "cpl_config.h"

#include <sys/types.h>

#define HOST_FILLORDER FILLORDER_LSB2MSB

#ifdef WORDS_BIGENDIAN    
#define HOST_BIGENDIAN	1
#else    
#define HOST_BIGENDIAN	0
#endif
    
#define HAVE_MMAP 0
    
#include <stdio.h>
#ifdef HAVE_UNISTD    
#  include <unistd.h>
#endif
#include <string.h>
#include <stdlib.h>

#ifdef HAVE_FCNTL_H    
#  include <fcntl.h>
#endif
    
typedef double dblparam_t;
#define INLINE

#define GLOBALDATA(TYPE,NAME)	extern TYPE NAME
#ifdef __cplusplus
}
#endif

#endif
