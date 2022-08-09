#include <iostream>
using namespace std;
 int main()
 {
    float preCompra, preVenda;
    cout << "Preço de compra do produto: ";
    cin >> preCompra;
    preVenda = preCompra + (preCompra * 20/100);
    cout << "Preço sugerido para venda: " << preVenda;
 }