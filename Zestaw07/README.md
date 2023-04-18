## Zestaw07
#### Zadanie 1
Napisz szablon funkcji lub klasy wyliczający funkcję silnia.

#### Zadanie 2
Zaimplementuj szablon POW<N, M> obliczający $N^M$.

#### Zadanie 3
Wymyśl i zaimplementuj jako metaprogram szybszy algorytm funkcji pow(x).

#### Zadanie 4
Napisz szablon generujący pierwsze N wyrazów rozwinięcia funkcji sin(x).

#### Zadanie 5
Napisz szablon generujący funkcję implementującą iloczyn skalarny dwóch wektorów.
##### template<size_t N> double inner(double *x, double *y);

#### Zadanie 6
Rozszerz powyższy szablon tak, aby również typ elementów wektora był parametrem szablonu:
##### template<size_t N, typename T> T dot(T *x, T *y);

