/*
tipo de variaveis:
int - inteiro
float - ponto flutuante
double - ponto flutuante com dupla precisao
boolean - logica
char - caracter
varchar - string
date - datas

not null - não permite campo nulo
auto_increment - incrementa um numero em cada registro, ideal para o id
primary key - chave primaria
*/

CREATE TABLE tabela (id INT(255) NOT NULL AUTO_INCREMENT PRIMARY KEY, nome VARCHAR(20), sobrenome VARCHAR(50), sexo CHAR, idade INT, nascimento DATE, altura FLOAT, salario DOUBLE);
