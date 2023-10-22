#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
#define nl "\n"
#define ll long long

//* PRINT PAIR
template <typename T, typename U>
ostream &operator<<(ostream &stream, const pair<T, U> &p)
{
    return stream << "(" << p.first << ", " << p.second << ")";
}
//* SCAN PAIR
template <typename T, typename U>
istream &operator>>(istream &stream, const pair<T, U> &p)
{
    return stream >> p.first >> p.second;
}
//* PRINT VECTOR
template <typename T>
ostream &operator<<(ostream &stream, const vector<T> &v)
{
    stream << "[";
    for (int i = 0; i < v.size(); i++)
    {
        stream << v[i];
        if (i != v.size() - 1)
            stream << ", ";
    }
    return stream << "]";
}
//* SCAN VECTOR
template <typename T>
istream &operator>>(istream &stream, vector<T> &v)
{
    for (auto &x : v)
    {
        stream >> x;
    }
    return stream;
}
//* PRINT MAP
template <typename T, typename U>
ostream &operator<<(ostream &stream, const map<T, U> &m)
{
    stream << "{";
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it != m.begin())
            stream << ", ";
        stream << it->first << "-> " << it->second;
    }
    return stream << "}";
}
//! SCAN MAP :: CAN'T DO LIKE THIS
// template <typename T, typename U>
// istream &operator>>(istream &stream, map<T, U> &m)
// {
//     T key;
//     U value;
//     while (stream >> key >> value)
//     {
//         m[key] = value;
//     }
//     return stream;
// }
//* PRINT SET
template <typename T>
ostream &operator<<(ostream &stream, const set<T> &s)
{
    stream << "{";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (it != s.begin())
            stream << ", ";
        stream << *it;
    }
    return stream << "}";
}
//* SCAN SET
template <typename T, typename U>
istream &operator>>(istream &stream, set<T> &s)
{
    for (auto &x : s)
    {
        stream >> x;
    }
    return stream;
}
//* CHECK IF ALL CONDITION IS MET
template <typename Iterator, typename CheckFunction>
bool all(Iterator first, Iterator last, CheckFunction check)
{
    for (Iterator it = first; it != last; ++it)
    {
        if (!check(*it))
        {
            return false; // Custom check function returned false
        }
    }
    return true; // All elements passed the check
}

int main(int argc, char const *argv[])
{
    cout << "CP TEMPLATE" << nl;
    return 0;
}