#ifndef MYTYPE_H
#define MYTYPE_H


class MyType
{
public:
    MyType() = delete;
    MyType(int first_path, double second_path) : first_path(first_path), second_path(second_path) {};
    MyType(const MyType&);

    // Унарные
    const MyType& operator+();
    const MyType operator-();
    const MyType& operator++();
    const MyType operator++(int);
    const MyType& operator--();
    const MyType operator--(int);

    // Бинарные - сравнение
    bool operator==(const MyType&) const;
    bool operator!=(const MyType&) const;
    bool operator>(const MyType&) const;
    bool operator>=(const MyType&) const;
    bool operator<(const MyType&) const;
    bool operator<=(const MyType&) const;

    // Бинарные - присвоение
    MyType& operator=(const MyType&);
    MyType& operator+=(const MyType&);
    MyType& operator-=(const MyType&);
    MyType& operator*=(const MyType&);
    MyType& operator/=(const MyType&);
    MyType& operator%=(const MyType&);
    MyType& operator&=(const MyType&);
    MyType& operator|=(const MyType&);
    MyType& operator^=(const MyType&);
    MyType& operator<<=(const MyType&);
    MyType& operator>>=(const MyType&);

    // Бинарные - арифметические

    MyType operator+(const MyType&) const;
    MyType operator-(const MyType&) const;
    MyType operator*(const MyType&) const;
    MyType operator/(const MyType&) const;
    MyType operator%(const MyType&) const;
    MyType operator&(const MyType&) const;
    MyType operator|(const MyType&) const;
    MyType operator^(const MyType&) const;
    MyType operator<<(const MyType&) const;
    MyType operator>>(const MyType&) const;

    // Операторы доступа

    MyType &operator[](int b);
    MyType &operator*();


private:
    int first_path;
    double second_path;
};

#endif // MYTYPE_H
