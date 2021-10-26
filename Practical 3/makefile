ofiles = Main.o Section.o Track.o Decorator.o FlagObserver.o
gpp_o = g++ -g -c -std=c++11 -static

Main: $(ofiles)
	g++ -g -std=c++11 -static $(ofiles) -o Main

Main.o: Main.cpp Section.h Track.h Decorator.h FlagObserver.h
	$(gpp_o) Main.cpp

Section.o: Section.cpp Section.h Observer.h
	$(gpp_o) Section.cpp

Straight.o: Straight.cpp Straight.h Section.h
	$(gpp_o) Straight.cpp

Chicane.o: Chicane.cpp Chicane.h Section.h
	$(gpp_o) Chicane.cpp

Turn.o: Turn.cpp Turn.h Section.h
	$(gpp_o) Turn.cpp

Track.o: Track.cpp Track.h Section.h
	$(gpp_o) Track.cpp

Decorator.o: Decorator.cpp Decorator.h Section.h
	$(gpp_o) Decorator.cpp

Barrier.o: Barrier.cpp Barrier.h Decorator.h
	$(gpp_o) Barrier.cpp

GravelTrap.o: GravelTrap.cpp GravelTrap.h Decorator.h
	$(gpp_o) GravelTrap.cpp

Pitstop.o: Pitstop.cpp Pitstop.h Decorator.h
	$(gpp_o) Pitstop.cpp

Startline.o: Startline.cpp Startline.h Decorator.h
	$(gpp_o) Startline.cpp

Observer.o: Observer.cpp Observer.h
	$(gpp_o) Observer.cpp

FlagObserver.o: FlagObserver.cpp FlagObserver.h Observer.h
	$(gpp_o) FlagObserver.cpp

run: Main
	./Main

clean:
	rm *.o Main
