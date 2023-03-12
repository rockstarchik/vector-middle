#include "middle_list.h"
#include <vector>
#include <string>

using namespace std;

long itc_sum_even_lst(const vector <int>& lst) {
    long sum = 0;
    for (int i = 0; i < lst.size(); i += 2) {
        sum = sum + lst[i];
    }
    return sum;
}
long itc_sum_even_part_lst(const vector <int>& lst) {
    long sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] % 2 == 0)
            sum = sum + lst[i];
    }
    return sum;
}

void itc_odd_even_separator_lst(const vector <int>& lst, vector <int>& lst1, vector <int>& lst2) {
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] % 2 == 0) 
            lst1.push_back(lst[i]);
        else 
            lst2.push_back(lst[i]);
    }
    for (int a = 0; a < lst1.size(); a++) {
        cout << lst1[a] << ' ';
    }
    for (int r = 0; r < lst2.size(); r++) {
        cout << lst2[r] << ' ';
    }
}

