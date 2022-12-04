#include "names_st.h"

int main(void)
{
    names candidate = {.first="John", .second="Smith"};
    show_name(&candidate);

    return 0;
}
