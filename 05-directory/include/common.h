#ifndef _COMMON_H_
#define _COMMON_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
	PRINT_ERR = 0,
	PRINT_WARN = 1,
	PRINT_DBG = 2,
	PRINT_ALL = 3,
} print_level_t;

void print(print_level_t level, const char *format, ...);
#define DBG(level, ...)	print(level, ##__VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif // _COMMON_H_
