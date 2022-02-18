#include "mytype.h"

MyType::MyType(const MyType& b)
{
    this->first_path = b.first_path;
    this->second_path = b.second_path;
}

// ====================
// Унарные
// ====================

const MyType &MyType::operator+()
{
    return *this;
}

const MyType MyType::operator-()
{
    MyType newMyType(-(*this).first_path, -(*this).second_path);
    return newMyType;
}

const MyType &MyType::operator++()
{
    this->first_path += 1;
    this->second_path += 1;
    return *this;
}

const MyType MyType::operator++(int i)
{
    MyType newMyType(this->first_path, this->second_path);
    this->first_path += 1;
    this->second_path += 1;
    return newMyType;
}

const MyType &MyType::operator--()
{
    this->first_path -= 1;
    this->second_path -= 1;
    return *this;
}

const MyType MyType::operator--(int i)
{
    MyType newMyType(this->first_path, this->second_path);
    this->first_path -= 1;
    this->second_path -= 1;
    return newMyType;
}

// ====================
// Бинарные - сравнение
// ====================

bool MyType::operator==(const MyType &b) const
{
    if(this->first_path == b.first_path
            && this->second_path == b.second_path)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool MyType::operator!=(const MyType &b) const
{
    return !(*this == b);
}

bool MyType::operator>(const MyType &b) const
{
    if(this->first_path > b.first_path
       && this->second_path > b.second_path)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool MyType::operator>=(const MyType &b) const
{
    return *this > b || *this == b;
}

bool MyType::operator<(const MyType &b) const
{
    return !(*this >= b);
}

bool MyType::operator<=(const MyType &b) const
{
    return *this < b || *this == b;
}

// ====================
// Бинарные - присвоение
// ====================

MyType &MyType::operator=(const MyType &b)
{
    if(*this == b)
    {
        return *this;
    }
    else
    {
        this->first_path = b.first_path;
        this->second_path = b.second_path;
    }

    return *this;
}

MyType &MyType::operator+=(const MyType &b)
{
    this->first_path += b.first_path;
    this->second_path += b.second_path;

    return *this;
}

MyType &MyType::operator-=(const MyType &b)
{
    this->first_path -= b.first_path;
    this->second_path -= b.second_path;

    return *this;
}

MyType &MyType::operator*=(const MyType &b)
{
    this->first_path *= b.first_path;
    this->second_path *= b.second_path;

    return *this;
}

MyType &MyType::operator/=(const MyType &b)
{
    this->first_path /= b.first_path;
    this->second_path /= b.second_path;

    return *this;
}

MyType &MyType::operator%=(const MyType &b)
{
    this->first_path %= b.first_path;

    return *this;
}

MyType &MyType::operator&=(const MyType &b)
{
    this->first_path &= b.first_path;

    return *this;
}

MyType &MyType::operator|=(const MyType &b)
{
    this->first_path |= b.first_path;

    return *this;
}

MyType &MyType::operator^=(const MyType &b)
{
    this->first_path ^= b.first_path;

    return *this;
}

MyType &MyType::operator<<=(const MyType &b)
{
    this->first_path <<= b.first_path;

    return *this;
}

MyType &MyType::operator>>=(const MyType &b)
{
    this->first_path >>= b.first_path;

    return *this;
}

MyType MyType::operator+(const MyType &b) const
{
    MyType result = *this;
    result += b;

    return result;
}

MyType MyType::operator-(const MyType &b) const
{
    MyType result = *this;
    result -= b;

    return result;
}

MyType MyType::operator*(const MyType &b) const
{
    MyType result = *this;
    result *= b;

    return result;
}

MyType MyType::operator/(const MyType &b) const
{
    MyType result = *this;
    result /= b;

    return result;
}

MyType MyType::operator%(const MyType &b) const
{
    MyType result = *this;
    result %= b;

    return result;
}

MyType MyType::operator&(const MyType &b) const
{
    MyType result = *this;
    result &= b;

    return result;
}

MyType MyType::operator|(const MyType &b) const
{
    MyType result = *this;
    result |= b;

    return result;
}

MyType MyType::operator^(const MyType &b) const
{
    MyType result = *this;
    result ^= b;

    return result;
}

MyType MyType::operator<<(const MyType &b) const
{
    MyType result = *this;
    result <<= b;

    return result;
}

MyType MyType::operator>>(const MyType &b) const
{
    MyType result = *this;
    result >>= b;

    return result;
}

MyType& MyType::operator[](int b)
{
    return *(this + b);
}

MyType& MyType::operator*()
{
    return *this;
}








