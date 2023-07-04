#include <stdio.h>
#include "ssd.h"

double get_WAF (ssd_t* my_ssd) {
        printf("traffic_ftl    : %d\n", my_ssd->traff_ftl);
        printf("traffic_client : %d\n", my_ssd->traff_client);
        double WAF = (double)( my_ssd->traff_ftl / my_ssd->traff_client );
        return WAF;
}