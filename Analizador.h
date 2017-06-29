#pragma once
#include <cstdlib>
#include <string>
#include <stack>
#include <vector>

using namespace std;

class CAnalizador
{
public:
	char *expresion;
	string OperadoresAritmeticos[4] = { "+", "-", "*", "/" };
	string OperadoresRelacionales[3] = { "=", ">", "<"};
	int precedencias[4] = { 1, 1, 2, 2 };
public:
	CAnalizador();
	~CAnalizador();
	bool EsOperadorAritmetico(string iD);
	bool EsOperadorRelacional(string iD);
	int precedente(string iD);
	bool esPar(char abre, char cierra);
	bool parentesis_Balanceados(string exp);
	bool noPresentaSignosDeAgrupacion(string exp);
	char *getExpresion();
	void setExpresion(char *val);
};

