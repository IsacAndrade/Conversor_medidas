#include <iostream>

using namespace std;

int escolha_menu(){

    cout << "1 - Converte metros para centimetros" << endl;
    cout << "2 - Converte centimetros para metros" << endl;
    cout << "3 - Converte metros para quilometros" << endl;
    cout << "4 - Converte quilometros para metros" << endl;
    cout << "5 - Converte quilogramas para gramas" << endl;
    cout << "6 - Converte gramas para quilogramas" << endl;
    cout << "7 - Converte celsius para fahrenheit" << endl;
    cout << "8 - Converte fahrenheit para celsius" << endl;
    cout << "9 - Converte celsius para kelvin" << endl;

    int escolha;

    cin >> escolha;
    return escolha;

}

double entrada(string mensagem){

    double n1;
    cout << mensagem <<endl;
    cin >> n1;

    return n1;
}

double metros_para_centimetros(){

    double metros,centimentro;

    metros = entrada("Digite a quantidade de metros a ser convertida");

    centimentro = metros*100;

    return centimentro;
}

double centimetros_para_metros(){

    double metros,centimentro;

    centimentro = entrada("Digite a quantidade de centimetros a ser convertida");

    metros = centimentro/100;

    return metros;
}

double metros_para_quilometros(){

    double metros, quilometros;

    metros = entrada("Digite a quantidade de metros a ser convertida");

    quilometros = metros/1000;

    return quilometros;
}

double quilometros_para_metros(){

    double quilometros, metros;

    quilometros = entrada("Digite a quantidade de quilometros a ser convertida");

    metros = quilometros*1000;

    return metros;
}

double kg_para_gramas(){

    double kg, gramas;

    kg = entrada("Digite a quantidade de quilos a ser convertida");

    gramas = kg*1000;

    return gramas;
}

double gramas_para_kg(){

    double gramas, kg;

    gramas = entrada("Digite a quantidade de gramas a ser convertida");

    kg = gramas/1000;

    return kg;
}

double celsius_fahren(){

    double celsius, fahren;

    celsius = entrada("Digite a quantidade de celsius a ser convertida");

    fahren = (celsius*1.8)+32;

    return fahren;

}

double fahren_celsius(){

    double fahren, celsius;

    fahren = entrada("Digite a quantidade de fahrenheit a ser convertida");

    celsius = (fahren-32)/1.8;

    return celsius;
}

double celsius_kelvin(){

    double celsius,kelvin;

    celsius = entrada("Digite a quantidade de celsius a ser convertida");

    kelvin = celsius+273.15;

    return kelvin;
}

int main()
{
    int mostra_menu = 1;
    while(mostra_menu == 1){

    int escolha = escolha_menu();

        if (escolha == 1)
        {
            cout << "Convertendo metros para centimetros" << endl;
            double metros_centimetros = metros_para_centimetros();
            cout << "Resultado eh " << metros_centimetros << " centimetros"<< endl;
        }
        if (escolha == 2)
        {
            cout << "Convertendo centimetros para metros" << endl;
            double centimetros_metros = centimetros_para_metros();
            cout << "Resultado eh " << centimetros_metros << " metros"<< endl;
        }
        if (escolha == 3)
        {
            cout << "Convertendo metros para quilometros" << endl;
            double metros_quilometros = metros_para_quilometros();
            cout << "Resultado eh " << metros_quilometros << " quilometros"<< endl;
        }
        if (escolha == 4)
        {
            cout << "Convertendo quilometros para metros" << endl;
            double quilometros_metros = quilometros_para_metros();
            cout << "Resultado eh " << quilometros_metros << " metros"<< endl;
        }
        if (escolha == 5)
        {
            cout << "Convertendo quilos para gramas" << endl;
            double quilos_gramas = kg_para_gramas();
            cout << "Resultado eh " << quilos_gramas << " gramas"<< endl;
        }
        if (escolha == 6)
        {
            cout << "Convertendo gramas para quilos" << endl;
            double gramas_quilo = gramas_para_kg();
            cout << "Resultado eh " << gramas_quilo << " kg"<< endl;
        }
        if (escolha == 7)
        {
            cout << "Convertendo celsius para fahrenheit" << endl;
            double celsius_fahrenheit = celsius_fahren();
            cout << "Resultado eh " << celsius_fahrenheit << " graus F"<< endl;
        }
        if (escolha == 8)
        {
            cout << "Convertendo fahrenheit para celsius" << endl;
            double fahrenheit_celsius = fahren_celsius();
            cout << "Resultado eh " << fahrenheit_celsius << " graus C"<< endl;

        }
        if (escolha == 9)
        {
            cout << "Convertendo celsius para kelvin" << endl;
            double celsius_kelv = celsius_kelvin();
            cout << "Resultado eh " << celsius_kelv << " K"<< endl;
        }

        cout << "Deseja voltar para o menu? (1=sim)" << endl;
        cin >> mostra_menu;

    }
}
