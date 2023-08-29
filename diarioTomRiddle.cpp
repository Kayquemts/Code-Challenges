#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n;
    bool achou;
    cin >> n;
    cin.ignore();
    map<int, string> pessoas;

    for(int i = 0; i < n; i++){
        string nome;
        getline(cin, nome);
        pessoas.insert(pair<int, string>(i, nome));

        for(int j = 0; j < i; j++){
            if(pessoas.at(j) == nome){
                achou = true;
                break;
            }else{
                achou = false;
            }
        }
        if(achou){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }


    system("pause");
    return 0;
}
