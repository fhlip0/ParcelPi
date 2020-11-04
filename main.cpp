#include <iostream>
#include <string>
using namespace std;
int intzip = 0;


string strgold198("Area 4, Gold, Door 198, Massillon");
string strgold199( "Area 4, Gold, Door 199, New Philidelphia" );
string strgold200("Area 4, Gold, Door 200, Mahonning Valley");
string strgold201("Area 4, Gold, Door 201, Austinburg");
string strgold202("Area 4, Gold, Door 202, Wooster");
string strgold203("Area 4, Gold, Door 203, Trumbull");
string strgold204("Area 4, Gold, Door 204, Middleburg");
string strgold205("Area 4, Gold, Door 205, Highland Heights");
string strgold206("Area 4, Gold, Door 206, Cleveland");
string strgold207("Area 4, Gold, Door 207, Akron");
int main() {
	cout << "Welcome to Skippys Package Checker" << endl;
	
    cout << "Please Enter Zip Code" << endl;
	cin >> intzip;
	//Massillon
	if(intzip == 44601 || intzip == 44602 || intzip == 44603 || intzip == 44604 || intzip == 44605 || intzip == 44607 || intzip == 44609 
			|| intzip == 44613 || intzip == 44614 || intzip == 44619 || intzip == 44625 || intzip == 44626 || intzip == 44630 
			|| intzip == 44634 || intzip == 44635 || intzip == 44640 || intzip == 44641 || intzip == 44642 || intzip == 44643 
			|| intzip == 44644 || intzip == 44646 || intzip == 44648 || intzip == 44649 || intzip == 44650 || intzip == 44652 
			|| intzip == 44657 || intzip == 44658 || intzip == 44662 || intzip == 44664 || intzip == 44665 || intzip == 44666 
			|| intzip == 44668 || intzip == 44669 || intzip == 44670 || intzip == 44671 || intzip == 44672 || intzip == 44673 
			|| intzip == 44674 || intzip == 44684 || intzip == 44685 || intzip == 44688 || intzip >= 44700 && intzip <= 44799)
		cout << strgold198 << endl;
	//New Philidelphia
	else if(intzip >= 43803 && intzip <= 43812 || intzip >= 43824 && intzip <= 43828 || intzip >= 43832 && intzip <= 43840 ||
			intzip >= 43843 && intzip <= 43845 || intzip == 44608 || intzip == 44612 || intzip == 44615 || intzip >= 44620 && intzip <= 44624 ||
			intzip == 29 || intzip == 31 || intzip == 39 || intzip == 51 || intzip == 53 || intzip == 56 || intzip == 63 ||
			intzip == 75 || intzip >= 44678 && intzip <= 44683 || intzip == 44686 || intzip == 89 || intzip == 90 || 
			intzip >= 44693 && intzip <= 44699)
		cout << strgold199 << endl;
	// Mahoning
	else if(intzip == 44408 || intzip == 44413 || intzip == 44414 || intzip == 44415 || intzip == 44422 || intzip == 44423 ||
			intzip == 44427 || intzip >= 44431 && intzip <= 44436 || intzip == 44441 || intzip == 44442 || intzip == 44443 ||
			intzip == 44445 || intzip == 44452 || intzip >= 44454 && intzip <= 44460 || intzip == 44471 || intzip == 44490 ||
			intzip == 44492 || intzip == 44493 || intzip == 44512 || intzip == 44513 || intzip == 44514 || intzip == 44598 ||
			intzip == 44599)
		cout << strgold200 << endl;
	//Austinburg
	else if(intzip >= 44003 && intzip <= 44010 || intzip == 44030 || intzip == 44031 || intzip == 44032 || intzip == 44033 ||
			intzip == 44034 || intzip == 44041 || intzip == 44042 || intzip == 44043 || intzip == 44046 || intzip == 44047 ||
			intzip == 44048 || intzip == 44057 || intzip == 44062 || intzip == 44064 || intzip == 44066 || intzip == 44068 ||
			intzip == 44076 || intzip == 44081 || intzip == 44082 || intzip == 44083 || intzip == 44084 || intzip == 44085 ||
			intzip == 44086 || intzip == 44088 || intzip == 44093 || intzip == 44099)
		cout << strgold201 << endl;
	//Wooster
	else if(intzip == 44606 || intzip == 44610 || intzip == 44611 || intzip == 44617 || intzip == 44618 || intzip == 44627 ||
			intzip == 44628 || intzip == 44633 || intzip == 44636 || intzip == 44637 || intzip == 44638 || intzip == 44645 ||
			intzip == 44654 || intzip >= 44659 && intzip <= 44661 || intzip == 44667 || intzip == 44676 || intzip == 44677 ||
			intzip == 44687 || intzip == 44691)
		cout << strgold202 << endl;
	//Trumbull
	else if(intzip == 44080 || intzip == 44231 || intzip == 44234 || intzip == 44288 || intzip >= 44400 && intzip <= 44406 ||
			intzip == 44410 || intzip == 44411 || intzip == 44412 || intzip == 44416 || intzip == 44417 || intzip == 44418 ||
			intzip == 44419 || intzip == 44420 || intzip == 44424 || intzip == 44425 || intzip == 44428 || intzip == 44429 ||
			intzip == 44430 || intzip == 44437 || intzip == 44438 || intzip == 44439 || intzip == 44440 || intzip == 44446 ||
			intzip == 44447 || intzip == 44448 || intzip == 44449 || intzip == 44450 || intzip == 44451 || intzip == 44453 ||
			intzip == 44470 || intzip == 44473 || intzip == 44474 || intzip == 44475 || intzip == 44476 || intzip == 44477 ||
			intzip == 44478 || intzip == 44479 || intzip == 44480 || intzip == 44481 || intzip == 44482 || intzip == 44483 ||
			intzip == 44484 || intzip == 44485 || intzip == 44486 || intzip == 44488 || intzip == 44491 || intzip == 44500 ||
			intzip >= 44501 && intzip <= 44511 || intzip >= 44515 && intzip <= 44572)
		cout << strgold203 << endl;
	// Middleburg
	else if(intzip == 44000 || intzip == 44001 || intzip == 44002 || intzip >= 44011 && intzip <= 44017 || intzip == 44028 ||
			intzip == 44035 || intzip == 44036 || intzip == 44037 || intzip == 44038 || intzip == 44039 || intzip == 44044 ||
			intzip == 44049 || intzip == 44050 || intzip == 44051 || intzip == 44052 || intzip == 44053 || intzip == 44054 ||
			intzip == 44055 || intzip == 44070 || intzip == 44074 || intzip == 44089 || intzip == 44090 || intzip == 44102 ||
			intzip == 44107 || intzip == 44109 || intzip == 44111 || intzip == 44116 || intzip == 44126 || intzip == 44129 ||
			intzip == 44130 || intzip == 44133 || intzip == 44134 || intzip == 44135 || intzip == 44136 || intzip == 44138 ||
			intzip == 44140 || intzip == 44141 || intzip == 44142 || intzip == 44144 || intzip == 44145 || intzip == 44147 ||
			intzip == 44148 || intzip == 44149 || intzip == 44150 || intzip == 44151 || intzip == 44181 || intzip == 44212 ||
			intzip == 44215 || intzip == 44215 || intzip == 44233 || intzip == 44253 || intzip == 44256 || intzip == 44257 ||
			intzip == 44258 || intzip == 44259 || intzip == 44275 || intzip == 44280 || intzip == 44286)
		cout << strgold204 << endl;
	// Highland Heights
	else if(intzip == 44021 || intzip == 44022 || intzip == 44023 || intzip == 44024 || intzip == 44025 || intzip == 44026 ||
			intzip == 44040 || intzip == 44045 || intzip == 44060 || intzip == 44061 || intzip == 44065 || intzip == 44072 ||
			intzip == 44077 || intzip == 44092 || intzip == 44094 || intzip == 44095 || intzip == 44096 || intzip == 44097 ||
			intzip == 44110 || intzip == 44112 || intzip == 44117 || intzip == 44118 || intzip == 44119 || intzip == 44121 ||
			intzip == 44122 || intzip == 44123 || intzip == 44124 || intzip == 44132 || intzip == 44139 || intzip == 44143 ||
			intzip == 44202 || intzip == 44255)
		cout << strgold205 << endl;
	//Cleveland
	else if(intzip == 44056 || intzip == 44067 || intzip == 44087 || intzip == 44100 || intzip == 44101 || intzip == 44103 ||
			intzip == 44104 || intzip == 44105 || intzip == 44106 || intzip == 44108 || intzip == 44113 || intzip == 44114 ||
			intzip == 44115 || intzip == 44120 || intzip == 44125 || intzip == 44127 || intzip == 44128 || intzip == 44131 ||
			intzip == 44137 || intzip == 44146 || intzip == 44195 || intzip == 44199)
		cout << strgold206 << endl;
	//Akron
	else if(intzip == 44201 || intzip == 44211 || intzip == 44221 || intzip == 44222 || intzip == 44223 || intzip == 44224 ||
			intzip == 44236 || intzip == 44237 || intzip == 44240 || intzip == 44241 || intzip == 44242 || intzip == 44243 ||
			intzip == 44250 || intzip == 44260 || intzip == 44262 || intzip == 44264 || intzip == 44265 || intzip == 44266 ||
			intzip == 44272 || intzip == 44278 || intzip == 44285 || intzip >= 44301 && intzip <= 44317 || intzip == 44320 ||
			intzip == 44322 || intzip == 44325 || intzip == 44326 || intzip == 44328 || intzip == 44372 || intzip == 44393 ||
			intzip == 44396 || intzip == 44398 || intzip == 44399)
		cout << strgold207 << endl;
	else cout << "Not a good zip yo" << endl;
	
}