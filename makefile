STD=-std=c++11

MAP=map/Sector.o map/Tile.o map/World.o
MAPNAMES=sector tile world

GAME=game/Game.o game/Player.o
GAMENAMES=game player

all: ares

ares: $(MAPNAMES) $(GAMENAMES)
	g++ $(STD) Ares.cpp $(MAP) $(GAME) -o ares

sector: map/Sector.cpp tile
	g++ -c $(STD) map/Sector.cpp -o map/Sector.o

tile: map/Tile.cpp
	g++ -c $(STD) map/Tile.cpp -o map/Tile.o

world: map/World.cpp sector
	g++ -c $(STD) map/World.cpp -o map/World.o

game: game/Game.cpp player world
	g++ -c $(STD) game/Game.cpp -o game/Game.o

player: game/Player.cpp
	g++ -c $(STD) game/Player.cpp -o game/Player.o

clean:
	rm ares */*.o
