#include <iostream>
#include <string>


    std::string str("There are two needles in this haystack with needles.");
    std::string target("needle");
    std::string replacement("replacement");

    size_t pos = str.find(target);

    // "needle" alt dizesini bul ve "replacement" ile değiştir
    while (pos != std::string::npos) {
        // Eski kısım + Yeni kısım + Geri kalan kısım
        str = str.substr(0, pos) + replacement + str.substr(pos + target.length());

        // Bir sonraki "needle"'ı bul
        pos = str.find(target, pos + replacement.length());
    }

    std::cout << "Yeni metin: " << str << std::endl;

    return 0;
}