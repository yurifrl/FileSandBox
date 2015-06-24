// ProjetoB2.cpp : Defines the entry point for the console application.
//Controle de Rebanhos

#include "FileSandBox.h"
using namespace std;

//Função para cadastrar tipos de Ovinos
void CadastrarOvinos(Ovinos cadastro[QTDE_MAX_TIPO]) {
	int i;							//índice genérico
	Ovinos tipo;
	cout << "\nVoce devera cadastrar " << QTDE_MAX_TIPO << " tipos de Ovinos!";
	//looping para preenchimento do vetor de Ovinos
	for (i = 0; i < QTDE_MAX_TIPO; i++) {
		cout << "\n=======================================================================";
		cout << "\n*Tipo " << i + 1
		<< "\n*Digite Codigo do Ovino: ";
		cin >> tipo.codigo;
		cout << "\n*Digite nome da raca: ";
		cin.ignore(1, EOF);
		cin.getline(tipo.nome, sizeof (tipo.nome));
		cadastro[i] = tipo;
		cout << "\n=======================================================================";
		cout << "\n\n";
	}//for
	cout << "\nTodos os " << QTDE_MAX_TIPO << " tipos de Ovinos foram cadastrados com sucesso!\n";
	PAUSA;
}//Cadastro de Ovinos

//Função de Listagem de Tipos de Ovinos
void ListarOvinos(Ovinos cadastro[QTDE_MAX_TIPO]) {
	int i;								//indice genérico
	cout << "Listagem dos Ovinos Cadastrados";
	for (i = 0; i < QTDE_MAX_TIPO; i++) {
		cout << "\n=======================================================================";
		cout << "\nTipo " << i + 1
		<< "\n*Nome Raca: " << cadastro[i].nome
		<< "\n*Codigo: " << cadastro[i].codigo;
		cout << "\n=======================================================================";
		cout << "\n\n";
	}//for
	PAUSA;
}

//Função de Cadastro de Origens
void CadastroOrigens(Origem cadastro[QTDE_MAX_TIPO]) {
	int i;							//índice genérico
	Origem tipo;
	cout << "\nVoce devera cadastrar " << QTDE_MAX_TIPO << " Origens!";
	//looping para preenchimento do vetor de Ovinos
	for (i = 0; i < QTDE_MAX_TIPO; i++) {
		cout << "\n=======================================================================";
		cout << "\nOrigem " << i + 1
		<< "\n*Digite Codigo da Origem: ";
		cin >> tipo.codigo;
		cout << "\n*Digite nome da Origem: ";
		cin.ignore(1, EOF);
		cin.getline(tipo.nome, sizeof (tipo.nome));
		cadastro[i] = tipo;
		cout << "\n=======================================================================";
		cout << "\n\n";
	}//for
	cout << "\nTodos as " << QTDE_MAX_TIPO << " Origens foram cadastrados com sucesso!\n";
	PAUSA;
}

//Função de Listagem das Origens
void ListarOrigens(Origem cadastro[QTDE_MAX_TIPO]) {
	int i;								//indice genérico
	cout << "Listagem das Origens Cadastradas";
	for (i = 0; i < QTDE_MAX_TIPO; i++) {
		cout << "\n=======================================================================";
		cout << "\nOrigem " << i + 1
		<< "\n*Nome: " << cadastro[i].nome
		<< "\n*Codigo: " << cadastro[i].codigo;
		cout << "\n=======================================================================";
		cout << "\n\n";
	}//for
	PAUSA;
}

//Função de Cadastro dos Rebanhos
void CadastroRebanhos(Ovinos tipo[QTDE_MAX_TIPO], Rebanhos cadastro[QTDE_MAX_REB], Origem tipo1[QTDE_MAX_TIPO]) {
	int i, j,						    //índices genérico
		opcaoOvino;						//recebe opcao do ovino
		Rebanhos rebanho;
	//Looping de cadastro dos Rebanhos
		cout << "\nVoce devera cadastrar " << QTDE_MAX_REB << " rebanhos";
		for (i = 0; i < QTDE_MAX_REB; i++) {
			cout << "\n=======================================================================";
			cout << "\nRebanho mes " << i + 1;
			cout << "\nDigite  codigo do Rebanho: ";
			cin >> rebanho.codigo;
			cout << "\nEscolha a raca dos ovinos.";
			for (j = 0; j < QTDE_MAX_TIPO; j++) {
				cout << "\n" << j + 1 << "\t" << tipo[j].nome;
		}//looping de escolha do tipo do ovino
		cout << "\nDigite opcao desejada: ";
		cin >> opcaoOvino;
		rebanho.raca.codigo = tipo[opcaoOvino - 1].codigo;
		//*********rebanho.raca.nome = tipo[j - 1].nome;
		cout << "\nEscolha a origem do Rebanhos.";
		for (j = 0; j < QTDE_MAX_TIPO; j++) {
			cout << "\n" << j + 1 << "\t" << tipo1[j].nome;
		}//looping de escolha do tipo do ovino
		cout << "\nDigite opcao desejada: ";
		cin >> opcaoOvino;
		rebanho.tipo.codigo = tipo[opcaoOvino - 1].codigo;
		cout << "\nDigite quantidade de animais do Rebanho: ";
		cin >> rebanho.qtdeAnimais;
		cout << "\n=======================================================================";
		cout << "\n\n";
		rebanho.corteLa = 0;
		cadastro[i] = rebanho;
	}//for
	cout << "\nTodos os " << QTDE_MAX_REB << " Rebanhos foram cadastrados com sucesso!\n";
	PAUSA;
}//Cadastro Rebanhos

//Função de Listagem de Rebanhos
void ListarRebanhos(Rebanhos lista[QTDE_MAX_REB]) {
	int i;										//índice genérico
	//looping de listagem dos Rebanhos
	for (i = 0; i < QTDE_MAX_REB; i++) {
		cout << "\n=======================================================================";
		cout << "\nRebanho mes " << i + 1
		<< "\n*Codigo: " << lista[i].codigo
		<< "\n*Raca Codigo: " << lista[i].raca.codigo
		<< "\n*Origem Codigo: " << lista[i].tipo.codigo
		<< "\n*Quantiadade de Animais: " << lista[i].qtdeAnimais;
		cout << "\n=======================================================================";
		cout << "\n\n";
	}
	PAUSA;
}// Listar Rebanhos

//Função de cadastro dos destinos
void CadastroDestinos(Destino cadastro[QTDE_MAX_TIPO]) {
	int i;							//índice genérico
	Destino tipo;
	cout << "\nVoce devera cadastrar " << QTDE_MAX_TIPO << " Destinos!";
	//looping para preenchimento do vetor de Destinos
	for (i = 0; i < QTDE_MAX_TIPO; i++) {
		cout << "\n=======================================================================";
		cout << "\nDestino " << i + 1
		<< "\n*Digite Codigo do Destino: ";
		cin >> tipo.codigo;
		cout << "\n*Digite nome do Destino: ";
		cin.ignore(1, EOF);
		cin.getline(tipo.nome, sizeof (tipo.nome));
		cadastro[i] = tipo;
		cout << "\n=======================================================================";
		cout << "\n\n";
	}//for
	cout << "\nTodos os " << QTDE_MAX_TIPO << " Destinos foram cadastrados com sucesso!\n";
	PAUSA;

}//Cadastro de Destinos

//Função de Listagem dos Destinos
void ListarDestinos(Destino lista[QTDE_MAX_TIPO]) {
	int i;								//indice genérico
	cout << "Listagem dos Destinos Cadastrados";
	for (i = 0; i < QTDE_MAX_TIPO; i++) {
		cout << "\n=======================================================================";
		cout << "\nDestino " << i + 1
		<< "\n*Nome: " << lista[i].nome
		<< "\n*Codigo: " << lista[i].codigo;
		cout << "\n=======================================================================";
		cout << "\n\n";
	}//for
	PAUSA;
}

//Função para inicilalizar vetor de corte de lã
void InicializarCorteLa(int cortLa[CORTE_LA][2]) {
	int i;							//índice genérico
	for (i = 0; i < CORTE_LA; i++) {
		cortLa[i][0] = 0;
		cortLa[i][1] = 0;
	}
}//Inicializar Vetor de Corte de lã

//Função de corte de lã
void CortarLa(Rebanhos *ptrTipo1, int *ptrCorte, Destino *ptrDestino) {
	int i,										//índice genérico
		opcao;										//recebe opcao do operador
	//mostrar rebanhos
		cout << "\n=======================================================================";
		cout << "\nRebanhos:";
		for (i = 0; i < QTDE_MAX_TIPO; i++) {
			cout << "\n" << i + 1 << "\t-\t" << ptrTipo1[i].codigo;
		}
		cout << "\nDigite rebanho que passara por corte: ";
		cin >> opcao;
		if (ptrTipo1[opcao - 1].corteLa == MAXIMO_CORTE) {
			cout << "O Rebanho " << ptrTipo1[opcao - 1].codigo << " ja passou por " << MAXIMO_CORTE << "cortes e devera ir para abate!";
			cout << "\n=======================================================================\n";
			PAUSA;
		}
		else {
			ptrCorte[0] = ptrTipo1[opcao - 1].codigo;
			ptrTipo1[opcao - 1].corteLa = ptrTipo1[opcao - 1].corteLa + 1;
			cout << "\nDestinos:";
			for (i = 0; i < QTDE_MAX_TIPO; i++) {
				cout << "\n" << i + 1 << "\t-\t" << ptrDestino[i].codigo;
			}
			cout << "\nDigite destino escolhido: ";
			cin >> opcao;
			ptrCorte[1] = ptrDestino[opcao - 1].codigo;
			cout << "\nRebanho " << ptrCorte[0] << " passou por corte de la!";
			cout << "\n=======================================================================\n";
			PAUSA;
		}
	}

//Função que inicializa o vetor de abate
	void InicializarAbate(int Abate[QTDE_MAX_REB][2]) {
		int i;
		for (i = 0; i < QTDE_MAX_REB; i++) {
			Abate[i][0] = 0;
			Abate[i][1] = 0;
		}
	}

//Função que faz abate de cada rebanho quando seu maximo de corte de lã for igual a 5
	void FazerAbate(Rebanhos *ptrRebanhos, Destino *ptrDestinos, int *ptrAbate) {
	int i,										//índice genérico
		opcao;										//recebe opcao do operador
	//mostrar rebanhos
		cout << "\n=======================================================================";
		cout << "\nRebanhos:";
		for (i = 0; i < QTDE_MAX_TIPO; i++) {
			cout << "\n" << i + 1 << "\t-\t" << ptrRebanhos[i].codigo;
		}
		cout << "\nDigite rebanho que passara por corte: ";
		cin >> opcao;
	//passou por todos os cortes de lã?
		if (ptrRebanhos[opcao - 1].corteLa < MAXIMO_CORTE) {//Ainda não!!!
		cout << "\nO Rebanho " << ptrRebanhos[opcao - 1].codigo << " ainda nao passou por todos os cortes de la!";
		cout << "\n=======================================================================\n";
		PAUSA;
	}
	else {//Sim!!!
		ptrAbate[0] = ptrRebanhos[opcao - 1].codigo;
		//mostrar destinos
		cout << "\nDestinos:";
		for (i = 0; i < QTDE_MAX_TIPO; i++) {
			cout << "\n" << i + 1 << "\t-\t" << ptrDestinos[i].codigo;
		}
		cout << "\nDigite destino escolhido: ";
		cin >> opcao;
		ptrAbate[1] = ptrDestinos[opcao - 1].codigo;
		cout << "\nRebanho " << ptrAbate[0] << " sera mandado para abate!";
		cout << "\n=======================================================================\n";
		PAUSA;
	}
}

//Função que lista os Rebanhos e a somatória da coleta de lã
void ListarColetaLa(Rebanhos *ptrRebanhos) {
	int i,
		total = 0;							//somatória de cortes
	//looping para listagem de coleta de la
		for (i = 0; i < QTDE_MAX_REB; i++) {
			cout << "\n=======================================================================";
			cout << "\nRebanho do mes " << i + 1
			<< "\nCodigo: " << ptrRebanhos[i].codigo
			<< "\nQuantidade de corte: " << ptrRebanhos[i].corteLa << "\n\n";
			total = total + ptrRebanhos[i].corteLa;
			cout << "\n=======================================================================\n";
		}
		cout << "\nTotal de cortes: " << total << "\n";
		PAUSA;
	}

//Função que lista os Rebanhos que foram para abate
	void ListarAbate(Rebanhos *ptrRebanho) {
		int i;
	//looping para mostrar Rebanhos que irão para abate
		cout << "\n=======================================================================";
		for (i = 0; i < QTDE_MAX_REB; i++) {
			if (ptrRebanho[i].corteLa == 5) {

				cout << "\nRebanho" << i + 1
				<< "\nCodigo: " << ptrRebanho[i].codigo << "\n\n";
			}
		}
		cout << "\n=======================================================================";
		cout << "\nEstes sao os rebanhos que serao mandados para Abate!";
	}

//Função para Inicializar códigos  dos vetores
	void InicializarVetores(Ovinos vetorOvinos[QTDE_MAX_TIPO], Origem vetorOrigens[QTDE_MAX_TIPO], Rebanhos vetorRebanhos[QTDE_MAX_REB], Destino vetorDestinos[QTDE_MAX_TIPO]) {
	int i;								//índice gnérico

	//inicializar códigos tipos ovinos, origens e destinos
	for (i = 0; i < QTDE_MAX_TIPO; i++) {
		vetorOvinos[i].codigo = 0;
		vetorOrigens[i].codigo = 0;
		vetorDestinos[i].codigo = 0;
	}

	//inicializar códigos dos rebanhos
	for (i = 0; i < QTDE_MAX_REB; i++) {
		vetorRebanhos[i].codigo = 0;
	}
}

//Função para exportar dados para arquivo
void ExportarDados(Ovinos *ptrOvinos, Origem *ptrOrigem, Rebanhos *ptrRebanhos, Destino *ptrDestino, int *ptrCorteLa,
	int *ptrAbate) {

}//Exportar dados
int main() {
	char cOpcao;								//recebe opção do operador
	Ovinos tipoOvinos[QTDE_MAX_TIPO];			//vetor que receberá todos os tipos de ovinos cadastrados pelo operador
	Origem tipoOrigens[QTDE_MAX_TIPO];			//vetor que receberá todos os tipos de origens cadastrados pelo operador
	Rebanhos tipoRebanho[QTDE_MAX_REB];			//vetor que receberá todos os rebanhos cadastrados pelo operador
	Destino tipoDestino[QTDE_MAX_TIPO];			//vetor que receberá todos os destinos cadastrados pelo operador
	int corteLa[CORTE_LA][2],					//matriz que receberá codigos de corte de la
		abate[QTDE_MAX_REB][2];					//matriz que receberá códigos de abate de rebanhos
	Rebanhos *ptrRebanho;						//ponteiro que recebe vetor de rebanho
	Origem *ptrOrigem;							//ponteiro que recebe vetor de origem
	Destino *ptrDestino;						//ponteiro que recebe vetor de destinos
	int *ptrCortela,							//ponteiro que recebe vetor de corte de la
		*ptrAbate;								//ponteiro que recebe vetor de abate
		FILE *OvinoA, *OrigemB, *RebanhoC, *DestinosD, *CorteLaE, *AbateF;
	//Inicializar vetores
		InicializarVetores(tipoOvinos, tipoOrigens, tipoRebanho, tipoDestino);
		InicializarCorteLa(corteLa);
		InicializarAbate(abate);

	//Menu
		while (true) {
			cout << "======================================================================="
			<< "\nControle de Rebanhos"
			<< "\n*" << CADASTRAR_TIPOS_OVINOS << "\t-\tCadastrar tipos de Ovinos"
			<< "\n*" << CADASTRAR_ORIGENS << "\t-\tCadastrar Origens"
			<< "\n*" << CADASTRAR_REBANHOS << "\t-\tCadastrar Rebanhos"
			<< "\n*" << CADASTRAR_DESTINOS << "\t-\tCadastrar Destinos"
			<< "\n*" << COLETA_LA << "\t-\tFazer coleta de la"
			<< "\n*" << ABATE << "\t-\tFazer abate"
			<< "\n*" << LISTAR_REBANHO_COLETA << "\t-\tListar Rebanhos e coleta de la"
			<< "\n*" << LISTAR_REBANHO_ABATE << "\t-\tListar Rebanhos com o abate ja incluido"
			<< "\n*" << EXPORTAR_ARQUIVO << "\t-\tExportacao dos dados para arquivo"
			<< "\n*" << EXPORTAR_BAKCUP << "\t-\tExporacao do backup"
			<< "\n*" << IMPORTAR_BACKUP << "\t-\tImportacao do backup"
			<< "\n*" << SAIR << "\t-\tSair"
			<< "\n======================================================================="
			<< "\nDigite opcao desejada:";
			cin >> cOpcao;
			cOpcao = toupper(cOpcao);
			switch (cOpcao) {
				case CADASTRAR_TIPOS_OVINOS: {
					LIMPAR_TELA;
					cout << "* Opcao escolhida: Cadastrar tipos de Ovinos";
				  //verificar se todos os tipos foram cadastrados
					if (tipoOvinos[QTDE_MAX_TIPO - 1].codigo == 0) {
						CadastrarOvinos(tipoOvinos);
						LIMPAR_TELA;
						ListarOvinos(tipoOvinos);
						LIMPAR_TELA;
						break;
					}
					else {
						cout << "\nVoce ja cadastrou todos os tipos de Ovinos!\n";
						PAUSA;
						LIMPAR_TELA;
						break;
					}

		}//Cadastro de ovinos
		case CADASTRAR_ORIGENS: {
			LIMPAR_TELA;
			cout << "* Opcao escolhida: Cadastrar Origens";
				  //verificar se todas as origens já foram cadastradas
			if (tipoOrigens[QTDE_MAX_TIPO - 1].codigo == 0) {//nenhuma origem foi cadastrada
				  	CadastroOrigens(tipoOrigens);
				  	ptrOrigem = &tipoOrigens[0];
				  	LIMPAR_TELA;
				  	ListarOrigens(tipoOrigens);
				  	LIMPAR_TELA;
				  	break;
				  }
				  else {//todas as origens foram cadastradas!
				  	cout << "\nVoce ja cadastrou todas as Origens!\n";
				  	PAUSA;
				  	LIMPAR_TELA;
				  	break;
				  }
		}//Cadastro de Origens
		case CADASTRAR_REBANHOS: {
			LIMPAR_TELA;
			cout << "* Opcao escolhida: Cadastrar Rebanhos";
				  //verificar se todas as origens já foram cadastradas
			if (tipoRebanho[QTDE_MAX_REB- 1].codigo == 0) {//nenhum rebanho foi cadastrado
				  	CadastroRebanhos(tipoOvinos, tipoRebanho, tipoOrigens);
				  	LIMPAR_TELA;
				  	ptrRebanho = &tipoRebanho[0];
				  	ListarRebanhos(tipoRebanho);
				  	LIMPAR_TELA;
				  	break;
				  }
				  else {
					  //todos os Rebanhos foram cadastrados!
				  	cout << "\nVoce ja cadastrou todos os Rebanhos!\n";
				  	PAUSA;
				  	LIMPAR_TELA;
				  	break;
				  }
		}//Cadastro de Rebanhos
		case CADASTRAR_DESTINOS: {
			LIMPAR_TELA;
			cout << "* Opcao escolhida: Cadastrar Destinos";
			if (tipoDestino[QTDE_MAX_TIPO - 1].codigo == 0) {//nenhum destino foi cadastrado
				  	CadastroDestinos(tipoDestino);
				  	ptrDestino = &tipoDestino[0];
				  	LIMPAR_TELA;
				  	ListarDestinos(tipoDestino);
				  	LIMPAR_TELA;
				  	break;
				  }
				  else {
					  //todos os Destinos foram cadastrados!
				  	cout << "\nVoce ja cadastrou todos os Destinos!\n";
				  	PAUSA;
				  	LIMPAR_TELA;
				  	break;
				  }
		}//Cadastro de Destinos
		case COLETA_LA: {
			int i = 0;
			LIMPAR_TELA;
			cout << "* Opcao escolhida: Fazer corte de la";
				  //verificar se todos os cortes possíveis foram feitos
			if (corteLa[CORTE_LA - 1][0] == 0) {//ainda resta ao menos um espaço
					  //encontrar posição vazia
				  	while (corteLa[i][0] != 0) {
				  		i++;
				  	}

				  	ptrCortela = &corteLa[i][0];
				  	CortarLa(ptrRebanho, ptrCortela, ptrDestino);
				  	LIMPAR_TELA;
				  	break;
				  }
				  else {//todos os cortes possíveis já foram feitos
				  	cout << "\nTodos os cortes possíveis de lã já foram feitos!!!\n";
				  	PAUSA;
				  	break;
				  }
		}//Controle de coleta de la
		case ABATE: {
			int i = 0;
			LIMPAR_TELA;
			cout << "* Opcao escolhida: Fazer abate";
			// verificar se todos os rebanhos já foram para o abate
			// if (abate[QTDE_MAX_REB - 1][0] != 0) { //todos os rebanhos já foram para abate
			// 	  cout << "\nTodos os Rebanhos já foram para abate!\n";
			// 	  PAUSA;
			//   break;
			// }
			// else { // ao menos um rebanho não passou por abate
			//encontrar posição vazia
			while (abate[i][0] != 0) {
				i++;
			}
			ptrAbate = &abate[i][0];
			FazerAbate(ptrRebanho, ptrDestino, ptrAbate);
			LIMPAR_TELA;
			break;
				  //}
		}//Controle de Abate
		case LISTAR_REBANHO_COLETA: {
			LIMPAR_TELA;
			cout << "* Opcao escolhida: Listar Rebanhos e Somatoria da coleta de la";
			ListarColetaLa(ptrRebanho);
			LIMPAR_TELA;
			break;
		}//Listagem de rebanhos e coleta de lã
		case LISTAR_REBANHO_ABATE: {
			LIMPAR_TELA;
			cout << "* Opcao escolhida: Listar rebanhos com o abate ja concluido";
			ListarAbate(ptrRebanho);
			LIMPAR_TELA;
			break;
		}//Listagem de rebanhos com o abate já concluído
		case EXPORTAR_ARQUIVO: {
			LIMPAR_TELA;
			cout << "* Opcao escolhida: Exportar dados para arquivo";
								 //abrir arquivo texto Ovinos
			OvinoA = fopen("ovinos.txt", "w+b");

			if (OvinoA == NULL) {
				cout << "\nNão foi possível abrir o arquivo";
				break;
			}

			fwrite(tipoOvinos, sizeof(Ovinos), QTDE_MAX_TIPO, OvinoA);
			fclose(OvinoA);
			//chamar função de exportação de dados

			LIMPAR_TELA;
			break;
		}//Exportaçao dos dados para arquivo
		case EXPORTAR_BAKCUP: {
			LIMPAR_TELA;
			cout << "* Opcao escolhida: Exportar dados para bakcup";
			//chamar função de exportação de dados para bakcup
		}//Exportação do backup
		case IMPORTAR_BACKUP: {
            OvinoA = fopen("ovinos.txt", "rb");

            for(int i = 0; i < QTDE_MAX_TIPO; i++) {
                fread(&tipoOvinos[i], sizeof(tipoOvinos[i]),1,OvinoA);
            }

            fclose(OvinoA);

		}//Importação do backup
		case SAIR: {

		}//Sair
	}
	}//menu

	return 0;
}

