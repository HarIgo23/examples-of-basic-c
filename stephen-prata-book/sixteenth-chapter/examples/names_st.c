#include <stdio.h>
#include "names_st.h"

void show_name(const names * pn)
{
    printf("%s %s\n", pn->first, pn->second);
}
