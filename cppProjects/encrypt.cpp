#include <iostream>
#include <string>

int main()
{
    std::string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    std::string encrypt;
    std::cout << "Enter a message to encrypt: ";
    std::getline(std::cin, encrypt);

    //Encryption
    std::string decyrpt;
    for (auto &&i : encrypt)
    {
        if (isalpha(i))
        {
            decyrpt.push_back(key.at(alphabet.find(i)));
        }
        else
        {
            decyrpt.push_back(i);
        }
    }
    std::cout << "encrypted message: " << decyrpt << "\n\n";
    
    std::string messageToDecrypt;
    std::cout << "Enter a message to decrypt: ";
    std::getline(std::cin, messageToDecrypt);

    //Decryption
    std::string decryptedMessage;
    for (auto &&i : messageToDecrypt)
    {
        if (isalpha(i))
        {
            decryptedMessage.push_back(alphabet.at(key.find(i)));
        }
        else
        {
            decryptedMessage.push_back(i);
        }
    }
    std::cout << "decrypted message: " << decryptedMessage << "\n\n";

    return 0;
}