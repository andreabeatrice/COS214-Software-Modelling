ofiles = Main.o Merchandise.o  SoccerBall.o Shirt.o ChelseaSoccerBall.o ArsenalSoccerBall.o LiverpoolSoccerBall.o ChelseaShirt.o ArsenalShirt.o LiverpoolShirt.o ChelseaFactory.o ArsenalFactory.o LiverpoolFactory.o SoccerPlayer.o NoCardState.o YellowCardState.o RedCardState.o AttackPlayStyle.o DefendPlayStyle.o PossessionPlayStyle.o
gpp_o = g++ -g -c -std=c++11 -static

Main: $(ofiles)
	g++ -g -std=c++11 -static $(ofiles) -o Main

Main.o: Main.cpp Merchandise.h SoccerBall.h Shirt.h ChelseaSoccerBall.h ArsenalSoccerBall.h LiverpoolSoccerBall.h ChelseaShirt.h ArsenalShirt.h LiverpoolShirt.h ChelseaFactory.h ArsenalFactory.h LiverpoolFactory.h SoccerPlayer.h NoCardState.h YellowCardState.h RedCardState.h AttackPlayStyle.h DefendPlayStyle.h PossessionPlayStyle.h
	$(gpp_o) Main.cpp

Merchandise.o: Merchandise.cpp Merchandise.h 
	$(gpp_o) Merchandise.cpp

SoccerBall.o: SoccerBall.cpp SoccerBall.h Merchandise.h
	$(gpp_o) SoccerBall.cpp

ChelseaSoccerBall.o: ChelseaSoccerBall.cpp ChelseaSoccerBall.h SoccerBall.h
	$(gpp_o) ChelseaSoccerBall.cpp

ArsenalSoccerBall.o: ArsenalSoccerBall.cpp ArsenalSoccerBall.h SoccerBall.h
	$(gpp_o) ArsenalSoccerBall.cpp

LiverpoolSoccerBall.o: LiverpoolSoccerBall.cpp LiverpoolSoccerBall.h SoccerBall.h
	$(gpp_o) LiverpoolSoccerBall.cpp

Shirt.o: Shirt.cpp Shirt.h Merchandise.h 
	$(gpp_o) Shirt.cpp

ChelseaShirt.o: ChelseaShirt.cpp ChelseaShirt.h Shirt.h 
	$(gpp_o) ChelseaShirt.cpp

ArsenalShirt.o: ArsenalShirt.cpp ArsenalShirt.h Shirt.h 
	$(gpp_o) ArsenalShirt.cpp

LiverpoolShirt.o: LiverpoolShirt.cpp LiverpoolShirt.h Shirt.h 
	$(gpp_o) LiverpoolShirt.cpp

MerchandiseFactory.o: MerchandiseFactory.cpp MerchandiseFactory.h Merchandise.h 
	$(gpp_o) MerchandiseFactory.cpp

ChelseaFactory.o: ChelseaFactory.cpp ChelseaFactory.h MerchandiseFactory.h 
	$(gpp_o) ChelseaFactory.cpp

ArsenalFactory.o: ArsenalFactory.cpp ArsenalFactory.h MerchandiseFactory.h 
	$(gpp_o) ArsenalFactory.cpp

LiverpoolFactory.o: LiverpoolFactory.cpp LiverpoolFactory.h MerchandiseFactory.h 
	$(gpp_o) LiverpoolFactory.cpp

SoccerPlayer.o: SoccerPlayer.cpp SoccerPlayer.h CardState.h NoCardState.h YellowCardState.h RedCardState.h
	$(gpp_o) SoccerPlayer.cpp

CardState.o: CardState.cpp CardState.h
	$(gpp_o) CardState.cpp

NoCardState.o: NoCardState.cpp NoCardState.h CardState.h YellowCardState.h
	$(gpp_o) NoCardState.cpp

YellowCardState.o: YellowCardState.cpp YellowCardState.h CardState.h RedCardState.h
	$(gpp_o) YellowCardState.cpp

RedCardState.o: RedCardState.cpp RedCardState.h CardState.h
	$(gpp_o) RedCardState.cpp

PlayStyle.o: PlayStyle.cpp PlayStyle.h
	$(gpp_o) PlayStyle.cpp

AttackPlayStyle.o: AttackPlayStyle.cpp AttackPlayStyle.h PlayStyle.h
	$(gpp_o) AttackPlayStyle.cpp

DefendPlayStyle.o: DefendPlayStyle.cpp DefendPlayStyle.h PlayStyle.h
	$(gpp_o) DefendPlayStyle.cpp

PossessionPlayStyle.o: PossessionPlayStyle.cpp PossessionPlayStyle.h PlayStyle.h
	$(gpp_o) PossessionPlayStyle.cpp

run: Main
	./Main

clean:
	rm *.o Main
