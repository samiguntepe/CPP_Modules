#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
public:
    Fixed(); // Varsayılan kurucu
    Fixed(const Fixed &other); // Kopyalama kurucusu
    Fixed &operator=(const Fixed &other); // Kopyalama atama operatörü
    ~Fixed(); // Yıkıcı

    int getRawBits(void) const; // Sabit nokta değerinin ham değerini döndürür
    void setRawBits(int const raw); // Sabit noktalı sayının ham değerini ayarlar

private:
    int fixedPointValue; // Sabit noktalı sayı değerini depolar
    static const int fractionalBits = 8; // Kesirli bitlerin sayısını depolar
};

#endif