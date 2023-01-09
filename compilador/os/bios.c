/**
 * Realiza o teste de partida antes de carregar o SO.
 */
void checarComponentes(void) {
	lcd(20); // Checa HD
	input();
	lcd(21); // Checa memória de instruções
	input();
	lcd(22); // Checa memória de dados
	input();
	lcd(23); // Inicia o Sistema Operacional
	input();
}

/**
 * Transfere as instruções referentes ao SO do HD para a memória de instruções.
 */
void carregarKernel(void) {
	int instrucao;
	int index;
	int HALT;

	HALT = 63; // Opcode da instrução HALT

	index = 0; // O SO DEVE SEMPRE INICIAR DO ZERO
	instrucao = ldk(index);
	while (instrucao >> 26 != HALT) {
		sim(instrucao, index);
		index += 1;
		instrucao = ldk(index);
	}
	sim(instrucao, index);
}


void main(void) {		
	checarComponentes();
	carregarKernel();
}
