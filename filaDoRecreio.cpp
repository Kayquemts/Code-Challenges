#include <iostream>

using namespace std;

int main() {
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++){
        int m; 
        cin >> m;
        int p[m];
        //Recebendo as notas dos alunos
        for(int j = 0; j < m; j++){
            cin >> p[j];
            cin.ignore();
        }

        //fazendo uma copia das notas
        int p2[m];
        for(int j = 0; j < m; j++){
            p2[j] = p[j];
        }
        
        //ordenando a copia do vetor
        for(int j = 0; j < m; j++){
            for(int k = 0; k < m-1; k++){
                if(p2[k] < p2[k+1]){
                    int a;
                    a = p2[k+1];
                    p2[k+1] = p2[k];
                    p2[k] = a;
                }
            }
            
        }
        //verificando quais vetores não trocaram de lugar
        int lugar = 0;
        for(int j = 0; j < m; j++){
            if(p2[j] == p[j]){
                lugar ++;
            }
        }
        cout << lugar << endl;

    }
    system("pause");
    return 0;
}