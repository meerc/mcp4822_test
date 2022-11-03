#include "mcp4822.h"
#include <stdint.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main()
{
    bool chk=true;
    uint16_t i=1000u;

    mcp4822_initialize();


    while(chk== true&& i<4095u)
    {

    chk=mcp4822_set_voltage(MCP_4822_CHANNEL_A,i);
    }


    mcp4822_initialize();

    return(0);
}
