// Michelle A. Santiago 
// Figuras 3D
// Colaboraciones: 


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double pi = 3.14159265358979323846; 

double volume (double, double);

double volume (double);

double volume (double, double, double);

int main() {

    // desplegar propósito del código

    cout << "Este programa calcula el volumen y el área de la supercicie de tres figuras." << endl;

    // hacer primer menu

    char first_choice;
    
    cout << "Escoja una figura: \n";
    cout << " a. Cilindro\n b. Esfera\n c. Prisma rectangular\n";
    cout << "Selección: ";
    cin >> first_choice;
    
    switch (first_choice)
    {
        case 'a':
        case 'A': cout << "Escogió el cilindro.\n";
                break;
        case 'b':
        case 'B': cout << "Escogió la esfera.\n";
                break;
        case 'c':
        case 'C': cout << "Escogió el prisma rectangular.\n";
                break;
        default: cout << "No entraste A, B, o C!\n";
    }

    // hacer segundo menu

    char sec_choice;
    
    cout << "Escoja entre los siguientes opciones: \n";
    cout << " a. Volumen\n b. Área de la superficie\n";
    cout << "Selección: ";
    cin >> sec_choice;
    
    switch (sec_choice) {
        
        case 'a':
        case 'A': cout << "Escogió calcular el volumen.\n";
                break;
        case 'b':
        case 'B': cout << "Escogió calcular el área de la superficie.\n";
                break;
                
        default: "No entraste A o B!\n";
    }
         
    // input validation

    // take user input

    if (first_choice = 'A' && sec_choice = 'A') {
        double rad, c_height;
        cout << "Entre el radio del cilindro: ";
        cin >> rad;
        
        cout << "Entre la altura del cilindro: ";
        cin >> c_height;
        
        cout << "El volumen del cilindro es: " << setprecision (3) << volume (rad, c_height);
    }
 
    if (first_choice = 'B' && sec_choice = 'A') {
        cout << "Entre el radio de la esfera: ";
        double s_rad;
        cin >> s_rad;
        cout << "El volumen de la esfera es: " << setprecision (3) << volume (s_rad);
    }
    
    if (first_choice = 'C' && sec_choice = 'A') {
        double width, length, height;
        cout << "Entre el largo: ";
        cin >> length;
    
        cout << "Entre el ancho: ";
        cin >> width;
    
        cout << "Entre la altura: ";
        cin >> height;
    
        cout << "El volumen del prisma rectangular es: " << setprecision (3) << volume (width, length, height);
    }

    return 0;
}

// funciones 

// volúmenes 

// cilindro

double volume (double rad, double c_height) {
    double vol;
    vol = pi * c_height * (pow (rad, 2));
    return vol;
}

// esfera

double volume (double s_rad) {
    double vol;
    vol = (1.33333333333) * pi * (pow (s_rad, 3));
    return vol;
}

// prisma rectangular 

double volume (double width, double length, double height) {
    double vol;
    vol = width * length * height;
    return vol;
}