#include "Implementation.h"
#include <time.h>
#include <ctype.h>

const char TESTTEXT[] = "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet."
"Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi.Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.																																																																																																																													 "
"Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat.Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi.																																																																																																																																	 "
"Nam liber tempor cum soluta nobis eleifend option congue nihil imperdiet doming id quod mazim placerat facer possim assum.Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat.																																																																																																																																		 "
"Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis																																																																																																																																																																																																				 "
"At vero eos et accusam et justo duo dolores et ea rebum.Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.At vero eos et accusam et justo duo dolores et ea rebum.Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.Lorem ipsum dolor sit amet, consetetur sadipscing elitr, At accusam aliquyam diam diam dolore dolores duo eirmod eos erat, et nonumy sed tempor et et invidunt justo labore Stet clita ea et gubergren, kasd magna no rebum.sanctus sea sed takimata ut vero voluptua.est Lorem ipsum dolor sit amet.Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat.														 "
"Consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.At vero eos et accusam et justo duo dolores et ea rebum.Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.At vero eos et accusam et justo duo dolores et ea rebum.Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.At vero eos et accusam et justo duo dolores et ea rebum.Stet clita kasd gubergren, no sea takimata sanctus.																								 "
"Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.At vero eos et accusam et justo duo dolores et ea rebum.Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.At vero eos et accusam et justo duo dolores et ea rebum.Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.At vero eos et accusam et justo duo dolores et ea rebum.Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.									 "
"Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi.Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.																																																																																																																													 "
"Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat.Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi.																																																																																																																																	 "
"Nam liber tempor cum soluta nobis eleifend option congue nihil imperdiet doming id quod mazim placerat facer possim assum.Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo";

#define FAIL_TEST(msg, aExpr, bExpr) \
printf(msg " test failed in line %d\nwhere %s = %d \nand %s = %d\n", __LINE__, #aExpr, (int)(aExpr), #bExpr, (int)(bExpr));\
failCounter++;

#define TEST_EQ(aExpr, bExpr) { if((aExpr) != (bExpr)) { \
FAIL_TEST("Equal", aExpr, bExpr)\
}}

#define TEST_NE(aExpr, bExpr) { if((aExpr) == (bExpr)) { \
FAIL_TEST("Not equal", aExpr, bExpr)\
}}

size_t failCounter = 0;

void testSearch(TextContext* context, const char* search, const char* find, size_t amount, size_t distance) {
	HitContext* contextArray = NULL;
	const size_t searchResult = searchFor(context, search, &contextArray);
	TEST_EQ(searchResult, amount);
	TEST_NE(contextArray, NULL);

	if (contextArray != NULL) {
		const size_t length = strlen(find);
		for (size_t i = 0; i < amount; i++)
		{
			TEST_EQ(contextArray[i].distance, distance);
			int comparable = strncmp(contextArray[i].start, find, length);
			TEST_EQ(comparable, 0);
		}
	}

	freeHitContext(&context, contextArray);
}

void test() {
	TextContext context;
	const int initResult = initText(TESTTEXT, &context);
	TEST_EQ(initResult, 0);

	HitContext* contextArray = NULL;
	size_t searchResult = searchFor(&context, "", &contextArray);
	TEST_EQ(searchResult, 0);
	TEST_EQ(contextArray, NULL);

	testSearch(&context, "Consetetur", "Consetetur", 1, 0);

	testSearch(&context, "Consetutur", "Consetetur", 1, 1);

	testSearch(&context, "Consetutpr", "Consetetur", 1, 2);

	testSearch(&context, "consetetur", "consetetur", 4, 0);
}

const char* findNextAndGet(const char* startOffset, size_t* output) {
	while (isalnum(*startOffset)) startOffset++;
	while (!isalnum(*startOffset)) startOffset++;
	const char* value = startOffset;
	while (isalnum(*startOffset)) startOffset++;
	*output = (size_t)(startOffset - value);
	return value;
}

void benchmark() {
	TextContext context;
	
	const time_t initStart = time(NULL);
	const int initResult = initText(TESTTEXT, &context);
	const double initDiff = difftime(time(NULL), initStart);
	
	char* values[1000];
	const size_t valueAmount = sizeof(values) / sizeof(const char*);
	for (size_t i = 0; i < valueAmount; i++)
	{
		size_t offset = (size_t)abs(rand() % (sizeof(TESTTEXT) - 20));
		const char* startOffset = TESTTEXT + offset;
		size_t amount = 0;
		const char* next = findNextAndGet(startOffset, &amount);
		if (amount == 0) {
			printf("FAIL TO FIND!\n");
			exit(-1);
		}
		values[i] = malloc(amount + 1);
		if (values[i] == NULL) {
			printf("FAIL TO ALLOC!\n");
			exit(-1);
		}
		strncpy(values[i], next, amount);
		values[i][amount] = 0;
	}

	double allTimes = 0;
	for (size_t i = 0; i < 10000; i++)
	{
		size_t offset = (size_t)abs(rand() % valueAmount);
		HitContext* contextArray = NULL;
		const time_t diffStart = time(NULL);
		const size_t searchResult = searchFor(&context, values[offset], &contextArray);
		const double searchDiff = difftime(time(NULL), diffStart);
		allTimes += searchDiff;
	}

	for (size_t i = 0; i < valueAmount / 4; i++) {
		size_t offset = (size_t)abs(rand() % valueAmount);
		char* string = values[offset];
		const size_t amount = strlen(string);
		size_t inString = (size_t)abs(rand() % amount);
		if (string[inString] != 'a' && string[inString] != 'A' && string[inString] != '0')
			string[inString]--;
		else
			string[inString] = 'z';
	}

	for (size_t i = 0; i < 10000; i++)
	{
		size_t offset = (size_t)abs(rand() % valueAmount);
		HitContext* contextArray = NULL;
		const time_t diffStart = time(NULL);
		const size_t searchResult = searchFor(&context, values[offset], &contextArray);
		const double searchDiff = difftime(time(NULL), diffStart);
		allTimes += searchDiff;
	}

	printf("Init: %e, Seach: %e\n\r", initDiff, allTimes);

	for (size_t i = 0; i < valueAmount; i++) {
		free(values[i]);
	}
}

int main(int argc, const char** argv) {
	if (argc < 2) {
		printf("ERROR: specify -test or -benchmark");
		return -1;
	}
	if (strcmp(argv[1], "-test") == 0) {
		test();
		return failCounter > 0 ? -1:0;
	}
	else if (strcmp(argv[1], "-benchmark") == 0) {
		benchmark();
		return 0;
	}
	printf("ERROR: specify -test or -benchmark");
	return -1;
}
