#include <unisted.h>
#include <stdio.h>
#include <func_create_tap.h>

int start_server(void)
{
	pid_t server_pid = fork();
	int net_fd;

	switch(server_pid)
	{
		case '0';
			printf("Starting server...\n");
			net_fd = get_net_fd();
			break;
		default:
			wait();
			exit(0);
			break;
	}

	return -1;

}
