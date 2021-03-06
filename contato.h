#ifndef CONTATO_H_INCLUDED
#define CONTATO_H_INCLUDED

    //(I) ESTRUTURA TIPO CONTATO.
    typedef struct contato Contato;
    //(II) FUN플O ALOCA DINAMICAMENTE UM TIPO 'CONTATO'
    Contato* contato_cria(char* nome, char* telefone, char* email);
    //(III) FUN플O QUE IMPRIME DADOS DE UM 'CONTATO'
    void contato_imprime(Contato* contato);
    //(IV) FUN플O QUE EDITA UM TIPO 'CONTATO'
    void contato_edita(Contato* contato, char* nome, char* telefone, char* email);
    // (V) FUN플O QUE RETORNA UM 'NOME' DE UMA ESTRUTURA 'CONTATO'
    char* contato_nome(Contato* contato);
    // (VI) FUN플O QUE RETORNA UM 'TELEFONE' DE UMA ESTRUTURA 'CONTATO'
    char* contato_telefone(Contato* contato);
    // (VII) FUN플O QUE RETORNA UM 'EMAIL' DE UMA ESTRUTURA 'CONTATO'
    char* contato_email(Contato* contato);
    // (VIII) FUN플O PARA LIERA UM ESPE�O NA MEMORIA DO TIPO 'CONTATO'
    void contato_libera(Contato* contato);
    //FIM TAD 'CONTATO.H'


#endif // CONTATO_H_INCLUDED
