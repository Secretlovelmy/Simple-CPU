//
// Created by Yu Yang on 11/20/20.
//
#include <stdio.h>
#include <stdlib.h>

#include "cpu.h"

int
main(int argc, char const* argv[])
{
    if (argc != 4) {
        fprintf(stderr, "APEX_Help : Usage %s <input_file>\n", argv[0]);
        exit(1);
    }

    APEX_CPU* cpu = APEX_cpu_init(argv[1],argv[2],argv[3]);

    if (!cpu) {
        fprintf(stderr, "APEX_Error : Unable to initialize CPU\n");
        exit(1);
    }



    APEX_cpu_run(cpu);
    APEX_cpu_stop(cpu);
    return 0;
}
