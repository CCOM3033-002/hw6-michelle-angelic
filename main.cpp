// Michelle A. Santiago 
// Figuras 3D
// Colaboraciones: 


#include <iostream>
using namespace std;

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

    return 0;
}
