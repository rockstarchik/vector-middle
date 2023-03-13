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
    if (lst.size() > 0) {
        for (int i = 0; i < lst.size() - 1; i++) {
            str = str + lst[i];
            str = str + sep;
        }
        str = str + lst[lst.size() - 1];
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
    string d = "";
    int a = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; less[j] != '\0'; ++j) {
            if (less[j] == str[i]) {
                a = 1;
            }
            if (a == 0) {
                d = d + str[i];
                a = 0;
            }
        }
    }
    return d;
}

long itc_sumlst(const vector <int>& lst){
    long long sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        sum = sum + lst[i];
    }
    return sum;
}