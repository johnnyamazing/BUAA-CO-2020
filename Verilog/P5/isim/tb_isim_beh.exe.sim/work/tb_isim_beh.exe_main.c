/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002857612654_1451755364_init();
    work_m_00000000000764318969_2885957937_init();
    work_m_00000000003707517904_3683593905_init();
    work_m_00000000001728242209_4127636709_init();
    work_m_00000000000895178044_3375560057_init();
    work_m_00000000003448177922_2725559894_init();
    work_m_00000000002061791889_3207205754_init();
    work_m_00000000003168715752_0010801604_init();
    work_m_00000000000093666277_1586474674_init();
    work_m_00000000003168103425_2175365797_init();
    work_m_00000000002802984327_1194926530_init();
    work_m_00000000002926396869_3877310806_init();
    work_m_00000000002047498008_3671711236_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_3671711236");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
