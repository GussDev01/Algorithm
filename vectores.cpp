#include <bits/stdc++.h>

using namespace std; 



int main(){
                              //   [0,1,2]
    vector<string> names {"nom1","nom2", "nom3"};
    vector<float> decimales {2.1, 3.3, 5.0, 7.0, 11.0, 13.0, 17.4, 19.0};


   
    
//vector "arreglo indefinido"

    auto Calif_Mario = vector<int>{}; /* [0,1,2,3,4,5,6, infinitos] */

        Calif_Mario.push_back(35);  // Ok: [3]
        Calif_Mario.push_back(71);  // Ok: [3, 1]
        Calif_Mario.push_back(72);  // Ok: [3, 1, 2]
        Calif_Mario.push_back(11);  // Ok: [3, 1, 2, 1]
        Calif_Mario.push_back(777);  // Ok: [3, 1, 2, 1, 0]
        Calif_Mario.push_back(212);  // Ok: [3, 1, 2]
        Calif_Mario.push_back(222);  // Ok: [3, 1, 2]
        Calif_Mario.push_back(24);  // Ok: [3, 1, 2]
        Calif_Mario.push_back(31);  // Ok: [3, 1, 2]
        Calif_Mario.push_back(92);  // Ok: [3, 1, 2]
        Calif_Mario.push_back(54);  // Ok: [3, 1, 2]

        for(int i = 0; i < 11; i++)
        cout <<"\n"<< Calif_Mario[i];

    return 0;
}




