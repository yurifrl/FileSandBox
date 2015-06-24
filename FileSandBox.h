#include <iostream>
#include <stdio.h>
#include <cstdlib>

//Definições do programa
#define PAUSA						system("pause")
#define LIMPAR_TELA					system("cls")
#define QTDE_MAX_TIPO					2
#define QTDE_MAX_REB					2
#define MAXIMO_CORTE					5
#define CORTE_LA						60
#define	CADASTRAR_TIPOS_OVINOS			'A'
#define CADASTRAR_ORIGENS				'B'
#define CADASTRAR_REBANHOS				'C'
#define CADASTRAR_DESTINOS				'D'
#define COLETA_LA						'E'
#define ABATE							'F'
#define LISTAR_REBANHO_COLETA			'G'
#define LISTAR_REBANHO_ABATE			'H'
#define EXPORTAR_ARQUIVO				'I'
#define EXPORTAR_BAKCUP					'J'
#define IMPORTAR_BACKUP					'K'
#define SAIR							'S'

#ifndef FILESANDBOX_H_INCLUDED
#define FILESANDBOX_H_INCLUDED
#endif // FILESANDBOX_H_INCLUDED

//Estrutura para cadastro dos tipos de ovinos
struct Ovinos
{
	int codigo;
	char nome[10];
};

//Estrutura para cadastro dos tipos de origens
struct Origem
{
	int codigo;
	char nome[10];
};

//Estrutura para cadastro dos rebanhos
struct Rebanhos
{
	int codigo,
	qtdeAnimais,
	corteLa;
	Ovinos raca;
	Origem tipo;
};

//Estrutura para cadastro dos Destinos
struct Destino
{
	int codigo;
	char nome[10];
};
