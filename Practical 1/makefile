ofiles = Main.o Zombie.o Soldier.o Sniper.o Berserker.o Medic.o Engineer.o SniperFactory.o BerserkerFactory.o MedicFactory.o EngineerFactory.o
gpp_o = g++ -g -c -std=c++11 -static

Main: $(ofiles)
	g++ -std=c++11 -static $(ofiles) Main

Main.o: Main.cpp Zombie.h Soldier.h Sniper.h Berserker.h Medic.h Engineer.h SniperFactory.h BerserkerFactory.h MedicFactory.h EngineerFactory.h
	$(gpp_o) Main.cpp

Zombie.o: Zombie.cpp Zombie.h
	$(gpp_o) Zombie.cpp

Soldier.o: Soldier.cpp Soldier.h Zombie.h
	$(gpp_o) Soldier.cpp

Sniper.o: Sniper.cpp Sniper.h Soldier.h Zombie.h
	$(gpp_o) Sniper.cpp

Berserker.o: Berserker.cpp Berserker.h Soldier.h Zombie.h
	$(gpp_o) Berserker.cpp

Medic.o: Medic.cpp Medic.h Soldier.h Zombie.h
	$(gpp_o) Medic.cpp

Engineer.o: Engineer.cpp Engineer.h Soldier.h Zombie.h
	$(gpp_o) Engineer.cpp

SoldierFactory.o: SoldierFactory.cpp SoldierFactory.h Soldier.h 
	$(gpp_o) SoldierFactory.cpp

SniperFactory.o: SniperFactory.cpp SniperFactory.h SoldierFactory.h Sniper.h
	$(gpp_o) SniperFactory.cpp

BerserkerFactory.o: BerserkerFactory.cpp BerserkerFactory.h SoldierFactory.h Berserker.h
	$(gpp_o) BerserkerFactory.cpp

MedicFactory.o: MedicFactory.cpp MedicFactory.h SoldierFactory.h Medic.h
	$(gpp_o) MedicFactory.cpp

EngineerFactory.o: EngineerFactory.cpp EngineerFactory.h SoldierFactory.h Engineer.h
	$(gpp_o) EngineerFactory.cpp

run: Main
	./Main

clean:
	rm *.o Main
