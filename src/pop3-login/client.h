#ifndef CLIENT_H
#define CLIENT_H

#include "network.h"
#include "client-common.h"
#include "auth-client.h"

enum pop3_proxy_state {
	POP3_PROXY_BANNER = 0,
	POP3_PROXY_STARTTLS,
	POP3_PROXY_LOGIN1,
	POP3_PROXY_LOGIN2
};

struct pop3_client {
	struct client common;

	enum pop3_proxy_state proxy_state;

	char *last_user;
	char *apop_challenge;
	struct auth_connect_id auth_id;
};

#endif
