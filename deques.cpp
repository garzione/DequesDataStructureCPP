/* 
Justin Garzione

Deques Exercise

This program will show a deque
*/
#include<iostream>
#include<deque>
#include<iterator>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	// declare a deque of string movies and iterator to the deque
    deque <string> deq1(0);
    deque <string>::iterator deqit;
    bool on;
    string ar[] = {"Intensity", "Back to the Future", "Planet of the Apes", "Killer Klowns from Outerspace"}; 
	// input "Intensity", "Back to the Future", "Planet of the Apes", "Killer Klowns from Outerspace"
    deqit=deq1.begin();
    deq1.insert(deqit, ar[0]);

    for(int i = 1; i < 4 ; i ++){
        for(deqit = deq1.begin(); deqit < deq1.end(); deqit++){
            if(ar[i] < *deqit){
                deq1.insert(deqit, ar[i]);
                on = true;
                break;
                
            }
        }
        if(on == false)
        {
            deq1.insert(deqit,ar[i]);
        }
        on = false;
        
    }
	// put them in that order but put them in a sorted order as you put them in the deque
	// ex. use push to front, back, or move iterator to spot and put in

	// print each movie string from beginning to end with the iterator increment loop
    for(deqit = deq1.begin(); deqit < deq1.end(); deqit++)
    {
        cout << *deqit << endl;
    }
    cout << endl;
    cout << "~~~~From Killer Klowns to End~~~~~" << endl;
    for(deqit = deq1.begin(); deqit < deq1.end(); deqit++)
    {
        if(*deqit == "Killer Klowns from Outerspace"){

            for(deqit = deqit;deqit < deq1.end(); deqit++)
            {
                cout << *deqit << endl;
            }
        }
    }
	// find Killer Klowns from Outerspace
	// print from Killer Klowns from Outerspace to the end with iterator increment loop

}