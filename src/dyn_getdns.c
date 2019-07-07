#include "config.h"

#include <cache/cache.h>
#include <string.h>	// miniobj.h

#include "vcc_dynamic_if.h"
#include "dyn_getdns.h"

const char *
dyn_getdns_strerror(getdns_return_t ra)
{
#define GETDNS_RETURN(r, s)			\
	if (ra == GETDNS_RETURN_ ## r) return(s);
#include "tbl/getdns_return.h"
	return ("INVALID");
}
