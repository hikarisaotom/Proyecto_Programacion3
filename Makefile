# build
main.out: main.o Ataque.o Item.o Personaje.o Brute.o Mago.o Assassin.o Normal.o Especial.o  DataPersonaje.o
	g++ main.o Ataque.o Item.o Personaje.o Brute.o Mago.o Assassin.o Normal.o Especial.o  DataPersonaje.o -o EXE

# Ataque
Ataque.o: Ataque.h Ataque.cpp
	g++ -c Ataque.cpp

# Item
Item.o: Item.h Item.cpp
	g++ -c Item.cpp

# Personaje
Personaje.o: Personaje.h Normal.h Especial.h Ataque.h Personaje.cpp
	g++ -c Personaje.cpp

# Brute
Brute.o: Brute.h Personaje.h Brute.cpp
	g++ -c Brute.cpp

# Mago
Mago.o: Mago.h Personaje.h Mago.cpp
	g++ -c Mago.cpp

# Assassin
Assassin.o: Assassin.h Personaje.h Assassin.cpp
	g++ -c Assassin.cpp

# Ataque normal
Normal.o: Normal.h Ataque.h Normal.cpp
	g++ -c Normal.cpp

# Ataque especial
Especial.o: Especial.h Ataque.h Especial.cpp
	g++ -c Especial.cpp

# mainMago.cpp Brute.cpp Personaje.cpp Assassin.cpp DataPersonaje.cppMago.cpp Brute.cpp Personaje.cpp Assassin.cpp DataPersonaje.cpp
main.o: main.cpp Ataque.h Item.h Personaje.h Brute.h Mago.h Assassin.h Normal.h Especial.h DataPersonaje.h
	g++ -c main.cpp

#datapersonaje
DataPersonaje.o: Mago.cpp Brute.cpp Personaje.cpp Assassin.cpp DataPersonaje.h Mago.h Brute.h  Brute.cpp Personaje.cpp Assassin.cpp DataPersonaje.cpp Personaje.h Assassin.h DataPersonaje.h 
	g++ -c DataPersonaje.cpp

# clean
clean:
	rm *.o main.out

