## Zestaw09
### Zadanie 1
Objaśnij działanie inteligentych wskaźników: shared_ptr, unique_ptr

### Zadanie 2
Sprawdź czy wielkość inteligentnego wskaźnika różni się od wielkości zwykłego wskaźnika.

### Zadanie 3
Zaimplementuj szablon funkcji SongFactory tak aby obiekt 'song' był wskaźnikiem typu unique_ptr dla obiektów klasy Song
##### auto song = SongFactory(L"Micheal Jackson", "Beat It");
oraz przedstaw działanie konstruktora i destruktora obiektu przechowywanego przez wskaźnik we wnęterznu inteligentnego wskaźnika. Wypełnij std::vector<std::unique_ptr<Song>> songs i pokaż , że zakresowa pętla "for" musi wykorzystywać referencje.

### Zadanie 4
Wyjaśnij zastosowanie dwóch możliowych specjalizacji dla szablonu unique_ptr
##### template<class T, class... Args> unique_ptr<T> make_unique(Args&&... args);
##### template<class T> unique_ptr<T> make_unique(std::size_t size);


### Zadanie 5
Pokaż, że używanie wskaźnika typu shared_ptr zapewnia wywołanie destruktora w przypadku znikania ostatniego z nich.

### Zadanie 6
Jakie jest działanie std::weak_ptr? Przedstaw przykład użycia.
