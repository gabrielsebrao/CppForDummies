int fatorial (int numero) {
    int resultado = 1;

    for(int i = numero; i > 1; i--) {
        resultado *= i;
    }

    return resultado;
}
