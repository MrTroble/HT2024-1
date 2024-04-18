#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

struct _HitContext {
	const char* const start;
	size_t distance;
};
typedef struct _HitContext HitContext;

struct _TextContext {
	size_t values;
	// Aenderungen erlaubt
};
typedef struct _TextContext TextContext;

// Returns 0 iff everything is valid
int initText(const char* const string, TextContext* context) {
	return 0;
}

// Returns 0 on error, the amount of hits otherwise
size_t searchFor(TextContext* context, const char* const query, HitContext** output) {
	return 0;
}
