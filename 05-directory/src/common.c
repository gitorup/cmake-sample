#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "common.h"

#define MAX_DBGMSG_SIZE		1024

static print_level_t default_level = PRINT_WARN;

void print(print_level_t level, const char *format, ...)
{
	char dbgmsg[MAX_DBGMSG_SIZE] = {0};
	va_list ap;

	if (level > default_level)
		return ;

	memset(&ap, 0, sizeof(va_list));
	va_start(ap, format);
	vsnprintf(dbgmsg, MAX_DBGMSG_SIZE, format, ap);
	va_end(ap);

	printf("%s", dbgmsg);
}
