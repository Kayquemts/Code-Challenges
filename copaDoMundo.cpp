#include <iostream>
using namespace std;

int main() {
    int m, n;
    string s("ABCDEFGHIJKLMNOP");
    //cout << s << endl;

    int k = 0;
    for(int i = 0; i < 8; i++){
        cin >> m >> n;
        if(m < n){
            if(i == 0){
                s.erase(s.begin());
                k++;
            }else{
                s.erase(s.begin() + k);
                k++;
            }
        }else{
            k++;
            s.erase(s.begin() + k);
        }
        
    }

    //cout << s << endl;
    k = 0;
    for(int i = 0; i < 4; i++){
        cin >> m >> n;
        
        if(m < n){
            if(i == 0){
                s.erase(s.begin());
                k++;
            }else{
                s.erase(s.begin() + k);
                k++;
            }
        } else {
            k++;
            s.erase(s.begin() + k);
        }
    }
    //cout << s << endl;

    k=0;
    for(int i = 0; i < 2; i++){
        cin >> m >> n;
        
        if(m < n){
            if(i == 0){
                s.erase(s.begin());
                k++;
            }else{
                s.erase(s.begin() + k);
                k++;
            }
        } else {
            k++;
            s.erase(s.begin() + k);
        }
    }
    //cout << s << endl;

    k = 0;
    cin >> m >> n;
        
    if(m < n){
        s.erase(s.begin());
        k++;
    
    } else {
        k++;
        s.erase(s.begin() + k);
    }
    cout << s << endl;
    system("pause");
    return 0;
}