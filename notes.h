def send():                        
	thread_send(data)
	/* call C send() */              

def recv():                        
	thread_recv(data)
	/* call C recv() */              

def print_field():

def print_player():
                                   


int send(data)
{
	net_fd = get_net_fd();
	send(data, net_fd);
}

int recv(&data)
{
	net_fd = get_net_fd();
	recv(&data, net_fd);
}
