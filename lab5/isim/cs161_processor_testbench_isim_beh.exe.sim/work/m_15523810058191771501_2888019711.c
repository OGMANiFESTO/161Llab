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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/extra/fbwog001/VirtualBox VMs/lab5/processor_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {35U, 0U};
static unsigned int ng4[] = {0U, 0U};
static const char *ng5 = "Load word ";
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static const char *ng8 = "failed";
static const char *ng9 = "passed";
static const char *ng10 = "Store Word Test";
static unsigned int ng11[] = {43U, 0U};
static const char *ng12 = "Store word ";
static const char *ng13 = "BEQ Test";
static unsigned int ng14[] = {4U, 0U};
static const char *ng15 = "BEQ ";
static unsigned int ng16[] = {6U, 0U};
static const char *ng17 = "Test Case 1: (init.coe)...";
static const char *ng18 = "failed. Expected %0d but got %0d.";
static const char *ng19 = "------------------------------------------------------------------";
static const char *ng20 = "Testing complete\nPassed %0d / %0d tests.";



static void Initial_44_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 6360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);

LAB4:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 6168);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 6168);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 6168);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(58, ng0);

LAB8:    xsi_set_current_line(58, ng0);

LAB9:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 6168);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 4168);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t7) == 0)
        goto LAB11;

LAB13:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB14:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB16;

LAB15:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 4168);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB8;

LAB11:    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB16:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB15;

LAB17:    goto LAB1;

}

static void Initial_67_1(char *t0)
{
    char t6[8];
    char t20[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t90[8];
    char t104[8];
    char t120[8];
    char t128[8];
    char t160[8];
    char t174[8];
    char t190[8];
    char t198[8];
    char t230[8];
    char t244[8];
    char t260[8];
    char t268[8];
    char t300[8];
    char t314[8];
    char t330[8];
    char t338[8];
    char t370[8];
    char t384[8];
    char t400[8];
    char t408[8];
    char t440[8];
    char t456[8];
    char t472[8];
    char t480[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    int t152;
    int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    char *t203;
    char *t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t212;
    char *t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    int t222;
    int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    char *t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t237;
    char *t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    char *t242;
    char *t243;
    char *t245;
    char *t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    char *t259;
    char *t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    char *t267;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    char *t272;
    char *t273;
    char *t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    char *t282;
    char *t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    int t292;
    int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    char *t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    char *t307;
    char *t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    char *t312;
    char *t313;
    char *t315;
    char *t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    unsigned int t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    char *t329;
    char *t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    unsigned int t336;
    char *t337;
    unsigned int t339;
    unsigned int t340;
    unsigned int t341;
    char *t342;
    char *t343;
    char *t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    unsigned int t351;
    char *t352;
    char *t353;
    unsigned int t354;
    unsigned int t355;
    unsigned int t356;
    unsigned int t357;
    unsigned int t358;
    unsigned int t359;
    unsigned int t360;
    unsigned int t361;
    int t362;
    int t363;
    unsigned int t364;
    unsigned int t365;
    unsigned int t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    char *t371;
    unsigned int t372;
    unsigned int t373;
    unsigned int t374;
    unsigned int t375;
    unsigned int t376;
    char *t377;
    char *t378;
    unsigned int t379;
    unsigned int t380;
    unsigned int t381;
    char *t382;
    char *t383;
    char *t385;
    char *t386;
    unsigned int t387;
    unsigned int t388;
    unsigned int t389;
    unsigned int t390;
    unsigned int t391;
    unsigned int t392;
    unsigned int t393;
    unsigned int t394;
    unsigned int t395;
    unsigned int t396;
    unsigned int t397;
    unsigned int t398;
    char *t399;
    char *t401;
    unsigned int t402;
    unsigned int t403;
    unsigned int t404;
    unsigned int t405;
    unsigned int t406;
    char *t407;
    unsigned int t409;
    unsigned int t410;
    unsigned int t411;
    char *t412;
    char *t413;
    char *t414;
    unsigned int t415;
    unsigned int t416;
    unsigned int t417;
    unsigned int t418;
    unsigned int t419;
    unsigned int t420;
    unsigned int t421;
    char *t422;
    char *t423;
    unsigned int t424;
    unsigned int t425;
    unsigned int t426;
    unsigned int t427;
    unsigned int t428;
    unsigned int t429;
    unsigned int t430;
    unsigned int t431;
    int t432;
    int t433;
    unsigned int t434;
    unsigned int t435;
    unsigned int t436;
    unsigned int t437;
    unsigned int t438;
    unsigned int t439;
    char *t441;
    unsigned int t442;
    unsigned int t443;
    unsigned int t444;
    unsigned int t445;
    unsigned int t446;
    char *t447;
    char *t448;
    unsigned int t449;
    unsigned int t450;
    unsigned int t451;
    char *t452;
    char *t453;
    char *t454;
    char *t455;
    char *t457;
    char *t458;
    unsigned int t459;
    unsigned int t460;
    unsigned int t461;
    unsigned int t462;
    unsigned int t463;
    unsigned int t464;
    unsigned int t465;
    unsigned int t466;
    unsigned int t467;
    unsigned int t468;
    unsigned int t469;
    unsigned int t470;
    char *t471;
    char *t473;
    unsigned int t474;
    unsigned int t475;
    unsigned int t476;
    unsigned int t477;
    unsigned int t478;
    char *t479;
    unsigned int t481;
    unsigned int t482;
    unsigned int t483;
    char *t484;
    char *t485;
    char *t486;
    unsigned int t487;
    unsigned int t488;
    unsigned int t489;
    unsigned int t490;
    unsigned int t491;
    unsigned int t492;
    unsigned int t493;
    char *t494;
    char *t495;
    unsigned int t496;
    unsigned int t497;
    unsigned int t498;
    unsigned int t499;
    unsigned int t500;
    unsigned int t501;
    unsigned int t502;
    unsigned int t503;
    int t504;
    int t505;
    unsigned int t506;
    unsigned int t507;
    unsigned int t508;
    unsigned int t509;
    unsigned int t510;
    unsigned int t511;
    char *t512;
    unsigned int t513;
    unsigned int t514;
    unsigned int t515;
    unsigned int t516;
    unsigned int t517;

LAB0:    t1 = (t0 + 6608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);

LAB4:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 7176);
    *((int *)t2) = 1;
    t3 = (t0 + 6640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 7192);
    *((int *)t2) = 1;
    t3 = (t0 + 6640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 6416);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(76, ng0);
    xsi_vlogfile_write(0, 0, 1, ng5, 1, t0);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4808);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 6416);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB10;

LAB9:    if (t17 != 0)
        goto LAB11;

LAB12:    memset(t20, 0, 8);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t21) != 0)
        goto LAB15;

LAB16:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB17;

LAB18:    memcpy(t58, t20, 8);

LAB19:    memset(t90, 0, 8);
    t91 = (t58 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t91) != 0)
        goto LAB33;

LAB34:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB35;

LAB36:    memcpy(t128, t90, 8);

LAB37:    memset(t160, 0, 8);
    t161 = (t128 + 4);
    t162 = *((unsigned int *)t161);
    t163 = (~(t162));
    t164 = *((unsigned int *)t128);
    t165 = (t164 & t163);
    t166 = (t165 & 1U);
    if (t166 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t161) != 0)
        goto LAB51;

LAB52:    t168 = (t160 + 4);
    t169 = *((unsigned int *)t160);
    t170 = *((unsigned int *)t168);
    t171 = (t169 || t170);
    if (t171 > 0)
        goto LAB53;

LAB54:    memcpy(t198, t160, 8);

LAB55:    memset(t230, 0, 8);
    t231 = (t198 + 4);
    t232 = *((unsigned int *)t231);
    t233 = (~(t232));
    t234 = *((unsigned int *)t198);
    t235 = (t234 & t233);
    t236 = (t235 & 1U);
    if (t236 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t231) != 0)
        goto LAB69;

LAB70:    t238 = (t230 + 4);
    t239 = *((unsigned int *)t230);
    t240 = *((unsigned int *)t238);
    t241 = (t239 || t240);
    if (t241 > 0)
        goto LAB71;

LAB72:    memcpy(t268, t230, 8);

LAB73:    memset(t300, 0, 8);
    t301 = (t268 + 4);
    t302 = *((unsigned int *)t301);
    t303 = (~(t302));
    t304 = *((unsigned int *)t268);
    t305 = (t304 & t303);
    t306 = (t305 & 1U);
    if (t306 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t301) != 0)
        goto LAB87;

LAB88:    t308 = (t300 + 4);
    t309 = *((unsigned int *)t300);
    t310 = *((unsigned int *)t308);
    t311 = (t309 || t310);
    if (t311 > 0)
        goto LAB89;

LAB90:    memcpy(t338, t300, 8);

LAB91:    memset(t370, 0, 8);
    t371 = (t338 + 4);
    t372 = *((unsigned int *)t371);
    t373 = (~(t372));
    t374 = *((unsigned int *)t338);
    t375 = (t374 & t373);
    t376 = (t375 & 1U);
    if (t376 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t371) != 0)
        goto LAB105;

LAB106:    t378 = (t370 + 4);
    t379 = *((unsigned int *)t370);
    t380 = *((unsigned int *)t378);
    t381 = (t379 || t380);
    if (t381 > 0)
        goto LAB107;

LAB108:    memcpy(t408, t370, 8);

LAB109:    memset(t440, 0, 8);
    t441 = (t408 + 4);
    t442 = *((unsigned int *)t441);
    t443 = (~(t442));
    t444 = *((unsigned int *)t408);
    t445 = (t444 & t443);
    t446 = (t445 & 1U);
    if (t446 != 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t441) != 0)
        goto LAB123;

LAB124:    t448 = (t440 + 4);
    t449 = *((unsigned int *)t440);
    t450 = *((unsigned int *)t448);
    t451 = (t449 || t450);
    if (t451 > 0)
        goto LAB125;

LAB126:    memcpy(t480, t440, 8);

LAB127:    t512 = (t480 + 4);
    t513 = *((unsigned int *)t512);
    t514 = (~(t513));
    t515 = *((unsigned int *)t480);
    t516 = (t515 & t514);
    t517 = (t516 != 0);
    if (t517 > 0)
        goto LAB139;

LAB140:    xsi_set_current_line(82, ng0);

LAB143:    xsi_set_current_line(83, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);

LAB141:    xsi_set_current_line(88, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(91, ng0);
    xsi_vlogfile_write(0, 0, 1, ng12, 1, t0);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4808);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 6416);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB144;
    goto LAB1;

LAB10:    *((unsigned int *)t6) = 1;
    goto LAB12;

LAB11:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB12;

LAB13:    *((unsigned int *)t20) = 1;
    goto LAB16;

LAB15:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB16;

LAB17:    t32 = (t0 + 3128U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng6)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB21;

LAB20:    if (t46 != 0)
        goto LAB22;

LAB23:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t51) != 0)
        goto LAB26;

LAB27:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB19;

LAB21:    *((unsigned int *)t34) = 1;
    goto LAB23;

LAB22:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t50) = 1;
    goto LAB27;

LAB26:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB27;

LAB28:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB30;

LAB31:    *((unsigned int *)t90) = 1;
    goto LAB34;

LAB33:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB34;

LAB35:    t102 = (t0 + 2808U);
    t103 = *((char **)t102);
    t102 = ((char*)((ng6)));
    memset(t104, 0, 8);
    t105 = (t103 + 4);
    t106 = (t102 + 4);
    t107 = *((unsigned int *)t103);
    t108 = *((unsigned int *)t102);
    t109 = (t107 ^ t108);
    t110 = *((unsigned int *)t105);
    t111 = *((unsigned int *)t106);
    t112 = (t110 ^ t111);
    t113 = (t109 | t112);
    t114 = *((unsigned int *)t105);
    t115 = *((unsigned int *)t106);
    t116 = (t114 | t115);
    t117 = (~(t116));
    t118 = (t113 & t117);
    if (t118 != 0)
        goto LAB39;

LAB38:    if (t116 != 0)
        goto LAB40;

LAB41:    memset(t120, 0, 8);
    t121 = (t104 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t104);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t121) != 0)
        goto LAB44;

LAB45:    t129 = *((unsigned int *)t90);
    t130 = *((unsigned int *)t120);
    t131 = (t129 & t130);
    *((unsigned int *)t128) = t131;
    t132 = (t90 + 4);
    t133 = (t120 + 4);
    t134 = (t128 + 4);
    t135 = *((unsigned int *)t132);
    t136 = *((unsigned int *)t133);
    t137 = (t135 | t136);
    *((unsigned int *)t134) = t137;
    t138 = *((unsigned int *)t134);
    t139 = (t138 != 0);
    if (t139 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB37;

LAB39:    *((unsigned int *)t104) = 1;
    goto LAB41;

LAB40:    t119 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t120) = 1;
    goto LAB45;

LAB44:    t127 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB45;

LAB46:    t140 = *((unsigned int *)t128);
    t141 = *((unsigned int *)t134);
    *((unsigned int *)t128) = (t140 | t141);
    t142 = (t90 + 4);
    t143 = (t120 + 4);
    t144 = *((unsigned int *)t90);
    t145 = (~(t144));
    t146 = *((unsigned int *)t142);
    t147 = (~(t146));
    t148 = *((unsigned int *)t120);
    t149 = (~(t148));
    t150 = *((unsigned int *)t143);
    t151 = (~(t150));
    t152 = (t145 & t147);
    t153 = (t149 & t151);
    t154 = (~(t152));
    t155 = (~(t153));
    t156 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t156 & t154);
    t157 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t157 & t155);
    t158 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t158 & t154);
    t159 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t159 & t155);
    goto LAB48;

LAB49:    *((unsigned int *)t160) = 1;
    goto LAB52;

LAB51:    t167 = (t160 + 4);
    *((unsigned int *)t160) = 1;
    *((unsigned int *)t167) = 1;
    goto LAB52;

LAB53:    t172 = (t0 + 3288U);
    t173 = *((char **)t172);
    t172 = ((char*)((ng6)));
    memset(t174, 0, 8);
    t175 = (t173 + 4);
    t176 = (t172 + 4);
    t177 = *((unsigned int *)t173);
    t178 = *((unsigned int *)t172);
    t179 = (t177 ^ t178);
    t180 = *((unsigned int *)t175);
    t181 = *((unsigned int *)t176);
    t182 = (t180 ^ t181);
    t183 = (t179 | t182);
    t184 = *((unsigned int *)t175);
    t185 = *((unsigned int *)t176);
    t186 = (t184 | t185);
    t187 = (~(t186));
    t188 = (t183 & t187);
    if (t188 != 0)
        goto LAB57;

LAB56:    if (t186 != 0)
        goto LAB58;

LAB59:    memset(t190, 0, 8);
    t191 = (t174 + 4);
    t192 = *((unsigned int *)t191);
    t193 = (~(t192));
    t194 = *((unsigned int *)t174);
    t195 = (t194 & t193);
    t196 = (t195 & 1U);
    if (t196 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t191) != 0)
        goto LAB62;

LAB63:    t199 = *((unsigned int *)t160);
    t200 = *((unsigned int *)t190);
    t201 = (t199 & t200);
    *((unsigned int *)t198) = t201;
    t202 = (t160 + 4);
    t203 = (t190 + 4);
    t204 = (t198 + 4);
    t205 = *((unsigned int *)t202);
    t206 = *((unsigned int *)t203);
    t207 = (t205 | t206);
    *((unsigned int *)t204) = t207;
    t208 = *((unsigned int *)t204);
    t209 = (t208 != 0);
    if (t209 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB55;

LAB57:    *((unsigned int *)t174) = 1;
    goto LAB59;

LAB58:    t189 = (t174 + 4);
    *((unsigned int *)t174) = 1;
    *((unsigned int *)t189) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t190) = 1;
    goto LAB63;

LAB62:    t197 = (t190 + 4);
    *((unsigned int *)t190) = 1;
    *((unsigned int *)t197) = 1;
    goto LAB63;

LAB64:    t210 = *((unsigned int *)t198);
    t211 = *((unsigned int *)t204);
    *((unsigned int *)t198) = (t210 | t211);
    t212 = (t160 + 4);
    t213 = (t190 + 4);
    t214 = *((unsigned int *)t160);
    t215 = (~(t214));
    t216 = *((unsigned int *)t212);
    t217 = (~(t216));
    t218 = *((unsigned int *)t190);
    t219 = (~(t218));
    t220 = *((unsigned int *)t213);
    t221 = (~(t220));
    t222 = (t215 & t217);
    t223 = (t219 & t221);
    t224 = (~(t222));
    t225 = (~(t223));
    t226 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t226 & t224);
    t227 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t227 & t225);
    t228 = *((unsigned int *)t198);
    *((unsigned int *)t198) = (t228 & t224);
    t229 = *((unsigned int *)t198);
    *((unsigned int *)t198) = (t229 & t225);
    goto LAB66;

LAB67:    *((unsigned int *)t230) = 1;
    goto LAB70;

LAB69:    t237 = (t230 + 4);
    *((unsigned int *)t230) = 1;
    *((unsigned int *)t237) = 1;
    goto LAB70;

LAB71:    t242 = (t0 + 2648U);
    t243 = *((char **)t242);
    t242 = ((char*)((ng6)));
    memset(t244, 0, 8);
    t245 = (t243 + 4);
    t246 = (t242 + 4);
    t247 = *((unsigned int *)t243);
    t248 = *((unsigned int *)t242);
    t249 = (t247 ^ t248);
    t250 = *((unsigned int *)t245);
    t251 = *((unsigned int *)t246);
    t252 = (t250 ^ t251);
    t253 = (t249 | t252);
    t254 = *((unsigned int *)t245);
    t255 = *((unsigned int *)t246);
    t256 = (t254 | t255);
    t257 = (~(t256));
    t258 = (t253 & t257);
    if (t258 != 0)
        goto LAB75;

LAB74:    if (t256 != 0)
        goto LAB76;

LAB77:    memset(t260, 0, 8);
    t261 = (t244 + 4);
    t262 = *((unsigned int *)t261);
    t263 = (~(t262));
    t264 = *((unsigned int *)t244);
    t265 = (t264 & t263);
    t266 = (t265 & 1U);
    if (t266 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t261) != 0)
        goto LAB80;

LAB81:    t269 = *((unsigned int *)t230);
    t270 = *((unsigned int *)t260);
    t271 = (t269 & t270);
    *((unsigned int *)t268) = t271;
    t272 = (t230 + 4);
    t273 = (t260 + 4);
    t274 = (t268 + 4);
    t275 = *((unsigned int *)t272);
    t276 = *((unsigned int *)t273);
    t277 = (t275 | t276);
    *((unsigned int *)t274) = t277;
    t278 = *((unsigned int *)t274);
    t279 = (t278 != 0);
    if (t279 == 1)
        goto LAB82;

LAB83:
LAB84:    goto LAB73;

LAB75:    *((unsigned int *)t244) = 1;
    goto LAB77;

LAB76:    t259 = (t244 + 4);
    *((unsigned int *)t244) = 1;
    *((unsigned int *)t259) = 1;
    goto LAB77;

LAB78:    *((unsigned int *)t260) = 1;
    goto LAB81;

LAB80:    t267 = (t260 + 4);
    *((unsigned int *)t260) = 1;
    *((unsigned int *)t267) = 1;
    goto LAB81;

LAB82:    t280 = *((unsigned int *)t268);
    t281 = *((unsigned int *)t274);
    *((unsigned int *)t268) = (t280 | t281);
    t282 = (t230 + 4);
    t283 = (t260 + 4);
    t284 = *((unsigned int *)t230);
    t285 = (~(t284));
    t286 = *((unsigned int *)t282);
    t287 = (~(t286));
    t288 = *((unsigned int *)t260);
    t289 = (~(t288));
    t290 = *((unsigned int *)t283);
    t291 = (~(t290));
    t292 = (t285 & t287);
    t293 = (t289 & t291);
    t294 = (~(t292));
    t295 = (~(t293));
    t296 = *((unsigned int *)t274);
    *((unsigned int *)t274) = (t296 & t294);
    t297 = *((unsigned int *)t274);
    *((unsigned int *)t274) = (t297 & t295);
    t298 = *((unsigned int *)t268);
    *((unsigned int *)t268) = (t298 & t294);
    t299 = *((unsigned int *)t268);
    *((unsigned int *)t268) = (t299 & t295);
    goto LAB84;

LAB85:    *((unsigned int *)t300) = 1;
    goto LAB88;

LAB87:    t307 = (t300 + 4);
    *((unsigned int *)t300) = 1;
    *((unsigned int *)t307) = 1;
    goto LAB88;

LAB89:    t312 = (t0 + 2968U);
    t313 = *((char **)t312);
    t312 = ((char*)((ng4)));
    memset(t314, 0, 8);
    t315 = (t313 + 4);
    t316 = (t312 + 4);
    t317 = *((unsigned int *)t313);
    t318 = *((unsigned int *)t312);
    t319 = (t317 ^ t318);
    t320 = *((unsigned int *)t315);
    t321 = *((unsigned int *)t316);
    t322 = (t320 ^ t321);
    t323 = (t319 | t322);
    t324 = *((unsigned int *)t315);
    t325 = *((unsigned int *)t316);
    t326 = (t324 | t325);
    t327 = (~(t326));
    t328 = (t323 & t327);
    if (t328 != 0)
        goto LAB93;

LAB92:    if (t326 != 0)
        goto LAB94;

LAB95:    memset(t330, 0, 8);
    t331 = (t314 + 4);
    t332 = *((unsigned int *)t331);
    t333 = (~(t332));
    t334 = *((unsigned int *)t314);
    t335 = (t334 & t333);
    t336 = (t335 & 1U);
    if (t336 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t331) != 0)
        goto LAB98;

LAB99:    t339 = *((unsigned int *)t300);
    t340 = *((unsigned int *)t330);
    t341 = (t339 & t340);
    *((unsigned int *)t338) = t341;
    t342 = (t300 + 4);
    t343 = (t330 + 4);
    t344 = (t338 + 4);
    t345 = *((unsigned int *)t342);
    t346 = *((unsigned int *)t343);
    t347 = (t345 | t346);
    *((unsigned int *)t344) = t347;
    t348 = *((unsigned int *)t344);
    t349 = (t348 != 0);
    if (t349 == 1)
        goto LAB100;

LAB101:
LAB102:    goto LAB91;

LAB93:    *((unsigned int *)t314) = 1;
    goto LAB95;

LAB94:    t329 = (t314 + 4);
    *((unsigned int *)t314) = 1;
    *((unsigned int *)t329) = 1;
    goto LAB95;

LAB96:    *((unsigned int *)t330) = 1;
    goto LAB99;

LAB98:    t337 = (t330 + 4);
    *((unsigned int *)t330) = 1;
    *((unsigned int *)t337) = 1;
    goto LAB99;

LAB100:    t350 = *((unsigned int *)t338);
    t351 = *((unsigned int *)t344);
    *((unsigned int *)t338) = (t350 | t351);
    t352 = (t300 + 4);
    t353 = (t330 + 4);
    t354 = *((unsigned int *)t300);
    t355 = (~(t354));
    t356 = *((unsigned int *)t352);
    t357 = (~(t356));
    t358 = *((unsigned int *)t330);
    t359 = (~(t358));
    t360 = *((unsigned int *)t353);
    t361 = (~(t360));
    t362 = (t355 & t357);
    t363 = (t359 & t361);
    t364 = (~(t362));
    t365 = (~(t363));
    t366 = *((unsigned int *)t344);
    *((unsigned int *)t344) = (t366 & t364);
    t367 = *((unsigned int *)t344);
    *((unsigned int *)t344) = (t367 & t365);
    t368 = *((unsigned int *)t338);
    *((unsigned int *)t338) = (t368 & t364);
    t369 = *((unsigned int *)t338);
    *((unsigned int *)t338) = (t369 & t365);
    goto LAB102;

LAB103:    *((unsigned int *)t370) = 1;
    goto LAB106;

LAB105:    t377 = (t370 + 4);
    *((unsigned int *)t370) = 1;
    *((unsigned int *)t377) = 1;
    goto LAB106;

LAB107:    t382 = (t0 + 2488U);
    t383 = *((char **)t382);
    t382 = ((char*)((ng4)));
    memset(t384, 0, 8);
    t385 = (t383 + 4);
    t386 = (t382 + 4);
    t387 = *((unsigned int *)t383);
    t388 = *((unsigned int *)t382);
    t389 = (t387 ^ t388);
    t390 = *((unsigned int *)t385);
    t391 = *((unsigned int *)t386);
    t392 = (t390 ^ t391);
    t393 = (t389 | t392);
    t394 = *((unsigned int *)t385);
    t395 = *((unsigned int *)t386);
    t396 = (t394 | t395);
    t397 = (~(t396));
    t398 = (t393 & t397);
    if (t398 != 0)
        goto LAB111;

LAB110:    if (t396 != 0)
        goto LAB112;

LAB113:    memset(t400, 0, 8);
    t401 = (t384 + 4);
    t402 = *((unsigned int *)t401);
    t403 = (~(t402));
    t404 = *((unsigned int *)t384);
    t405 = (t404 & t403);
    t406 = (t405 & 1U);
    if (t406 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t401) != 0)
        goto LAB116;

LAB117:    t409 = *((unsigned int *)t370);
    t410 = *((unsigned int *)t400);
    t411 = (t409 & t410);
    *((unsigned int *)t408) = t411;
    t412 = (t370 + 4);
    t413 = (t400 + 4);
    t414 = (t408 + 4);
    t415 = *((unsigned int *)t412);
    t416 = *((unsigned int *)t413);
    t417 = (t415 | t416);
    *((unsigned int *)t414) = t417;
    t418 = *((unsigned int *)t414);
    t419 = (t418 != 0);
    if (t419 == 1)
        goto LAB118;

LAB119:
LAB120:    goto LAB109;

LAB111:    *((unsigned int *)t384) = 1;
    goto LAB113;

LAB112:    t399 = (t384 + 4);
    *((unsigned int *)t384) = 1;
    *((unsigned int *)t399) = 1;
    goto LAB113;

LAB114:    *((unsigned int *)t400) = 1;
    goto LAB117;

LAB116:    t407 = (t400 + 4);
    *((unsigned int *)t400) = 1;
    *((unsigned int *)t407) = 1;
    goto LAB117;

LAB118:    t420 = *((unsigned int *)t408);
    t421 = *((unsigned int *)t414);
    *((unsigned int *)t408) = (t420 | t421);
    t422 = (t370 + 4);
    t423 = (t400 + 4);
    t424 = *((unsigned int *)t370);
    t425 = (~(t424));
    t426 = *((unsigned int *)t422);
    t427 = (~(t426));
    t428 = *((unsigned int *)t400);
    t429 = (~(t428));
    t430 = *((unsigned int *)t423);
    t431 = (~(t430));
    t432 = (t425 & t427);
    t433 = (t429 & t431);
    t434 = (~(t432));
    t435 = (~(t433));
    t436 = *((unsigned int *)t414);
    *((unsigned int *)t414) = (t436 & t434);
    t437 = *((unsigned int *)t414);
    *((unsigned int *)t414) = (t437 & t435);
    t438 = *((unsigned int *)t408);
    *((unsigned int *)t408) = (t438 & t434);
    t439 = *((unsigned int *)t408);
    *((unsigned int *)t408) = (t439 & t435);
    goto LAB120;

LAB121:    *((unsigned int *)t440) = 1;
    goto LAB124;

LAB123:    t447 = (t440 + 4);
    *((unsigned int *)t440) = 1;
    *((unsigned int *)t447) = 1;
    goto LAB124;

LAB125:    t452 = (t0 + 3848);
    t453 = (t452 + 56U);
    t454 = *((char **)t453);
    t455 = ((char*)((ng7)));
    memset(t456, 0, 8);
    t457 = (t454 + 4);
    t458 = (t455 + 4);
    t459 = *((unsigned int *)t454);
    t460 = *((unsigned int *)t455);
    t461 = (t459 ^ t460);
    t462 = *((unsigned int *)t457);
    t463 = *((unsigned int *)t458);
    t464 = (t462 ^ t463);
    t465 = (t461 | t464);
    t466 = *((unsigned int *)t457);
    t467 = *((unsigned int *)t458);
    t468 = (t466 | t467);
    t469 = (~(t468));
    t470 = (t465 & t469);
    if (t470 != 0)
        goto LAB129;

LAB128:    if (t468 != 0)
        goto LAB130;

LAB131:    memset(t472, 0, 8);
    t473 = (t456 + 4);
    t474 = *((unsigned int *)t473);
    t475 = (~(t474));
    t476 = *((unsigned int *)t456);
    t477 = (t476 & t475);
    t478 = (t477 & 1U);
    if (t478 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t473) != 0)
        goto LAB134;

LAB135:    t481 = *((unsigned int *)t440);
    t482 = *((unsigned int *)t472);
    t483 = (t481 & t482);
    *((unsigned int *)t480) = t483;
    t484 = (t440 + 4);
    t485 = (t472 + 4);
    t486 = (t480 + 4);
    t487 = *((unsigned int *)t484);
    t488 = *((unsigned int *)t485);
    t489 = (t487 | t488);
    *((unsigned int *)t486) = t489;
    t490 = *((unsigned int *)t486);
    t491 = (t490 != 0);
    if (t491 == 1)
        goto LAB136;

LAB137:
LAB138:    goto LAB127;

LAB129:    *((unsigned int *)t456) = 1;
    goto LAB131;

LAB130:    t471 = (t456 + 4);
    *((unsigned int *)t456) = 1;
    *((unsigned int *)t471) = 1;
    goto LAB131;

LAB132:    *((unsigned int *)t472) = 1;
    goto LAB135;

LAB134:    t479 = (t472 + 4);
    *((unsigned int *)t472) = 1;
    *((unsigned int *)t479) = 1;
    goto LAB135;

LAB136:    t492 = *((unsigned int *)t480);
    t493 = *((unsigned int *)t486);
    *((unsigned int *)t480) = (t492 | t493);
    t494 = (t440 + 4);
    t495 = (t472 + 4);
    t496 = *((unsigned int *)t440);
    t497 = (~(t496));
    t498 = *((unsigned int *)t494);
    t499 = (~(t498));
    t500 = *((unsigned int *)t472);
    t501 = (~(t500));
    t502 = *((unsigned int *)t495);
    t503 = (~(t502));
    t504 = (t497 & t499);
    t505 = (t501 & t503);
    t506 = (~(t504));
    t507 = (~(t505));
    t508 = *((unsigned int *)t486);
    *((unsigned int *)t486) = (t508 & t506);
    t509 = *((unsigned int *)t486);
    *((unsigned int *)t486) = (t509 & t507);
    t510 = *((unsigned int *)t480);
    *((unsigned int *)t480) = (t510 & t506);
    t511 = *((unsigned int *)t480);
    *((unsigned int *)t480) = (t511 & t507);
    goto LAB138;

LAB139:    xsi_set_current_line(79, ng0);

LAB142:    xsi_set_current_line(80, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB141;

LAB144:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB146;

LAB145:    if (t17 != 0)
        goto LAB147;

LAB148:    memset(t20, 0, 8);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB149;

LAB150:    if (*((unsigned int *)t21) != 0)
        goto LAB151;

LAB152:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB153;

LAB154:    memcpy(t58, t20, 8);

LAB155:    memset(t90, 0, 8);
    t91 = (t58 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB167;

LAB168:    if (*((unsigned int *)t91) != 0)
        goto LAB169;

LAB170:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB171;

LAB172:    memcpy(t128, t90, 8);

LAB173:    memset(t160, 0, 8);
    t161 = (t128 + 4);
    t162 = *((unsigned int *)t161);
    t163 = (~(t162));
    t164 = *((unsigned int *)t128);
    t165 = (t164 & t163);
    t166 = (t165 & 1U);
    if (t166 != 0)
        goto LAB185;

LAB186:    if (*((unsigned int *)t161) != 0)
        goto LAB187;

LAB188:    t168 = (t160 + 4);
    t169 = *((unsigned int *)t160);
    t170 = *((unsigned int *)t168);
    t171 = (t169 || t170);
    if (t171 > 0)
        goto LAB189;

LAB190:    memcpy(t198, t160, 8);

LAB191:    memset(t230, 0, 8);
    t231 = (t198 + 4);
    t232 = *((unsigned int *)t231);
    t233 = (~(t232));
    t234 = *((unsigned int *)t198);
    t235 = (t234 & t233);
    t236 = (t235 & 1U);
    if (t236 != 0)
        goto LAB203;

LAB204:    if (*((unsigned int *)t231) != 0)
        goto LAB205;

LAB206:    t238 = (t230 + 4);
    t239 = *((unsigned int *)t230);
    t240 = *((unsigned int *)t238);
    t241 = (t239 || t240);
    if (t241 > 0)
        goto LAB207;

LAB208:    memcpy(t268, t230, 8);

LAB209:    memset(t300, 0, 8);
    t301 = (t268 + 4);
    t302 = *((unsigned int *)t301);
    t303 = (~(t302));
    t304 = *((unsigned int *)t268);
    t305 = (t304 & t303);
    t306 = (t305 & 1U);
    if (t306 != 0)
        goto LAB221;

LAB222:    if (*((unsigned int *)t301) != 0)
        goto LAB223;

LAB224:    t308 = (t300 + 4);
    t309 = *((unsigned int *)t300);
    t310 = *((unsigned int *)t308);
    t311 = (t309 || t310);
    if (t311 > 0)
        goto LAB225;

LAB226:    memcpy(t338, t300, 8);

LAB227:    t378 = (t338 + 4);
    t372 = *((unsigned int *)t378);
    t373 = (~(t372));
    t374 = *((unsigned int *)t338);
    t375 = (t374 & t373);
    t376 = (t375 != 0);
    if (t376 > 0)
        goto LAB239;

LAB240:    xsi_set_current_line(97, ng0);

LAB243:    xsi_set_current_line(98, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);

LAB241:    xsi_set_current_line(104, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(107, ng0);
    xsi_vlogfile_write(0, 0, 1, ng15, 1, t0);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4808);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 6416);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB244;
    goto LAB1;

LAB146:    *((unsigned int *)t6) = 1;
    goto LAB148;

LAB147:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB148;

LAB149:    *((unsigned int *)t20) = 1;
    goto LAB152;

LAB151:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB152;

LAB153:    t32 = (t0 + 3288U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng4)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB157;

LAB156:    if (t46 != 0)
        goto LAB158;

LAB159:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB160;

LAB161:    if (*((unsigned int *)t51) != 0)
        goto LAB162;

LAB163:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB164;

LAB165:
LAB166:    goto LAB155;

LAB157:    *((unsigned int *)t34) = 1;
    goto LAB159;

LAB158:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB159;

LAB160:    *((unsigned int *)t50) = 1;
    goto LAB163;

LAB162:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB163;

LAB164:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB166;

LAB167:    *((unsigned int *)t90) = 1;
    goto LAB170;

LAB169:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB170;

LAB171:    t102 = (t0 + 2648U);
    t103 = *((char **)t102);
    t102 = ((char*)((ng4)));
    memset(t104, 0, 8);
    t105 = (t103 + 4);
    t106 = (t102 + 4);
    t107 = *((unsigned int *)t103);
    t108 = *((unsigned int *)t102);
    t109 = (t107 ^ t108);
    t110 = *((unsigned int *)t105);
    t111 = *((unsigned int *)t106);
    t112 = (t110 ^ t111);
    t113 = (t109 | t112);
    t114 = *((unsigned int *)t105);
    t115 = *((unsigned int *)t106);
    t116 = (t114 | t115);
    t117 = (~(t116));
    t118 = (t113 & t117);
    if (t118 != 0)
        goto LAB175;

LAB174:    if (t116 != 0)
        goto LAB176;

LAB177:    memset(t120, 0, 8);
    t121 = (t104 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t104);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t121) != 0)
        goto LAB180;

LAB181:    t129 = *((unsigned int *)t90);
    t130 = *((unsigned int *)t120);
    t131 = (t129 & t130);
    *((unsigned int *)t128) = t131;
    t132 = (t90 + 4);
    t133 = (t120 + 4);
    t134 = (t128 + 4);
    t135 = *((unsigned int *)t132);
    t136 = *((unsigned int *)t133);
    t137 = (t135 | t136);
    *((unsigned int *)t134) = t137;
    t138 = *((unsigned int *)t134);
    t139 = (t138 != 0);
    if (t139 == 1)
        goto LAB182;

LAB183:
LAB184:    goto LAB173;

LAB175:    *((unsigned int *)t104) = 1;
    goto LAB177;

LAB176:    t119 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB177;

LAB178:    *((unsigned int *)t120) = 1;
    goto LAB181;

LAB180:    t127 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB181;

LAB182:    t140 = *((unsigned int *)t128);
    t141 = *((unsigned int *)t134);
    *((unsigned int *)t128) = (t140 | t141);
    t142 = (t90 + 4);
    t143 = (t120 + 4);
    t144 = *((unsigned int *)t90);
    t145 = (~(t144));
    t146 = *((unsigned int *)t142);
    t147 = (~(t146));
    t148 = *((unsigned int *)t120);
    t149 = (~(t148));
    t150 = *((unsigned int *)t143);
    t151 = (~(t150));
    t152 = (t145 & t147);
    t153 = (t149 & t151);
    t154 = (~(t152));
    t155 = (~(t153));
    t156 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t156 & t154);
    t157 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t157 & t155);
    t158 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t158 & t154);
    t159 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t159 & t155);
    goto LAB184;

LAB185:    *((unsigned int *)t160) = 1;
    goto LAB188;

LAB187:    t167 = (t160 + 4);
    *((unsigned int *)t160) = 1;
    *((unsigned int *)t167) = 1;
    goto LAB188;

LAB189:    t172 = (t0 + 2968U);
    t173 = *((char **)t172);
    t172 = ((char*)((ng6)));
    memset(t174, 0, 8);
    t175 = (t173 + 4);
    t176 = (t172 + 4);
    t177 = *((unsigned int *)t173);
    t178 = *((unsigned int *)t172);
    t179 = (t177 ^ t178);
    t180 = *((unsigned int *)t175);
    t181 = *((unsigned int *)t176);
    t182 = (t180 ^ t181);
    t183 = (t179 | t182);
    t184 = *((unsigned int *)t175);
    t185 = *((unsigned int *)t176);
    t186 = (t184 | t185);
    t187 = (~(t186));
    t188 = (t183 & t187);
    if (t188 != 0)
        goto LAB193;

LAB192:    if (t186 != 0)
        goto LAB194;

LAB195:    memset(t190, 0, 8);
    t191 = (t174 + 4);
    t192 = *((unsigned int *)t191);
    t193 = (~(t192));
    t194 = *((unsigned int *)t174);
    t195 = (t194 & t193);
    t196 = (t195 & 1U);
    if (t196 != 0)
        goto LAB196;

LAB197:    if (*((unsigned int *)t191) != 0)
        goto LAB198;

LAB199:    t199 = *((unsigned int *)t160);
    t200 = *((unsigned int *)t190);
    t201 = (t199 & t200);
    *((unsigned int *)t198) = t201;
    t202 = (t160 + 4);
    t203 = (t190 + 4);
    t204 = (t198 + 4);
    t205 = *((unsigned int *)t202);
    t206 = *((unsigned int *)t203);
    t207 = (t205 | t206);
    *((unsigned int *)t204) = t207;
    t208 = *((unsigned int *)t204);
    t209 = (t208 != 0);
    if (t209 == 1)
        goto LAB200;

LAB201:
LAB202:    goto LAB191;

LAB193:    *((unsigned int *)t174) = 1;
    goto LAB195;

LAB194:    t189 = (t174 + 4);
    *((unsigned int *)t174) = 1;
    *((unsigned int *)t189) = 1;
    goto LAB195;

LAB196:    *((unsigned int *)t190) = 1;
    goto LAB199;

LAB198:    t197 = (t190 + 4);
    *((unsigned int *)t190) = 1;
    *((unsigned int *)t197) = 1;
    goto LAB199;

LAB200:    t210 = *((unsigned int *)t198);
    t211 = *((unsigned int *)t204);
    *((unsigned int *)t198) = (t210 | t211);
    t212 = (t160 + 4);
    t213 = (t190 + 4);
    t214 = *((unsigned int *)t160);
    t215 = (~(t214));
    t216 = *((unsigned int *)t212);
    t217 = (~(t216));
    t218 = *((unsigned int *)t190);
    t219 = (~(t218));
    t220 = *((unsigned int *)t213);
    t221 = (~(t220));
    t222 = (t215 & t217);
    t223 = (t219 & t221);
    t224 = (~(t222));
    t225 = (~(t223));
    t226 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t226 & t224);
    t227 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t227 & t225);
    t228 = *((unsigned int *)t198);
    *((unsigned int *)t198) = (t228 & t224);
    t229 = *((unsigned int *)t198);
    *((unsigned int *)t198) = (t229 & t225);
    goto LAB202;

LAB203:    *((unsigned int *)t230) = 1;
    goto LAB206;

LAB205:    t237 = (t230 + 4);
    *((unsigned int *)t230) = 1;
    *((unsigned int *)t237) = 1;
    goto LAB206;

LAB207:    t242 = (t0 + 2488U);
    t243 = *((char **)t242);
    t242 = ((char*)((ng4)));
    memset(t244, 0, 8);
    t245 = (t243 + 4);
    t246 = (t242 + 4);
    t247 = *((unsigned int *)t243);
    t248 = *((unsigned int *)t242);
    t249 = (t247 ^ t248);
    t250 = *((unsigned int *)t245);
    t251 = *((unsigned int *)t246);
    t252 = (t250 ^ t251);
    t253 = (t249 | t252);
    t254 = *((unsigned int *)t245);
    t255 = *((unsigned int *)t246);
    t256 = (t254 | t255);
    t257 = (~(t256));
    t258 = (t253 & t257);
    if (t258 != 0)
        goto LAB211;

LAB210:    if (t256 != 0)
        goto LAB212;

LAB213:    memset(t260, 0, 8);
    t261 = (t244 + 4);
    t262 = *((unsigned int *)t261);
    t263 = (~(t262));
    t264 = *((unsigned int *)t244);
    t265 = (t264 & t263);
    t266 = (t265 & 1U);
    if (t266 != 0)
        goto LAB214;

LAB215:    if (*((unsigned int *)t261) != 0)
        goto LAB216;

LAB217:    t269 = *((unsigned int *)t230);
    t270 = *((unsigned int *)t260);
    t271 = (t269 & t270);
    *((unsigned int *)t268) = t271;
    t272 = (t230 + 4);
    t273 = (t260 + 4);
    t274 = (t268 + 4);
    t275 = *((unsigned int *)t272);
    t276 = *((unsigned int *)t273);
    t277 = (t275 | t276);
    *((unsigned int *)t274) = t277;
    t278 = *((unsigned int *)t274);
    t279 = (t278 != 0);
    if (t279 == 1)
        goto LAB218;

LAB219:
LAB220:    goto LAB209;

LAB211:    *((unsigned int *)t244) = 1;
    goto LAB213;

LAB212:    t259 = (t244 + 4);
    *((unsigned int *)t244) = 1;
    *((unsigned int *)t259) = 1;
    goto LAB213;

LAB214:    *((unsigned int *)t260) = 1;
    goto LAB217;

LAB216:    t267 = (t260 + 4);
    *((unsigned int *)t260) = 1;
    *((unsigned int *)t267) = 1;
    goto LAB217;

LAB218:    t280 = *((unsigned int *)t268);
    t281 = *((unsigned int *)t274);
    *((unsigned int *)t268) = (t280 | t281);
    t282 = (t230 + 4);
    t283 = (t260 + 4);
    t284 = *((unsigned int *)t230);
    t285 = (~(t284));
    t286 = *((unsigned int *)t282);
    t287 = (~(t286));
    t288 = *((unsigned int *)t260);
    t289 = (~(t288));
    t290 = *((unsigned int *)t283);
    t291 = (~(t290));
    t292 = (t285 & t287);
    t293 = (t289 & t291);
    t294 = (~(t292));
    t295 = (~(t293));
    t296 = *((unsigned int *)t274);
    *((unsigned int *)t274) = (t296 & t294);
    t297 = *((unsigned int *)t274);
    *((unsigned int *)t274) = (t297 & t295);
    t298 = *((unsigned int *)t268);
    *((unsigned int *)t268) = (t298 & t294);
    t299 = *((unsigned int *)t268);
    *((unsigned int *)t268) = (t299 & t295);
    goto LAB220;

LAB221:    *((unsigned int *)t300) = 1;
    goto LAB224;

LAB223:    t307 = (t300 + 4);
    *((unsigned int *)t300) = 1;
    *((unsigned int *)t307) = 1;
    goto LAB224;

LAB225:    t312 = (t0 + 3848);
    t313 = (t312 + 56U);
    t315 = *((char **)t313);
    t316 = ((char*)((ng7)));
    memset(t314, 0, 8);
    t329 = (t315 + 4);
    t331 = (t316 + 4);
    t317 = *((unsigned int *)t315);
    t318 = *((unsigned int *)t316);
    t319 = (t317 ^ t318);
    t320 = *((unsigned int *)t329);
    t321 = *((unsigned int *)t331);
    t322 = (t320 ^ t321);
    t323 = (t319 | t322);
    t324 = *((unsigned int *)t329);
    t325 = *((unsigned int *)t331);
    t326 = (t324 | t325);
    t327 = (~(t326));
    t328 = (t323 & t327);
    if (t328 != 0)
        goto LAB229;

LAB228:    if (t326 != 0)
        goto LAB230;

LAB231:    memset(t330, 0, 8);
    t342 = (t314 + 4);
    t332 = *((unsigned int *)t342);
    t333 = (~(t332));
    t334 = *((unsigned int *)t314);
    t335 = (t334 & t333);
    t336 = (t335 & 1U);
    if (t336 != 0)
        goto LAB232;

LAB233:    if (*((unsigned int *)t342) != 0)
        goto LAB234;

LAB235:    t339 = *((unsigned int *)t300);
    t340 = *((unsigned int *)t330);
    t341 = (t339 & t340);
    *((unsigned int *)t338) = t341;
    t344 = (t300 + 4);
    t352 = (t330 + 4);
    t353 = (t338 + 4);
    t345 = *((unsigned int *)t344);
    t346 = *((unsigned int *)t352);
    t347 = (t345 | t346);
    *((unsigned int *)t353) = t347;
    t348 = *((unsigned int *)t353);
    t349 = (t348 != 0);
    if (t349 == 1)
        goto LAB236;

LAB237:
LAB238:    goto LAB227;

LAB229:    *((unsigned int *)t314) = 1;
    goto LAB231;

LAB230:    t337 = (t314 + 4);
    *((unsigned int *)t314) = 1;
    *((unsigned int *)t337) = 1;
    goto LAB231;

LAB232:    *((unsigned int *)t330) = 1;
    goto LAB235;

LAB234:    t343 = (t330 + 4);
    *((unsigned int *)t330) = 1;
    *((unsigned int *)t343) = 1;
    goto LAB235;

LAB236:    t350 = *((unsigned int *)t338);
    t351 = *((unsigned int *)t353);
    *((unsigned int *)t338) = (t350 | t351);
    t371 = (t300 + 4);
    t377 = (t330 + 4);
    t354 = *((unsigned int *)t300);
    t355 = (~(t354));
    t356 = *((unsigned int *)t371);
    t357 = (~(t356));
    t358 = *((unsigned int *)t330);
    t359 = (~(t358));
    t360 = *((unsigned int *)t377);
    t361 = (~(t360));
    t362 = (t355 & t357);
    t363 = (t359 & t361);
    t364 = (~(t362));
    t365 = (~(t363));
    t366 = *((unsigned int *)t353);
    *((unsigned int *)t353) = (t366 & t364);
    t367 = *((unsigned int *)t353);
    *((unsigned int *)t353) = (t367 & t365);
    t368 = *((unsigned int *)t338);
    *((unsigned int *)t338) = (t368 & t364);
    t369 = *((unsigned int *)t338);
    *((unsigned int *)t338) = (t369 & t365);
    goto LAB238;

LAB239:    xsi_set_current_line(94, ng0);

LAB242:    xsi_set_current_line(95, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB241;

LAB244:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB246;

LAB245:    if (t17 != 0)
        goto LAB247;

LAB248:    memset(t20, 0, 8);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB249;

LAB250:    if (*((unsigned int *)t21) != 0)
        goto LAB251;

LAB252:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB253;

LAB254:    memcpy(t58, t20, 8);

LAB255:    memset(t90, 0, 8);
    t91 = (t58 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB267;

LAB268:    if (*((unsigned int *)t91) != 0)
        goto LAB269;

LAB270:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB271;

LAB272:    memcpy(t128, t90, 8);

LAB273:    memset(t160, 0, 8);
    t161 = (t128 + 4);
    t162 = *((unsigned int *)t161);
    t163 = (~(t162));
    t164 = *((unsigned int *)t128);
    t165 = (t164 & t163);
    t166 = (t165 & 1U);
    if (t166 != 0)
        goto LAB285;

LAB286:    if (*((unsigned int *)t161) != 0)
        goto LAB287;

LAB288:    t168 = (t160 + 4);
    t169 = *((unsigned int *)t160);
    t170 = *((unsigned int *)t168);
    t171 = (t169 || t170);
    if (t171 > 0)
        goto LAB289;

LAB290:    memcpy(t198, t160, 8);

LAB291:    memset(t230, 0, 8);
    t231 = (t198 + 4);
    t232 = *((unsigned int *)t231);
    t233 = (~(t232));
    t234 = *((unsigned int *)t198);
    t235 = (t234 & t233);
    t236 = (t235 & 1U);
    if (t236 != 0)
        goto LAB303;

LAB304:    if (*((unsigned int *)t231) != 0)
        goto LAB305;

LAB306:    t238 = (t230 + 4);
    t239 = *((unsigned int *)t230);
    t240 = *((unsigned int *)t238);
    t241 = (t239 || t240);
    if (t241 > 0)
        goto LAB307;

LAB308:    memcpy(t268, t230, 8);

LAB309:    memset(t300, 0, 8);
    t301 = (t268 + 4);
    t302 = *((unsigned int *)t301);
    t303 = (~(t302));
    t304 = *((unsigned int *)t268);
    t305 = (t304 & t303);
    t306 = (t305 & 1U);
    if (t306 != 0)
        goto LAB321;

LAB322:    if (*((unsigned int *)t301) != 0)
        goto LAB323;

LAB324:    t308 = (t300 + 4);
    t309 = *((unsigned int *)t300);
    t310 = *((unsigned int *)t308);
    t311 = (t309 || t310);
    if (t311 > 0)
        goto LAB325;

LAB326:    memcpy(t338, t300, 8);

LAB327:    t378 = (t338 + 4);
    t372 = *((unsigned int *)t378);
    t373 = (~(t372));
    t374 = *((unsigned int *)t338);
    t375 = (t374 & t373);
    t376 = (t375 != 0);
    if (t376 > 0)
        goto LAB339;

LAB340:    xsi_set_current_line(113, ng0);

LAB343:    xsi_set_current_line(114, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);

LAB341:    goto LAB1;

LAB246:    *((unsigned int *)t6) = 1;
    goto LAB248;

LAB247:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB248;

LAB249:    *((unsigned int *)t20) = 1;
    goto LAB252;

LAB251:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB252;

LAB253:    t32 = (t0 + 3288U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng4)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB257;

LAB256:    if (t46 != 0)
        goto LAB258;

LAB259:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB260;

LAB261:    if (*((unsigned int *)t51) != 0)
        goto LAB262;

LAB263:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB264;

LAB265:
LAB266:    goto LAB255;

LAB257:    *((unsigned int *)t34) = 1;
    goto LAB259;

LAB258:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB259;

LAB260:    *((unsigned int *)t50) = 1;
    goto LAB263;

LAB262:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB263;

LAB264:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB266;

LAB267:    *((unsigned int *)t90) = 1;
    goto LAB270;

LAB269:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB270;

LAB271:    t102 = (t0 + 2648U);
    t103 = *((char **)t102);
    t102 = ((char*)((ng4)));
    memset(t104, 0, 8);
    t105 = (t103 + 4);
    t106 = (t102 + 4);
    t107 = *((unsigned int *)t103);
    t108 = *((unsigned int *)t102);
    t109 = (t107 ^ t108);
    t110 = *((unsigned int *)t105);
    t111 = *((unsigned int *)t106);
    t112 = (t110 ^ t111);
    t113 = (t109 | t112);
    t114 = *((unsigned int *)t105);
    t115 = *((unsigned int *)t106);
    t116 = (t114 | t115);
    t117 = (~(t116));
    t118 = (t113 & t117);
    if (t118 != 0)
        goto LAB275;

LAB274:    if (t116 != 0)
        goto LAB276;

LAB277:    memset(t120, 0, 8);
    t121 = (t104 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t104);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB278;

LAB279:    if (*((unsigned int *)t121) != 0)
        goto LAB280;

LAB281:    t129 = *((unsigned int *)t90);
    t130 = *((unsigned int *)t120);
    t131 = (t129 & t130);
    *((unsigned int *)t128) = t131;
    t132 = (t90 + 4);
    t133 = (t120 + 4);
    t134 = (t128 + 4);
    t135 = *((unsigned int *)t132);
    t136 = *((unsigned int *)t133);
    t137 = (t135 | t136);
    *((unsigned int *)t134) = t137;
    t138 = *((unsigned int *)t134);
    t139 = (t138 != 0);
    if (t139 == 1)
        goto LAB282;

LAB283:
LAB284:    goto LAB273;

LAB275:    *((unsigned int *)t104) = 1;
    goto LAB277;

LAB276:    t119 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB277;

LAB278:    *((unsigned int *)t120) = 1;
    goto LAB281;

LAB280:    t127 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB281;

LAB282:    t140 = *((unsigned int *)t128);
    t141 = *((unsigned int *)t134);
    *((unsigned int *)t128) = (t140 | t141);
    t142 = (t90 + 4);
    t143 = (t120 + 4);
    t144 = *((unsigned int *)t90);
    t145 = (~(t144));
    t146 = *((unsigned int *)t142);
    t147 = (~(t146));
    t148 = *((unsigned int *)t120);
    t149 = (~(t148));
    t150 = *((unsigned int *)t143);
    t151 = (~(t150));
    t152 = (t145 & t147);
    t153 = (t149 & t151);
    t154 = (~(t152));
    t155 = (~(t153));
    t156 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t156 & t154);
    t157 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t157 & t155);
    t158 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t158 & t154);
    t159 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t159 & t155);
    goto LAB284;

LAB285:    *((unsigned int *)t160) = 1;
    goto LAB288;

LAB287:    t167 = (t160 + 4);
    *((unsigned int *)t160) = 1;
    *((unsigned int *)t167) = 1;
    goto LAB288;

LAB289:    t172 = (t0 + 2968U);
    t173 = *((char **)t172);
    t172 = ((char*)((ng4)));
    memset(t174, 0, 8);
    t175 = (t173 + 4);
    t176 = (t172 + 4);
    t177 = *((unsigned int *)t173);
    t178 = *((unsigned int *)t172);
    t179 = (t177 ^ t178);
    t180 = *((unsigned int *)t175);
    t181 = *((unsigned int *)t176);
    t182 = (t180 ^ t181);
    t183 = (t179 | t182);
    t184 = *((unsigned int *)t175);
    t185 = *((unsigned int *)t176);
    t186 = (t184 | t185);
    t187 = (~(t186));
    t188 = (t183 & t187);
    if (t188 != 0)
        goto LAB293;

LAB292:    if (t186 != 0)
        goto LAB294;

LAB295:    memset(t190, 0, 8);
    t191 = (t174 + 4);
    t192 = *((unsigned int *)t191);
    t193 = (~(t192));
    t194 = *((unsigned int *)t174);
    t195 = (t194 & t193);
    t196 = (t195 & 1U);
    if (t196 != 0)
        goto LAB296;

LAB297:    if (*((unsigned int *)t191) != 0)
        goto LAB298;

LAB299:    t199 = *((unsigned int *)t160);
    t200 = *((unsigned int *)t190);
    t201 = (t199 & t200);
    *((unsigned int *)t198) = t201;
    t202 = (t160 + 4);
    t203 = (t190 + 4);
    t204 = (t198 + 4);
    t205 = *((unsigned int *)t202);
    t206 = *((unsigned int *)t203);
    t207 = (t205 | t206);
    *((unsigned int *)t204) = t207;
    t208 = *((unsigned int *)t204);
    t209 = (t208 != 0);
    if (t209 == 1)
        goto LAB300;

LAB301:
LAB302:    goto LAB291;

LAB293:    *((unsigned int *)t174) = 1;
    goto LAB295;

LAB294:    t189 = (t174 + 4);
    *((unsigned int *)t174) = 1;
    *((unsigned int *)t189) = 1;
    goto LAB295;

LAB296:    *((unsigned int *)t190) = 1;
    goto LAB299;

LAB298:    t197 = (t190 + 4);
    *((unsigned int *)t190) = 1;
    *((unsigned int *)t197) = 1;
    goto LAB299;

LAB300:    t210 = *((unsigned int *)t198);
    t211 = *((unsigned int *)t204);
    *((unsigned int *)t198) = (t210 | t211);
    t212 = (t160 + 4);
    t213 = (t190 + 4);
    t214 = *((unsigned int *)t160);
    t215 = (~(t214));
    t216 = *((unsigned int *)t212);
    t217 = (~(t216));
    t218 = *((unsigned int *)t190);
    t219 = (~(t218));
    t220 = *((unsigned int *)t213);
    t221 = (~(t220));
    t222 = (t215 & t217);
    t223 = (t219 & t221);
    t224 = (~(t222));
    t225 = (~(t223));
    t226 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t226 & t224);
    t227 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t227 & t225);
    t228 = *((unsigned int *)t198);
    *((unsigned int *)t198) = (t228 & t224);
    t229 = *((unsigned int *)t198);
    *((unsigned int *)t198) = (t229 & t225);
    goto LAB302;

LAB303:    *((unsigned int *)t230) = 1;
    goto LAB306;

LAB305:    t237 = (t230 + 4);
    *((unsigned int *)t230) = 1;
    *((unsigned int *)t237) = 1;
    goto LAB306;

LAB307:    t242 = (t0 + 2488U);
    t243 = *((char **)t242);
    t242 = ((char*)((ng6)));
    memset(t244, 0, 8);
    t245 = (t243 + 4);
    t246 = (t242 + 4);
    t247 = *((unsigned int *)t243);
    t248 = *((unsigned int *)t242);
    t249 = (t247 ^ t248);
    t250 = *((unsigned int *)t245);
    t251 = *((unsigned int *)t246);
    t252 = (t250 ^ t251);
    t253 = (t249 | t252);
    t254 = *((unsigned int *)t245);
    t255 = *((unsigned int *)t246);
    t256 = (t254 | t255);
    t257 = (~(t256));
    t258 = (t253 & t257);
    if (t258 != 0)
        goto LAB311;

LAB310:    if (t256 != 0)
        goto LAB312;

LAB313:    memset(t260, 0, 8);
    t261 = (t244 + 4);
    t262 = *((unsigned int *)t261);
    t263 = (~(t262));
    t264 = *((unsigned int *)t244);
    t265 = (t264 & t263);
    t266 = (t265 & 1U);
    if (t266 != 0)
        goto LAB314;

LAB315:    if (*((unsigned int *)t261) != 0)
        goto LAB316;

LAB317:    t269 = *((unsigned int *)t230);
    t270 = *((unsigned int *)t260);
    t271 = (t269 & t270);
    *((unsigned int *)t268) = t271;
    t272 = (t230 + 4);
    t273 = (t260 + 4);
    t274 = (t268 + 4);
    t275 = *((unsigned int *)t272);
    t276 = *((unsigned int *)t273);
    t277 = (t275 | t276);
    *((unsigned int *)t274) = t277;
    t278 = *((unsigned int *)t274);
    t279 = (t278 != 0);
    if (t279 == 1)
        goto LAB318;

LAB319:
LAB320:    goto LAB309;

LAB311:    *((unsigned int *)t244) = 1;
    goto LAB313;

LAB312:    t259 = (t244 + 4);
    *((unsigned int *)t244) = 1;
    *((unsigned int *)t259) = 1;
    goto LAB313;

LAB314:    *((unsigned int *)t260) = 1;
    goto LAB317;

LAB316:    t267 = (t260 + 4);
    *((unsigned int *)t260) = 1;
    *((unsigned int *)t267) = 1;
    goto LAB317;

LAB318:    t280 = *((unsigned int *)t268);
    t281 = *((unsigned int *)t274);
    *((unsigned int *)t268) = (t280 | t281);
    t282 = (t230 + 4);
    t283 = (t260 + 4);
    t284 = *((unsigned int *)t230);
    t285 = (~(t284));
    t286 = *((unsigned int *)t282);
    t287 = (~(t286));
    t288 = *((unsigned int *)t260);
    t289 = (~(t288));
    t290 = *((unsigned int *)t283);
    t291 = (~(t290));
    t292 = (t285 & t287);
    t293 = (t289 & t291);
    t294 = (~(t292));
    t295 = (~(t293));
    t296 = *((unsigned int *)t274);
    *((unsigned int *)t274) = (t296 & t294);
    t297 = *((unsigned int *)t274);
    *((unsigned int *)t274) = (t297 & t295);
    t298 = *((unsigned int *)t268);
    *((unsigned int *)t268) = (t298 & t294);
    t299 = *((unsigned int *)t268);
    *((unsigned int *)t268) = (t299 & t295);
    goto LAB320;

LAB321:    *((unsigned int *)t300) = 1;
    goto LAB324;

LAB323:    t307 = (t300 + 4);
    *((unsigned int *)t300) = 1;
    *((unsigned int *)t307) = 1;
    goto LAB324;

LAB325:    t312 = (t0 + 3848);
    t313 = (t312 + 56U);
    t315 = *((char **)t313);
    t316 = ((char*)((ng16)));
    memset(t314, 0, 8);
    t329 = (t315 + 4);
    t331 = (t316 + 4);
    t317 = *((unsigned int *)t315);
    t318 = *((unsigned int *)t316);
    t319 = (t317 ^ t318);
    t320 = *((unsigned int *)t329);
    t321 = *((unsigned int *)t331);
    t322 = (t320 ^ t321);
    t323 = (t319 | t322);
    t324 = *((unsigned int *)t329);
    t325 = *((unsigned int *)t331);
    t326 = (t324 | t325);
    t327 = (~(t326));
    t328 = (t323 & t327);
    if (t328 != 0)
        goto LAB329;

LAB328:    if (t326 != 0)
        goto LAB330;

LAB331:    memset(t330, 0, 8);
    t342 = (t314 + 4);
    t332 = *((unsigned int *)t342);
    t333 = (~(t332));
    t334 = *((unsigned int *)t314);
    t335 = (t334 & t333);
    t336 = (t335 & 1U);
    if (t336 != 0)
        goto LAB332;

LAB333:    if (*((unsigned int *)t342) != 0)
        goto LAB334;

LAB335:    t339 = *((unsigned int *)t300);
    t340 = *((unsigned int *)t330);
    t341 = (t339 & t340);
    *((unsigned int *)t338) = t341;
    t344 = (t300 + 4);
    t352 = (t330 + 4);
    t353 = (t338 + 4);
    t345 = *((unsigned int *)t344);
    t346 = *((unsigned int *)t352);
    t347 = (t345 | t346);
    *((unsigned int *)t353) = t347;
    t348 = *((unsigned int *)t353);
    t349 = (t348 != 0);
    if (t349 == 1)
        goto LAB336;

LAB337:
LAB338:    goto LAB327;

LAB329:    *((unsigned int *)t314) = 1;
    goto LAB331;

LAB330:    t337 = (t314 + 4);
    *((unsigned int *)t314) = 1;
    *((unsigned int *)t337) = 1;
    goto LAB331;

LAB332:    *((unsigned int *)t330) = 1;
    goto LAB335;

LAB334:    t343 = (t330 + 4);
    *((unsigned int *)t330) = 1;
    *((unsigned int *)t343) = 1;
    goto LAB335;

LAB336:    t350 = *((unsigned int *)t338);
    t351 = *((unsigned int *)t353);
    *((unsigned int *)t338) = (t350 | t351);
    t371 = (t300 + 4);
    t377 = (t330 + 4);
    t354 = *((unsigned int *)t300);
    t355 = (~(t354));
    t356 = *((unsigned int *)t371);
    t357 = (~(t356));
    t358 = *((unsigned int *)t330);
    t359 = (~(t358));
    t360 = *((unsigned int *)t377);
    t361 = (~(t360));
    t362 = (t355 & t357);
    t363 = (t359 & t361);
    t364 = (~(t362));
    t365 = (~(t363));
    t366 = *((unsigned int *)t353);
    *((unsigned int *)t353) = (t366 & t364);
    t367 = *((unsigned int *)t353);
    *((unsigned int *)t353) = (t367 & t365);
    t368 = *((unsigned int *)t338);
    *((unsigned int *)t338) = (t368 & t364);
    t369 = *((unsigned int *)t338);
    *((unsigned int *)t338) = (t369 & t365);
    goto LAB338;

LAB339:    xsi_set_current_line(110, ng0);

LAB342:    xsi_set_current_line(111, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB341;

}

static void Initial_129_2(char *t0)
{
    char t6[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 6856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);

LAB4:    xsi_set_current_line(130, ng0);

LAB5:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 5288);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t3 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB11;

LAB10:    t28 = (t0 + 7208);
    *((int *)t28) = 1;
    t29 = (t0 + 6856U);
    *((char **)t29) = &&LAB5;

LAB1:    return;
LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB11:    t30 = (t0 + 7208);
    *((int *)t30) = 0;
    xsi_set_current_line(131, ng0);
    t31 = (t0 + 2008U);
    t32 = *((char **)t31);
    memcpy(t33, t32, 8);
    t31 = (t0 + 4968);
    xsi_vlogvar_assign_value(t31, t33, 0, 0, 32);
    xsi_set_current_line(132, ng0);
    xsi_vlogfile_write(0, 0, 1, ng17, 1, t0);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 6664);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4808);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5128);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t21 = (t4 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB16;

LAB13:    if (t18 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t6) = 1;

LAB16:    t29 = (t6 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(138, ng0);

LAB21:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4968);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng18, 3, t0, (char)118, t4, 32, (char)118, t8, 32);

LAB19:    xsi_set_current_line(141, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4808);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)119, t4, 32, (char)119, t8, 32);
    xsi_set_current_line(143, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    goto LAB1;

LAB15:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(135, ng0);

LAB20:    xsi_set_current_line(136, ng0);
    t30 = (t0 + 5448);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t34 = ((char*)((ng2)));
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t32, 32, t34, 32);
    t35 = (t0 + 5448);
    xsi_vlogvar_assign_value(t35, t33, 0, 0, 32);
    xsi_set_current_line(137, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    goto LAB19;

}


extern void work_m_15523810058191771501_2888019711_init()
{
	static char *pe[] = {(void *)Initial_44_0,(void *)Initial_67_1,(void *)Initial_129_2};
	xsi_register_didat("work_m_15523810058191771501_2888019711", "isim/cs161_processor_testbench_isim_beh.exe.sim/work/m_15523810058191771501_2888019711.didat");
	xsi_register_executes(pe);
}
