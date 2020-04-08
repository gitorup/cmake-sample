#include <stdio.h>
#include "common.h"

int main(int argc, char *argv[])
{
	DBG(PRINT_DBG, "This is a debug test code!\n");
	DBG(PRINT_WARN, "This is a warning test code!\n");
	DBG(PRINT_ERR, "This is a error test code!\n");
	return 0;
}
