#include <iostream>
// Basically, if you saw the encrytion code
// This is basically a reverse engineer of the encryption code
// So it decrypts exactly what was encrypted
int main(){
    // Last time we started with letters array
    // But to reverse engineer, we must reverse
    // Key used to get index
    char key[] = {'Q', 'V', 'B', 'l', 'y', 'o', '9', 'f', 'K', 'w', 'Y', '<', 'G', 'T', '&', '+', '{', '-', 's', 'I', '%', '5', 'M', '@', '[', 't', '}', 'J', '1', 'r', '*', '!', 'H', 'W', '8', 'S', '6', '~', ')', 'N', '\'', '?', 'p', 'O', ':', '_', 'U', ';', 'm', 'Z', 'i', ']', 'h', 'X', 'z', ' ', 'u', 'c', 'E', 'g', '7', '4', 'n', 'A', 'x', '3', '#', 'b', 'j', '=', '$', 'P', 'R', '/', 'k', ',', '(', '^', 'e', '\'', '"', '`', '2', '.', 'D', '0', 'L', '|', 'F', 'v', 'd', 'a', 'q', 'C', '>'};

    // Char used to replace
    char letters[] = {'|', 'n', '8', '#', 'k', '"', '=', 'c', 'W', '[', 'O', ';', '&', 'v', '9', 'z', 'h', '/', 'I', '!', 'j', 'm', 'B', 'K', '?', '0', '$', 'A', '^', '{', 'b', 'U', 'L', 'x', 'e', ',', 'G', 'Q', 'X', '2', '+', ' ', 'g', ']', '~', 'w', 'a', '.', 'i', '3', 'l', '4', 'Y', 'D', 'J', 'u', 'P', '1', 'V', '@', 'Z', 'y', ':', '\\', 't', '`', '6', 'M', ')', '\'', '*', '-', '}', '>', 'q', '(', 'o', 'T', 'C', '<', '7', '_', 'p', 'r', 's', 'd', 'E', 'F', 'R', '5', '%', 'f', 'N', 'H', 'S'};
    system("clear");
    std::string word = "";
    std::cout << "Enter an encrypted word: ";
    std::getline(std::cin >> std::ws, word); // ws - accept white spaces
    std::cin.clear(); // clear the buffer
    fflush(stdin); // flush the input

    int index = 0; // index for key index
    for(int i = 0; i < (int) word.length(); i++){
        char let = word.at(i);
        for(int j = 0; j < (int) sizeof(key) / sizeof(char); j++){
            if(let == key[j]){
                index = j;
            }
        }
        std::cout << letters[index];
    }
    std::cout << std::endl;
    return 0;
}