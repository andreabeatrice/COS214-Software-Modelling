#include "NetworkElement.h"
#include "BTS.h"
#include "BSC.h"
#include "MSC.h"
#include "GGSN.h"

#include "Engineer.h"
#include "RadioEngineer.h"
#include "PowerEngineer.h"
#include "TransmissionEngineer.h"
#include "CSCoreEngineer.h"
#include "PSCoreEngineer.h"

#include "AlarmState.h"
#include "EngineerCollection.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	NetworkElement* BTS01 = new BTS("BTS01"); 
	NetworkElement* MSC01 = new MSC("MSC01"); 
	NetworkElement* GGSN01 = new GGSN("GGSN01");


	Engineer* steve = new RadioEngineer("Steve", BTS01);
	Engineer* maria = new PowerEngineer("Maria", BTS01);
	Engineer* twig = new TransmissionEngineer("Twig", BTS01);


	Engineer* anya = new PSCoreEngineer("Anya", GGSN01);
	Engineer* joan = new CSCoreEngineer("Joan", MSC01);
	cout<<endl;

	BTS01->changeAlarm("critical"); 
	cout<<endl;

	delete joan;
	delete steve;
	delete maria;
	delete twig;
	delete anya;

	delete BTS01;
	delete MSC01;
	delete GGSN01;

	cout<<endl;
	

	return 0;
}