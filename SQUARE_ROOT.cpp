
/*
* Inserte libreria y características aquí
*/

int main()
{
    /* Este es una manera de calcular raíces cuadradas
    *  El metodo usado aquí es la formula de Newton
    *  Conforme pasa cada iteración el resultado se va volviendo más y más exacto
    */
    
    int n; cin >> n;
    double x = 1;
    cout << setprecision(10);
    for(int i = 0; i < 100; i++){
        x = x - ((x*x - n)/(2*x));
        cout << "La aproximación " << i + 1 << ": " << x << endl;
    }

    return 0;
}
