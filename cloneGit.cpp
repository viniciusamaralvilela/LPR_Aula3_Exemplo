#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.utf8"); //Para usar acentuação
    cout << "\032[1;32m***************************************************\033[0m\n";
    cout << "\032[1;32m*                                                 *\033[0m\n";
    cout << "\032[1;32m*   \033[1;33m PARABÉNS Vinícius!                     \033[1;32m          *\033[0m\n";
    cout << "\032[1;32m*                                                 *\033[0m\n";
    cout << "\032[1;32m*   \033[1;36mVocê clonou um repositório público do Git     \033[1;32m*\033[0m\n";
    cout << "\032[1;32m*   \033[1;36mpara o seu repositório local. Valeu Andery!                 \033[1;32m*\033[0m\n";
    cout << "\032[1;32m*                                                 *\033[0m\n";
    cout << "\032[1;32m***************************************************\033[0m\n";

    return 0;
}
