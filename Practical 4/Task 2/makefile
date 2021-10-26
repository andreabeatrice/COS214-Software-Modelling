ofiles = Main.o NetworkElement.o
gpp_o = g++ -g -c -std=c++11 -static

Main: $(ofiles)
	g++ -g -std=c++11 -static $(ofiles) -o Main

Main.o: Main.cpp NetworkElement.h 
	$(gpp_o) Main.cpp

AlarmState.o: AlarmState.cpp AlarmState.h 
	$(gpp_o) AlarmState.cpp

ClearState.o: ClearState.cpp ClearState.h AlarmState.h
	$(gpp_o) ClearState.cpp

MajorState.o: MajorState.cpp MajorState.h AlarmState.h
	$(gpp_o) MajorState.cpp

MinorState.o: MinorState.cpp MinorState.h AlarmState.h
	$(gpp_o) MinorState.cpp

CriticalState.o: CriticalState.cpp CriticalState.h AlarmState.h
	$(gpp_o) CriticalState.cpp

NetworkElement.o: NetworkElement.cpp NetworkElement.h AlarmState.h Engineer.h
	$(gpp_o) NetworkElement.cpp

BTS.o: BTS.cpp BTS.h NetworkElement.h AlarmState.h ClearState.h MajorState.h MinorState.h CriticalState.h
	$(gpp_o) BTS.cpp

BSC.o: BSC.cpp BSC.h NetworkElement.h AlarmState.h ClearState.h MajorState.h MinorState.h CriticalState.h
	$(gpp_o) BSC.cpp

MSC.o: MSC.cpp MSC.h NetworkElement.h AlarmState.h ClearState.h MajorState.h MinorState.h CriticalState.h
	$(gpp_o) MSC.cpp

GGSN.o: GGSN.cpp GGSN.h NetworkElement.h AlarmState.h ClearState.h MajorState.h MinorState.h CriticalState.h
	$(gpp_o) GGSN.cpp

Engineer.o: Engineer.cpp Engineer.h AlarmState.h NetworkElement.h
	$(gpp_o) Engineer.cpp

RadioEngineer.o: RadioEngineer.cpp RadioEngineer.h Engineer.h AlarmState.h NetworkElement.h
	$(gpp_o) RadioEngineer.cpp

PowerEngineer.o: PowerEngineer.cpp PowerEngineer.h Engineer.h AlarmState.h NetworkElement.h
	$(gpp_o) PowerEngineer.cpp

TransmissionEngineer.o: TransmissionEngineer.cpp TransmissionEngineer.h Engineer.h AlarmState.h NetworkElement.h
	$(gpp_o) TransmissionEngineer.cpp

CSCoreEngineer.o: CSCoreEngineer.cpp CSCoreEngineer.h Engineer.h AlarmState.h NetworkElement.h
	$(gpp_o) CSCoreEngineer.cpp

PSCoreEngineer.o: PSCoreEngineer.cpp PSCoreEngineer.h Engineer.h AlarmState.h NetworkElement.h
	$(gpp_o) PSCoreEngineer.cpp

run: Main
	./Main

clean:
	rm *.o Main
