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

void itc_pos_neg_separator_lst(const vector <int>& lst, vector <int>& lst1, vector <int>& lst2, vector <int>& lst3) {
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] == 0)
            lst1.push_back(lst[i]);
        else if (lst[i] < 0)
            lst3.push_back(lst[i]);
        else if (lst[i] > 0)
            lst2.push_back(lst[i]);
    }
    for (int i = 0; i < lst3.size(); i++) {
        cout << ' ' << lst3[i];
    }
    cout << ", ";
    for (int i = 0; i < lst1.size(); i++) {
        cout << " " << lst1[i];
    }
    cout << ",  ";
    for (int i = 1; i < lst2.size(); i++) {
        cout << "  " << lst2[i];
    }
}
void itc_odd_even_analysis_lst(const vector <int>& lst) {
    int chet = 0;
    int nechet = 0;
    int maxchet = 0;
    int maxnechet = 0;
    int minchet = 0;
    int minnechet = 0;
    int sumchet = 0;
    int sumnechet = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] % 2 == 0) {
            chet++;
            if (maxchet < lst[i])
                maxchet = lst[i];
            if (minchet > lst[i])
                minchet = lst[i];
            sumchet = sumchet + lst[i];
        }
        else {
            nechet++;
            if (maxnechet < lst[i])
                maxnechet = lst[i];
            if (minnechet > lst[i])
                minnechet = lst[i];
            sumnechet = sumnechet + lst[i];
        }
    }
        cout << "List Analysis:" << endl;
        cout << "Number of even numbers:" << chet << "," << "        " << "Number of odd numbers:" << nechet << "," << endl;
        cout << "Maximum even digit:" << maxchet << "," << "        " << "Maximum odd digit:" << maxnechet << "," << endl;
        cout << "Minimum even digit:" << minchet << "," << "        " << "Minimum odd digit:" << minnechet << "," << endl;
        cout << "Sum of even numbers:" << sumchet << "," << "        " << "Sum of odd numbers:" << sumnechet << ",";
    
}
