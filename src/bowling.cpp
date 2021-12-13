#include "bowling.h"


bool foo() {
    return true;
}

int calculator(vector<int> lancers) {
    int lancersSize = lancers.size();
    vector<int> score;
    int scoreTotal(0);
    int turnPoints;

    if (lancersSize < 20 || lancersSize > 22) {
        cout << "Nombre de lancers incorrect " << "(Nombre de lancers : " << lancersSize << ")" << endl << endl; //erreur si nombre de lancers entré non compris entre 20 et 22
        return scoreTotal;
    }
    else if (lancers[18] != 10 && lancersSize == 22) {
        cout << "Le dernier lancer n'est pas un strike " << "(Nombre de lancers : " << lancersSize << ")" << endl << endl; //erreur si 22 lancers mais le dernier (tour 10) n'est pas un strike
        return scoreTotal;
    }
    else if (lancers[18] + lancers[19] != 10 && lancersSize == 21) {
        cout << "Le dernier lancer n'est pas un spare " << "(Nombre de lancers : " << lancersSize << ")" << endl << endl; //erreur si 21 lancers mais le dernier (tour 10) n'est pas un spare
        return scoreTotal;
    }

    for (int i(1); i < 20; i += 2) {
        turnPoints = lancers[i-1] + lancers [i]; //Calcule le total du tour (sans compter strike et spare)

        if (turnPoints > 10) {
            cout << "Lancer impossible " << "(Tour > 10)" << endl << endl; //Vérifie que le total du tour ne soit pas > 10 (sans compter strike et spare) sinon c'est impossible
            return scoreTotal;
        } 
        else if (turnPoints == 10) {
            if (lancers[i-1] == 10) {
                score.push_back(turnPoints + lancers[i+1] + lancers[i+2]); //Si c'est un strike, additionne les deux lancers du tour suivant au total du tour en cours
            }
            else {
                score.push_back(turnPoints + lancers[i+1]); //Si c'est un spare, additionne le premier lancer du tour suivant au total du tour en cours
            }
        }
        else { 
            score.push_back(turnPoints); //Tour "classique" (pas de strike ni de spare)
        }

        cout << score.back() << " ";
        scoreTotal += score.back(); //Ajoute le score du tour au score total
    }

    cout << endl << "Score total : " << scoreTotal << endl << endl;
    return scoreTotal;
}
