#include <iostream>
int main()
{ // bloque 1, nivel de anidamiento 1
    std::cout << "Escribe un entero: ";
    int valor{};
    std::cin >> valor;

    if (valor > 0)
    { // bloque 2, nivel de anidamiento 2
        if ((valor % 2) == 0)
        { // bloque 3, nivel de anidamiento 3
            std::cout << valor << " es positivo y par\n";
        }
        else
        { // block 4, also nesting level 3
            std::cout << valor << " es positivo e impar\n";
        }
    }

    return 0;
}



















/*#include <iostream>

int main()
{ // comienzo del bloque externo
    std::cout << "Escribe un entero: ";
    int valor{};
    std::cin >> valor;

    if (valor >= 0)
    { // comienzo de bloque anidado
        std::cout << valor << " es un entero positivo (o cero)\n";
        std::cout << "El doble de este número es " << valor * 2 << '\n';
    } // final de bloque anidado
    else
    { // comienzo de otro bloque anidado
        std::cout << valor << " es un entero negativo\n";
        std::cout << "El positivo de este número es " << -valor << '\n';
    } // fin de otro bloque anidado

    return 0;
} // fin del bloque externo*/



















/*int sumar(int x, int y)
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

} // final bloque exterior*/












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