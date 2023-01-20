// menu conversion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int opcion;

    cout << "ESCOJE QUE QUIERES REALIZAR" << endl;
    cout << "1. Conversor de Monedas" << endl;
    cout << "2. Conversor de Kilometros" << endl;
    cout << "3. Conversor de Peso" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        double mxn, usd, eur, gbd, cad, jpy;
        int op1;

        cout << "Conversor de Monedas" << endl;

        cout << "Ingresa la cantidad en MXN: ";
        cin >> mxn;

        cout << "Escoja a que quiere convertir" << endl;
        cout << "1. Pesos (MXN) a Dolares (USD)" << endl;
        cout << "2. Pesos (MXN) a Euros (EUR)" << endl;
        cout << "3. Pesos (MXN) a Libra Esterlina (GBP)" << endl;
        cout << "4. Pesos (MXN) a Dolar Canadiense (CAD)" << endl;
        cout << "5. Pesos (MXN) a Yen Japones (JPY)" << endl;
        cout << "Elige una opcion: ";
        cin >> op1;

        switch (op1)
        {
        case 1:
            usd = mxn * 0.051;
            cout << "El total de Pesos MXN en Dolares es " << usd << " USD" << endl;
            break;
        case 2:
            eur = mxn * 0.042;
            cout << "El total de Pesos MXN en Euros es " << eur << " EUR" << endl;
            break;
        case 3:
            gbd = mxn * 0.035;
            cout << "El total de Pesos MXN en Libra Esterlina es " << gbd << " GBD" << endl;
            break;
        case 4:
            cad = mxn * 0.066;
            cout << "El total de Pesos MXN en Dolar Canadiense es " << cad << " CAD" << endl;
            break;
        case 5:
            jpy = mxn * 5.69;
            cout << "El total de Pesos MXN en Yen Japones es " << jpy << " JPY" << endl;
            break;
        default:
            cout << "Opcion invalida";
            break;
        }
        break;
    case 2:
        double kms, in, ft, cm, nm, ly;
        int op2;

        cout << "Conversor de Kilometros" << endl;

        cout << "Ingresa la cantidad en KMS: ";
        cin >> kms;

        cout << "Escoja a que quiere convertir" << endl;
        cout << "1. Kilometros (KMS) a Pulgadas (IN)" << endl;
        cout << "2. Kilometros (KMS) a Pies (FT)" << endl;
        cout << "3. Kilometros (KMS) a Centimetros (CM)" << endl;
        cout << "4. Kilometros (KMS) a Nanometros (NM)" << endl;
        cout << "5. Kilometros (KMS) a Millas (LY)" << endl;
        cout << "Elige una opcion: ";
        cin >> op2;

        switch (op2)
        {
        case 1:
            in = kms * 39370.08;
            cout << "El total de KMS a Pulgadas es " << in << " IN" << endl;
            break;
        case 2:
            ft = kms * 3280.84;
            cout << "El total de KMS a Pies es " << ft << " FT" << endl;
            break;
        case 3:
            cm = kms * 100000;
            cout << "El total de KMS a Centimetros es " << cm << " CM" << endl;
            break;
        case 4:
            nm = kms * 1000000000000;
            cout << "El total de KMS a Nanometros es " << nm << " NM" << endl;
            break;
        case 5:
            ly= kms * 0.62137119;
            cout << "El total de KMS a Millas es " << ly << " LY" << endl;
            break;
        default:
            cout << "Opcion invalida";
            break;
        }
        break;
    case 3:
        double kgs, ton, oz, lb, µg, tg;
        int op3;

        cout << "Conversor de Kilogramos" << endl;

        cout << "Ingresa la cantidad en Kgs: ";
        cin >> kgs;

        cout << "Escoja a que quiere convertir" << endl;
        cout << "1. Kilogramos (KGS) a Toneladas (TON)" << endl;
        cout << "2. Kilogramos (KGS) a Onzas (OZ)" << endl;
        cout << "3. Kilogramos (KGS) a Libras (LB)" << endl;
        cout << "4. Kilogramos (KGS) a Microgramos (µG)" << endl;
        cout << "5. Kilogramos (KGS) a Teragramos (TG) (AUN EN MANTENIMIENTO)" << endl; //No supe como calcular el teragramo
        cout << "Elige una opcion: ";
        cin >> op3;

        switch (op3)
        {
        case 1:
            ton = kgs * 0.001;
            cout << "El total de KGS a Tonelada es " << ton << " TON" << endl;
            break;
        case 2:
            oz = kgs * 35.2739;
            cout << "El total de KGS a Onzas es " << oz << " OZ" << endl;
            break;
        case 3:
            lb = kgs * 2.2046;
            cout << "El total de KGS a Libras es " << lb << " LB" << endl;
            break;
        case 4:
            µg = kgs * 1000000000;
            cout << "El total de KGS a Microgramos es " << µg << " µG" << endl;
            break;
        //case 5:
            //tg = kgs * 1×10^-9; esto me marca como error
            //cout << "El total de KGS a Teragramos es " << tg << " TG" << endl;
            //break;
        default:
            cout << "Opcion invalida";
            break;
        }
        break;
    default:
        break;
    }
}

