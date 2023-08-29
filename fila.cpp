#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,m;
    
    //Recebendo as pessoas da fila
    cin >> n;
    vector<int> pessoas;
    for(int i = 0; i < n; i++){
        int id;
        cin >> id;
        pessoas.push_back(id);
    }
    
    //Recebendo os desistentes
    cin >> m;
    vector<int> desistentes;
    for(int i = 0; i < m; i++){
        int id;
        cin >> id;
        desistentes.push_back(id);
    }
    sort(desistentes.begin(), desistentes.end());
    
    //removendo os desistentes de acordo com os indices 
    for (int i = pessoas.size() - 1; i >= 0; i--) {
        if (find(desistentes.begin(), desistentes.end(), pessoas[i]) != desistentes.end()) {
            pessoas.erase(pessoas.begin() + i);
        }
    }
    
    for(int x: pessoas){
        cout << x << " ";
    }
    system("pause");
    return 0;
}