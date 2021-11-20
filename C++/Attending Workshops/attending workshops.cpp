/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 *
/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

//Define the structs Workshops and Available_Workshops.
struct Workshop {
    int start, duration, end;
};

struct Available_Workshops {
    int n;
    Workshop** workshops;
    Available_Workshops(int num) {
        n = num;
        workshops = new Workshop * [num];
    }
    ~Available_Workshops() {
        for (int i = 0; i < n; i++) {
            delete workshops[i];
        }
    }
};

// Implement the initialize function
Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* av_workshops = new Available_Workshops(n);
    for (int i = 0; i < n; ++i) {
        Workshop* wk = new Workshop;
        wk->start = start_time[i];
        wk->duration = duration[i];
        wk->end = start_time[i] + duration[i];
        av_workshops->workshops[i] = wk;
    }
    return av_workshops;
}

bool compare(Workshop* one, Workshop* two) {
    return one->end < two->end;
}
//Implement the function CalculateMaxWorkshops
int CalculateMaxWorkshops(Available_Workshops* ptr) {
    // Sort workshops
    sort(ptr->workshops, ptr->workshops + ptr->n, compare);

    // Calculate
    int valid = 0;
    int attending_end = 0;
    for (int i = 0; i < ptr->n; ++i) {
        if (ptr->workshops[i]->start >= attending_end) {
            valid++;
            attending_end = ptr->workshops[i]->end;
        }
    }

    return valid;
}