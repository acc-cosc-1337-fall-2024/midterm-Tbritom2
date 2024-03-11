#include "question2.h"

double get_sales_commission(double sales) {
    if (sales < 0) {
        return 0;
    } else if (sales >= 0 && sales < 500) {
        return sales * 0.05;
    } else if (sales >= 500 && sales < 1000) {
        return sales * 0.06;
    } else if (sales >= 1000 && sales < 1500) {
        return sales * 0.07;
    } else {
        return sales * 0.08;
    }
}