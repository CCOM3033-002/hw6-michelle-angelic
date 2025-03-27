// Michelle A. Santiago 
// Figuras 3D


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double pi = 3.14159265358979323846; 


// prototipos de funciones de volúmenes 

// cilindro

double volume (double, double);

// esfera

double volume (double);

// prisma rectangular

double volume (double, double, double);


// prototipo de funciones de área 

// cilindro

double area (double, double);

// esfera 

double area (double);

// prisma rectangular

double area (double, double, double);


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

    cout << endl;

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
    
    cout << endl;

    // input validation

    // volúmenes opciones

    if ((first_choice = 'A' || first_choice == 'a') && (sec_choice == 'A' || sec_choice == 'a')) {
        double rad, c_height;
        cout << "Entre el radio del cilindro: ";
        cin >> rad;

        cout << endl;
        
        cout << "Entre la altura del cilindro: ";
        cin >> c_height;

        cout << endl;
        
        cout << "El volumen del cilindro es: " << setprecision (3) << volume (rad, c_height);
    }
 
    if ((first_choice == 'B'|| first_choice == 'b') && (sec_choice == 'A' || sec_choice == 'a')) {
        cout << "Entre el radio de la esfera: ";
        double s_rad;
        cin >> s_rad;

        cout << endl;

        cout << "El volumen de la esfera es: " << setprecision (3) << volume (s_rad);
    }
    
    if ((first_choice = 'C' || first_choice == 'c') && (sec_choice == 'A' || sec_choice == 'a')) {
        double width, length, height;
        cout << "Entre el largo: ";
        cin >> length;

        cout << endl;
    
        cout << "Entre el ancho: ";
        cin >> width;

        cout << endl;
    
        cout << "Entre la altura: ";
        cin >> height;

        cout << endl;
    
        cout << "El volumen del prisma rectangular es: " << setprecision (3) << volume (width, length, height);
    }


    if ((first_choice = 'A' || first_choice == 'a') && (sec_choice == 'B' || sec_choice == 'b')) {
        double c_rad, height;
    
        cout << "Entre el radio del cilindro: ";
        cin >> c_rad;

        cout << endl;
    
        cout << "Entre la altura del cilindro: ";
        cin >> height;

        cout << endl;
    
        cout << "El área del cilindro es: " << setprecision (3) << area (c_rad, height);
    }

    if ((first_choice = 'B' || first_choice == 'b') && (sec_choice == 'B' || sec_choice == 'b')) {
        double s_rad;
    
        cout << "Entre el radio de la esfera: ";
        cin >> s_rad;

        cout << endl;
    
        cout << "El área de la esfera es: " << setprecision (3) << area (s_rad);
        
    }

    if ((first_choice = 'C' || first_choice == 'c') && (sec_choice == 'B' || sec_choice == 'b')) {
        double length, width, height;
    
        cout << "Entre el largo: ";
        cin >> length;

        cout << endl;
        
        cout << "Entre el ancho: ";
        cin >> width;

        cout << endl;
        
        cout << "Entre la altura: ";
        cin >> height;

        cout << endl;
        
        cout << "El área del prisma rectangular es: " << setprecision (3) << area (length, width, height);
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



// área 

// cilindro

double area (double c_rad, double height) {
    double ar;
    ar = (2.0 * pi * c_rad * height) + (2 * pi * (pow (c_rad, 2)));
    return ar;
}

// esfera

double area (double s_rad) {
    double ar;
    ar = (4.0 * pi * (pow (s_rad, 2)));
    return ar;
}

// prisma rectangular 

double area (double length, double width, double height) {
    double ar;
    ar = 2.0 * ((width * length) + (height * length) + (height * width));
    return ar;
}