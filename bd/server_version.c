#include<stdio.h>
#include<stdlib.h>
#include<libpq-fe.h>

void do_exit(PGconn *conn) {
	
	PQfinish(conn);
	exit(1);

}

int main() {
	PGconn *conn = PQconnectdb("user=postgres password=postgres dbname=global");

	if (PQstatus(conn) == CONNECTION_BAD) {
	
		fprintf(stderr, "Conexão falhou: %s\n",PQerrorMessage(conn));
		do_exit(conn);
	}

	int ver = PQserverVersion(conn);
	
	printf("Server version: %d\n", ver);

	PQfinish(conn);

return 0;

}
