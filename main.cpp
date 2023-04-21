    #include <iostream>
    #include <fstream>
    #include <string>

    using namespace std;


    void carrega_mapa(int mx, int my, string nome_arquivo, char (&mapa)[5][5]){
        ifstream arquivo;
        arquivo.open(nome_arquivo);
        if (arquivo.is_open()){

            arquivo >> mx >> my;

            for(int i = 0; i < mx; i++){
                for(int j = 0; j < my; j++){
                    char c;
                    arquivo >> c;
                    mapa[i][j] = c;
                }
            }
            arquivo.close();
        } else {
            cout << "Erro ao abrir";
        }
    }

    void imprime_mapa(int mx, int my, char (&mapa)[5][5]){
        for (int i=0; i < mx; i++){
            for (int j=0; j < mx; j++){
                cout << mapa[i][j];
            }
            cout << "\n";
        }
    }

    int main(){
        int mx = 5, my = 5;
        char mapa[5][5];
        string nome_arquivo = "C:/Users/gutoc/OneDrive/Imagens/Documentos/UNIVALI/algoeprog2/atividade/jogo/mapa.txt";

        carrega_mapa(mx, my, nome_arquivo, mapa);
        imprime_mapa(mx, my, mapa);

        return 0;
    }