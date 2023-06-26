/*
    Função tem haver com verbos.
    Uma função é um bloco de código que executa alguma operação. Opcionalmente,
    uma função pode definir parâmetros de entrada que permitem que os chamadores
    passem argumentos para a função. Uma função também pode retornar um valor
    como saída. As funções são úteis para encapsular operações comuns em um só
    bloco reutilizável, idealmente com um nome que descreve de modo claro o que a
    função faz. A função a seguir aceita dois inteiros de um chamador e retorna sua
    soma; a e b são parâmetros do tipo int.
*/
#include <iostream>

using namespace std;

void sayHello()
{
    cout << "Hello!" << endl;
}

void sayHelloTo(string name)
{
    cout << "Hello " << name << "!" << endl;
}

string returnHi()
{
    return "Hi!";
}

string returnHiTo(string name)
{
    return "Hi " + name;
}

int main()
{
    sayHello();
    sayHelloTo("Alfredo");

    string result = returnHi();
    cout << result << endl;

    cout << returnHi() << endl;
    cout << returnHiTo("Alfredo") << endl;
    cout << returnHiTo("Joaquim") << endl;

    return 0;
}