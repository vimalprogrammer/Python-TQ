/*
The world is going to be attacked by the aliens. The space intelligence department has raised an alarm and the world armies are coming together to fight them. The planning and strategizing is being done to make the maximum impact on the alien ships. The deadly missiles are to be put into action. The missiles are targeted to destroy the alien ships in space and disable them to land on the Earth.
The army is planning to launch the attack at A time (hh mm) to get an advantage. For each attack, they know the time the missile will require to hit the coming alien ship. They all are busy in preparation and want to know the time at which the blast will occur and the alien ship will be destroyed in pieces. Can you find the time of the blast ?
Note: The World Army follows a 24-hour time format and you need to find the time of blast accordingly. The time will be in the hh mm format.

Input Format
The first line of input consists of the launch time in hh mm format separated by space.

The second line of input consists of the travel time for the missile in hh mm format separated by space.

Constraints
00<= hh <=23
00<= mm <=59

Output Format
Print the time at which the blast will occur and the spaceship will be destroyed.

Sample TestCase 1
Input
19 50
02 20

Output
22 10
*/

/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *a[])
{
    int minute,hour,hour1,minute1,hour2,minute2;
    // hour1=24;minute1=00;hour2=03;minute2=05;
	cin>>hour1>>minute1;
	cin>>hour2>>minute2;
// 	minute=minute1+minute2;
//     int temp=minute-60;
//     if(temp>0)
//     {
//         hour=1;
//         minute=temp;
//     }
// 	hour+=hour1+hour2;
// 	hour%=24;
    hour=hour1+hour2;
    int hh=hour;
    int mm=(minute1+minute2);
    if(mm>60)
        hh++;
    mm%=60;
    hh%=24;
    printf("%02d %02d",hh,mm);
    // string hht= to_string(hh);
    // string mmt= to_string(mm);
    // if(hht.size()<=1)
    // {
    //     hht="0";
    //     string x=to_string(hh);
    //     hht+=x;
    // }
    // if(mmt.size()<=1)
    // {
    //     mmt="0";
    //     string x=to_string(mm);
    //     mmt+=x;
    // }
// 	cout<<hht<<" "<<mmt;
}

//---------------------------------------------------------------------//
//AC Solution

#include <stdio.h>

int main() {

    int departureTimeHH, departureTimeMM, TravelTimeHH, TravelTimeMM;
    scanf("%d %d", &departureTimeHH, &departureTimeMM);
    scanf("%d %d", &TravelTimeHH, &TravelTimeMM);
    
    int totalMinutesOfTravel = (TravelTimeHH * 60) + TravelTimeMM;
    
    for(int i=1; i<=totalMinutesOfTravel; i++){
        departureTimeMM += 1;
        if (departureTimeMM > 59){
            departureTimeMM = 0;
            departureTimeHH += 1;
            if (departureTimeHH > 23){
                departureTimeHH = 0;
            }
        }    
    }
    printf("%02d %02d", departureTimeHH, departureTimeMM);
    return 0;
}