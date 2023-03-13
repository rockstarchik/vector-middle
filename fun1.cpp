#include "middle_list.h"
#include <vector>
#include <string>

using namespace std;

vector <char> itc_strtlist(string str) {
    vector <char> mass;
for (int i = 0; i < str.size(); i++) {
    mass.push_back(str[i]);
}
return mass;
}

string itc_join(vector <char> lst, string sep) {
    string str = "";
    for (int i = 0; i < lst.size(); i++) {
        str = str + lst[i];
        str = str + sep;
    }
    return str;
}

string itc_rmstrspc(string str) {
    string a = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != ' ') {
            a = a + str[i];
        }
    }
    return a;
}

string itc_rmstrchar(string str, string less) {
    int d = 0;
    string t = "";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == less[d]) {
            d++;
        }
        t = t + str[i];
    }
    return t;
}

long itc_sumlst(const vector <int>& lst){
    long sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        sum = sum + lst[i];
    }
    return sum;
}