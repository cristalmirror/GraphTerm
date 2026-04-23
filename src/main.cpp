#include <iostream>
#include <string>

using namespace std;

struct Obj;

// Declarations of external C and Rust functions
extern "C" {
    void saludar(); // Replace with actual C library header
    void despedir();
    int sumar(int a, int b); // Declaration of the Rust function
    void loop_func();
    Obj* create_object(int id);
    int object_comand(Obj* obj, int command,int num);
    void destroy_object(Obj* obj);
    void graph_function(char **data_graph);
    void digraph_function(char **data_graph);
    void tree_function(char **data_graph);
}

// Main function
int main(int argc,char *argv[]) {
    saludar(); // Call the C function
    int res = sumar(5, 7); // Call the Rust function
    cout << "Resultado de sumar desde Rust: " << res <<endl <<endl;
    
    int comand = stoi(argv[1]);
    int num = stoi(argv[2]);
    Obj* obj = create_object(42); // Create an object with ID 42
    int comand_res = object_comand(obj, comand, num);
    cout << "Resultado de object_comand: " << comand_res << endl << endl;
    destroy_object(obj); // Clean up the object
    loop_func();
    despedir(); // Call the C function

    switch (stoi(argv[4])) {
        case 1: graph_function(&argv[3]); break;
        case 2: digraph_function(&argv[3]); break;
        case 3: tree_function(&argv[3]); break;
        default: cerr << "Error: arguments are invalid " <<endl; break;
    }
    

    return 0;
}