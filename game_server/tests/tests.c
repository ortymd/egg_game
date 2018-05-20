#include <func_game_server.h>

void test1(void)
{
	if( start_server() != 0 )
		printf("Failed: start_server()\n");
	else
		printf("Success: start_server()\n");
}
