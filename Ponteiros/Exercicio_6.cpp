#include <iostream>
#include <math.h>
using namespace std;

/*
 Implemente uma funçao que calcule e retorne a área da superfície e o volume de uma esfera de
 raio R. Essa funçao deve obedecer ao protótipo:
 void calc_esfera(float R, float *area, float *volume)
 */

const float pi=3.14;

void calc_esfera(float R, float *area, float *volume);


int main()
{
    float raioEsfera = 5;
    float areaEsfera;
    float volumeEsfera;
    
    calc_esfera(raioEsfera, &areaEsfera, &volumeEsfera);
    cout << "Area da Esfera: " << areaEsfera << endl;
    cout << "Volume Esfera: " << volumeEsfera << endl;
    
    return 0;
}

void calc_esfera(float R, float *area, float *volume)
{
    cout << "Analisando esfera de raio " << R << endl;
    *area = 4 * pi * pow(R,2);
    *volume = 4 / 3 * pi * pow(R, 3);
}
    
