#include "middle_list.h"
#include <vector>
#include <string>

using namespace std;

void itc_pos_neg_analysis_lst(const vector <int>& lst) {
    int kolpos = 0;
    int kolneg = 0;
    int nulls = 0;
    int maxpos = 0;
    int maxneg = -2147483648;
    int minpos = 2147483647;
    int minneg = 0;
    int sumpos = 0;
    int sumneg = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] == 0){
            nulls = nulls + 1;
         cout << nulls << endl;
        }
        if (lst[i] > 0) {
            kolpos++;
            if (lst[i] < minpos)
                minpos = lst[i];

            if (lst[i] > maxpos)
                maxpos = lst[i];
            sumpos = sumpos + lst[i];
        }
        if(lst[i] < 0){
            kolneg++;
            if (lst[i] < minneg)
                minneg = lst[i];
            if (lst[i] > maxneg)
               maxneg = lst[i];
            sumneg = sumneg + lst[i];
        }
    }
        cout << "Positive:" << "       " << "Negative:" << endl;
        cout << "Number of numbers:" << kolpos << ',' << "        " << "Number of numbers: " << kolneg << ',' << endl;
        cout << "Maximum digit: " << maxpos << ',' << "        " << "Maximum digit:" << maxneg << ',' << endl;
        cout << "Minimum digit:" << minpos << ',' << "        " << "Minimum digit:" << minneg << ',' << endl;
        cout << "Sum of numbers:" << sumpos << ',' << "        " << "Sum of numbers:" << sumneg << ',' << endl;
        cout << "Average value:" << sumpos / kolpos << ',' << "        " << "Average value:" << sumneg / kolneg << endl;
        cout << "Number of zeros:" << nulls;
}
