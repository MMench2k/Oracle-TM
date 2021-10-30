/* Oracle Project for VolHacks V (2021), submitting for the "Most useless code"
 * Author: Michael Mench (mmench1)
 * Date created: 29-OCT-2021
 * Version 1.0
 */

#include<string>
#include<iostream>
#include<unistd.h>
//#include<Windows.h> REMOVE AS COMMENT IF ON WINDOWS MACHINE//

using namespace std;

int main() {

	string userQuestion;

	cout << "This is the most advanced AI in existance, capable of answering any question a human may pose" << endl;
	cout << "Good luck." << endl;
	
	sleep(10);


	for (int j = 0 ; j < 100 ; j++) {
		
		cout << endl;

	}


	cout << "Pose your query to the Oracle(TM), oh gentle ape" << endl;
	cout << '\n';
	cin >> userQuestion;
	cout << '\n';
	
	for (int i = 0 ; i < 4 ; i++) {

		cout << "Thinking..." << endl;

		sleep(2);

	}

	cout << "\nnah, ask google or sum shit idfk." << endl;
	
	cout << '\n' << '\n';

	return 0;
}

