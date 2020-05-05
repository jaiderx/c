#include<stdio.h>
#include<stdlib.h>
#include<libpq-fe.h>

void sair(PGconn *conn){
	PQfinish(conn);
	exit(1);
}

int main(){
	PGconn *conn = PQconnectdb("user=pgdb password=pgdb dbname=global");
	if(PQstatus(conn) == CONNECTION_BAD){
		fprintf(stderr,"Conexao falhou: %s\n",
			PQerrorMessage(conn));
		sair(conn);

	}

	PGresult *res = PQexec(conn,"SELECT * FROM CONTATOS");
	
	if(PQresultStatus(res) != PGRES_TUPLES_OK){

		printf("Sem dados a retornar\n");
		PQclear(res);
		sair(conn);
	}

	int linhas = PQntuples(res);
	
	for(int i=0; i<linhas; i++){
		printf("|%s |%s |%s |%s |\n",PQgetvalue(res,i,0),
			PQgetvalue(res,i,1), PQgetvalue(res,i,2)
		//	,PQgetvalue(res,i,3), PQgetvalue(res,i,4),
		//	PQgetvalue(res,i,5), PQgetvalue(res,i,6)
			);
	}

	PQclear(res);
	PQfinish(conn);

return 0;

}
