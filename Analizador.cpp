#include "Analizador.h"

CAnalizador::CAnalizador()
{	
}


CAnalizador::~CAnalizador()
{
}
bool CAnalizador::EsOperadorAritmetico(const string iD){
	for (int i = 0; i < 4; i++)
		if (OperadoresAritmeticos[i] == iD)
			return true;
	return false;
}
bool CAnalizador::EsOperadorRelacional(const string iD) {
	for (int i = 0; i < 3; i++)
		if (OperadoresRelacionales[i] == iD)
			return true;
	return false;
}
int CAnalizador::precedente(const string iD){
	for (int i = 0; i < 4; i++)
		if (OperadoresAritmeticos[i] == iD)
			return precedencias[i];
	return -1;
}
bool CAnalizador::esPar(char abre, char cierra){
	if (abre == '(' && cierra == ')') return true;
	else if (abre == '{' && cierra == '}') return true;
	else if (abre == '[' && cierra == ']') return true;
	return false;
}
bool CAnalizador::parentesis_Balanceados(string exp){
	stack<char> pila;
	for (int i = 0; i < exp.size(); i++)
	{
		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			pila.push(exp[i]);
		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if (pila.empty() || !esPar(pila.top(), exp[i]))
				return false;
			else
				pila.pop();
		}
	}
	return pila.empty() ? true : false;
}
bool CAnalizador::noPresentaSignosDeAgrupacion(string exp){
	stack<char>pila;
	for (int i = 0; i < exp.size(); i++) {
		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[' || exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
			pila.push(exp[i]);
	}
	return pila.empty() ? true : false;
}
char *CAnalizador::getExpresion() { return expresion; }
void CAnalizador::setExpresion(char *val) {expresion = val;}