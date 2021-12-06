int sumar(int x, int y)
{ // inicio bloque
    return x + y;
} // final bloque

int main()
{ // otro bloque

    // múltiples declaraciones
    int valor{};

    { // bloque interior/anidado
        sumar(3, 4);
    } // fin bloque interior/anidado

    return 0;

} // final bloque exterior












/*int sumar(int x, int y)
{ // comienzo bloque
    return x + y;
} // final bloque (no necesita punto y coma)

int main()
{ // comienzo bloque

    // múltiples declaraciones
    int value{}; // esto es inicialización, no un bloque
    sumar(3, 4);

    return 0;

} // final bloque (sin punto y coma)*/