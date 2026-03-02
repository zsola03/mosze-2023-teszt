#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // HIBA: NELEMENTS nincs deklaralva, helyesen N_ELEMENTS lenne
    int *b = new int[NELEMENTS];

    // HIBA: rossz idezojel (char helyett string kell)
    // HIBA: hianyzik a pontosvesszo
    std::cout << '1-100 ertekek duplazasa'

    // HIBA: hianyos for ciklus (nincs feltetel es noveles)
    for (int i = 0;)
    {
        b[i] = i * 2;
    }

    // HIBA: hibas ciklusfeltetel (i mindig 0 -> nem fut le)
    for (int i = 0; i; i++)
    {
        // HIBA: hianyzik a kiirt ertek es a pontosvesszo
        std::cout << "Ertek:"
    }

    std::cout << "Atlag szamitasa: " << std::endl;

    // HIBA: nincs inicializalva
    int atlag;

    // HIBA: vesszo van pontosvesszo helyett
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // HIBA: hianyzik pontosvesszo
        atlag += b[i]
    }

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    // HIBA: memoria nincs felszabaditva (delete[] hianyzik)

    return 0;
}