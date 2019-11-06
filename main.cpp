#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


    bool sortnome(string a, string b){
        return a.size() < b.size();
    }

int main (){

    vector <string> nome;

    string n1, n2, n3;
    cout << "Digite as palavras:"  << endl;
    cin >> n1 >> n2 >> n3;

    nome.push_back(n1);
    nome.push_back(n2);
    nome.push_back(n3); 

    sort(nome.begin(),nome.end(),sortnome);

    if (nome[0].size() != nome[nome.size()-1].size()){
        cout << nome[0] << "é menor que" << nome[nome.size()-1] << endl;
    }

    if (nome[0].size() == nome[nome.size()-1].size()){
        cout << "Todas as palavras tem o mesmo tamanho " << endl;
            /*for(int i = 0; i < nome.size(); i++){
                cout << nome[i] << endl;
            }*/
            for(auto miau : nome){
                cout << miau << endl;
            }
    }
    
    return 0;
}