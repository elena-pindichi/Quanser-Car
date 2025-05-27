    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 8;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (MPC_casadi_P)
        ;%
            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% MPC_casadi_P.XYFigure_maximum_x
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% MPC_casadi_P.XYFigure_maximum_y
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% MPC_casadi_P.XYFigure_minimum_x
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% MPC_casadi_P.XYFigure_minimum_y
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% MPC_casadi_P.XYFigure_update_rate
                    section.data(1).logicalSrcIdx = 4;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% MPC_casadi_P.HILRead_analog_channels
                    section.data(1).logicalSrcIdx = 5;
                    section.data(1).dtTransOffset = 0;

                    ;% MPC_casadi_P.HILRead_encoder_channels
                    section.data(2).logicalSrcIdx = 6;
                    section.data(2).dtTransOffset = 1;

                    ;% MPC_casadi_P.HILRead_other_channels
                    section.data(3).logicalSrcIdx = 7;
                    section.data(3).dtTransOffset = 2;

                    ;% MPC_casadi_P.HILWrite_other_channels
                    section.data(4).logicalSrcIdx = 8;
                    section.data(4).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 77;
            section.data(77)  = dumData; %prealloc

                    ;% MPC_casadi_P.Constant10_Value
                    section.data(1).logicalSrcIdx = 9;
                    section.data(1).dtTransOffset = 0;

                    ;% MPC_casadi_P.Constant9_Value
                    section.data(2).logicalSrcIdx = 10;
                    section.data(2).dtTransOffset = 1;

                    ;% MPC_casadi_P.Constant_Value
                    section.data(3).logicalSrcIdx = 11;
                    section.data(3).dtTransOffset = 2;

                    ;% MPC_casadi_P.HILInitialize_OOTerminate
                    section.data(4).logicalSrcIdx = 12;
                    section.data(4).dtTransOffset = 3;

                    ;% MPC_casadi_P.HILInitialize_OOExit
                    section.data(5).logicalSrcIdx = 13;
                    section.data(5).dtTransOffset = 4;

                    ;% MPC_casadi_P.HILInitialize_OOStart
                    section.data(6).logicalSrcIdx = 14;
                    section.data(6).dtTransOffset = 5;

                    ;% MPC_casadi_P.HILInitialize_OOEnter
                    section.data(7).logicalSrcIdx = 15;
                    section.data(7).dtTransOffset = 6;

                    ;% MPC_casadi_P.HILInitialize_POFinal
                    section.data(8).logicalSrcIdx = 16;
                    section.data(8).dtTransOffset = 7;

                    ;% MPC_casadi_P.HILInitialize_OOFinal
                    section.data(9).logicalSrcIdx = 17;
                    section.data(9).dtTransOffset = 8;

                    ;% MPC_casadi_P.HILInitialize_AIHigh
                    section.data(10).logicalSrcIdx = 18;
                    section.data(10).dtTransOffset = 9;

                    ;% MPC_casadi_P.HILInitialize_AILow
                    section.data(11).logicalSrcIdx = 19;
                    section.data(11).dtTransOffset = 10;

                    ;% MPC_casadi_P.HILInitialize_EIFrequency
                    section.data(12).logicalSrcIdx = 20;
                    section.data(12).dtTransOffset = 11;

                    ;% MPC_casadi_P.HILInitialize_POFrequency
                    section.data(13).logicalSrcIdx = 21;
                    section.data(13).dtTransOffset = 12;

                    ;% MPC_casadi_P.HILInitialize_POInitial
                    section.data(14).logicalSrcIdx = 22;
                    section.data(14).dtTransOffset = 13;

                    ;% MPC_casadi_P.HILInitialize_POWatchdog
                    section.data(15).logicalSrcIdx = 23;
                    section.data(15).dtTransOffset = 14;

                    ;% MPC_casadi_P.HILInitialize_OOInitial
                    section.data(16).logicalSrcIdx = 24;
                    section.data(16).dtTransOffset = 15;

                    ;% MPC_casadi_P.HILInitialize_OOWatchdog
                    section.data(17).logicalSrcIdx = 25;
                    section.data(17).dtTransOffset = 16;

                    ;% MPC_casadi_P.Constant2_Value
                    section.data(18).logicalSrcIdx = 26;
                    section.data(18).dtTransOffset = 17;

                    ;% MPC_casadi_P.Integrator2_IC
                    section.data(19).logicalSrcIdx = 27;
                    section.data(19).dtTransOffset = 18;

                    ;% MPC_casadi_P.Unwrap22_Modulus
                    section.data(20).logicalSrcIdx = 28;
                    section.data(20).dtTransOffset = 19;

                    ;% MPC_casadi_P.Constant8_Value
                    section.data(21).logicalSrcIdx = 29;
                    section.data(21).dtTransOffset = 20;

                    ;% MPC_casadi_P.Integrator2_IC_l
                    section.data(22).logicalSrcIdx = 30;
                    section.data(22).dtTransOffset = 21;

                    ;% MPC_casadi_P.Constant1_Value
                    section.data(23).logicalSrcIdx = 31;
                    section.data(23).dtTransOffset = 22;

                    ;% MPC_casadi_P.Constant10_Value_f
                    section.data(24).logicalSrcIdx = 32;
                    section.data(24).dtTransOffset = 23;

                    ;% MPC_casadi_P.Constant11_Value
                    section.data(25).logicalSrcIdx = 33;
                    section.data(25).dtTransOffset = 24;

                    ;% MPC_casadi_P.Constant12_Value
                    section.data(26).logicalSrcIdx = 34;
                    section.data(26).dtTransOffset = 25;

                    ;% MPC_casadi_P.Constant3_Value
                    section.data(27).logicalSrcIdx = 35;
                    section.data(27).dtTransOffset = 26;

                    ;% MPC_casadi_P.Constant4_Value
                    section.data(28).logicalSrcIdx = 36;
                    section.data(28).dtTransOffset = 27;

                    ;% MPC_casadi_P.Constant5_Value
                    section.data(29).logicalSrcIdx = 37;
                    section.data(29).dtTransOffset = 28;

                    ;% MPC_casadi_P.Constant6_Value
                    section.data(30).logicalSrcIdx = 38;
                    section.data(30).dtTransOffset = 29;

                    ;% MPC_casadi_P.Constant7_Value
                    section.data(31).logicalSrcIdx = 39;
                    section.data(31).dtTransOffset = 30;

                    ;% MPC_casadi_P.Constant9_Value_f
                    section.data(32).logicalSrcIdx = 40;
                    section.data(32).dtTransOffset = 31;

                    ;% MPC_casadi_P.Integrator_IC
                    section.data(33).logicalSrcIdx = 41;
                    section.data(33).dtTransOffset = 32;

                    ;% MPC_casadi_P.Constant_Value_h
                    section.data(34).logicalSrcIdx = 42;
                    section.data(34).dtTransOffset = 33;

                    ;% MPC_casadi_P.Unwrap224_Modulus
                    section.data(35).logicalSrcIdx = 43;
                    section.data(35).dtTransOffset = 34;

                    ;% MPC_casadi_P.Constant_Value_l
                    section.data(36).logicalSrcIdx = 44;
                    section.data(36).dtTransOffset = 35;

                    ;% MPC_casadi_P.Integrator2_IC_j
                    section.data(37).logicalSrcIdx = 45;
                    section.data(37).dtTransOffset = 36;

                    ;% MPC_casadi_P.Constant_Value_i
                    section.data(38).logicalSrcIdx = 46;
                    section.data(38).dtTransOffset = 37;

                    ;% MPC_casadi_P.Integrator2_IC_d
                    section.data(39).logicalSrcIdx = 47;
                    section.data(39).dtTransOffset = 38;

                    ;% MPC_casadi_P.Constant_Value_e
                    section.data(40).logicalSrcIdx = 48;
                    section.data(40).dtTransOffset = 39;

                    ;% MPC_casadi_P.Unwrap21_Modulus
                    section.data(41).logicalSrcIdx = 49;
                    section.data(41).dtTransOffset = 40;

                    ;% MPC_casadi_P.Constant_Value_j
                    section.data(42).logicalSrcIdx = 50;
                    section.data(42).dtTransOffset = 41;

                    ;% MPC_casadi_P.Integrator2_IC_n
                    section.data(43).logicalSrcIdx = 51;
                    section.data(43).dtTransOffset = 42;

                    ;% MPC_casadi_P.Constant_Value_n
                    section.data(44).logicalSrcIdx = 52;
                    section.data(44).dtTransOffset = 43;

                    ;% MPC_casadi_P.Integrator2_IC_h
                    section.data(45).logicalSrcIdx = 53;
                    section.data(45).dtTransOffset = 44;

                    ;% MPC_casadi_P.Gain1_Gain
                    section.data(46).logicalSrcIdx = 54;
                    section.data(46).dtTransOffset = 45;

                    ;% MPC_casadi_P.Gain4_Gain
                    section.data(47).logicalSrcIdx = 55;
                    section.data(47).dtTransOffset = 46;

                    ;% MPC_casadi_P.Gain2_Gain
                    section.data(48).logicalSrcIdx = 56;
                    section.data(48).dtTransOffset = 47;

                    ;% MPC_casadi_P.Gain3_Gain
                    section.data(49).logicalSrcIdx = 57;
                    section.data(49).dtTransOffset = 48;

                    ;% MPC_casadi_P.Memory1_InitialCondition
                    section.data(50).logicalSrcIdx = 58;
                    section.data(50).dtTransOffset = 49;

                    ;% MPC_casadi_P.Memory2_InitialCondition
                    section.data(51).logicalSrcIdx = 59;
                    section.data(51).dtTransOffset = 50;

                    ;% MPC_casadi_P.Memory3_InitialCondition
                    section.data(52).logicalSrcIdx = 60;
                    section.data(52).dtTransOffset = 51;

                    ;% MPC_casadi_P.Integrator5_IC
                    section.data(53).logicalSrcIdx = 61;
                    section.data(53).dtTransOffset = 52;

                    ;% MPC_casadi_P.Integrator6_IC
                    section.data(54).logicalSrcIdx = 62;
                    section.data(54).dtTransOffset = 53;

                    ;% MPC_casadi_P.Integrator3_IC
                    section.data(55).logicalSrcIdx = 63;
                    section.data(55).dtTransOffset = 54;

                    ;% MPC_casadi_P.commandsaturation_UpperSat
                    section.data(56).logicalSrcIdx = 64;
                    section.data(56).dtTransOffset = 55;

                    ;% MPC_casadi_P.commandsaturation_LowerSat
                    section.data(57).logicalSrcIdx = 65;
                    section.data(57).dtTransOffset = 56;

                    ;% MPC_casadi_P.Kffms_Gain
                    section.data(58).logicalSrcIdx = 66;
                    section.data(58).dtTransOffset = 57;

                    ;% MPC_casadi_P.Kpms_Gain
                    section.data(59).logicalSrcIdx = 67;
                    section.data(59).dtTransOffset = 58;

                    ;% MPC_casadi_P.Integrator1_IC
                    section.data(60).logicalSrcIdx = 68;
                    section.data(60).dtTransOffset = 59;

                    ;% MPC_casadi_P.Integrator1_UpperSat
                    section.data(61).logicalSrcIdx = 69;
                    section.data(61).dtTransOffset = 60;

                    ;% MPC_casadi_P.Integrator1_LowerSat
                    section.data(62).logicalSrcIdx = 70;
                    section.data(62).dtTransOffset = 61;

                    ;% MPC_casadi_P.commandsaturation1_UpperSat
                    section.data(63).logicalSrcIdx = 71;
                    section.data(63).dtTransOffset = 62;

                    ;% MPC_casadi_P.commandsaturation1_LowerSat
                    section.data(64).logicalSrcIdx = 72;
                    section.data(64).dtTransOffset = 63;

                    ;% MPC_casadi_P.directionconvention_Gain
                    section.data(65).logicalSrcIdx = 73;
                    section.data(65).dtTransOffset = 64;

                    ;% MPC_casadi_P.commandsaturation_UpperSat_n
                    section.data(66).logicalSrcIdx = 74;
                    section.data(66).dtTransOffset = 65;

                    ;% MPC_casadi_P.commandsaturation_LowerSat_i
                    section.data(67).logicalSrcIdx = 75;
                    section.data(67).dtTransOffset = 66;

                    ;% MPC_casadi_P.Gain_Gain
                    section.data(68).logicalSrcIdx = 76;
                    section.data(68).dtTransOffset = 67;

                    ;% MPC_casadi_P.SteeringBias_Bias
                    section.data(69).logicalSrcIdx = 77;
                    section.data(69).dtTransOffset = 68;

                    ;% MPC_casadi_P.RT_InitialCondition
                    section.data(70).logicalSrcIdx = 78;
                    section.data(70).dtTransOffset = 69;

                    ;% MPC_casadi_P.Constant7_Value_o
                    section.data(71).logicalSrcIdx = 79;
                    section.data(71).dtTransOffset = 70;

                    ;% MPC_casadi_P.Constant8_Value_g
                    section.data(72).logicalSrcIdx = 80;
                    section.data(72).dtTransOffset = 71;

                    ;% MPC_casadi_P.Constant_Value_p
                    section.data(73).logicalSrcIdx = 81;
                    section.data(73).dtTransOffset = 72;

                    ;% MPC_casadi_P.Unwrap21_Modulus_p
                    section.data(74).logicalSrcIdx = 82;
                    section.data(74).dtTransOffset = 73;

                    ;% MPC_casadi_P.Integrator2_IC_a
                    section.data(75).logicalSrcIdx = 83;
                    section.data(75).dtTransOffset = 74;

                    ;% MPC_casadi_P.Kim_Gain
                    section.data(76).logicalSrcIdx = 84;
                    section.data(76).dtTransOffset = 75;

                    ;% MPC_casadi_P.Buffer_ic
                    section.data(77).logicalSrcIdx = 85;
                    section.data(77).dtTransOffset = 76;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% MPC_casadi_P.HILInitialize_DOWatchdog
                    section.data(1).logicalSrcIdx = 86;
                    section.data(1).dtTransOffset = 0;

                    ;% MPC_casadi_P.HILInitialize_EIInitial
                    section.data(2).logicalSrcIdx = 87;
                    section.data(2).dtTransOffset = 1;

                    ;% MPC_casadi_P.HILInitialize_POModes
                    section.data(3).logicalSrcIdx = 88;
                    section.data(3).dtTransOffset = 2;

                    ;% MPC_casadi_P.HILInitialize_POConfiguration
                    section.data(4).logicalSrcIdx = 89;
                    section.data(4).dtTransOffset = 3;

                    ;% MPC_casadi_P.HILInitialize_POAlignment
                    section.data(5).logicalSrcIdx = 90;
                    section.data(5).dtTransOffset = 4;

                    ;% MPC_casadi_P.HILInitialize_POPolarity
                    section.data(6).logicalSrcIdx = 91;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% MPC_casadi_P.HILInitialize_AIChannels
                    section.data(1).logicalSrcIdx = 92;
                    section.data(1).dtTransOffset = 0;

                    ;% MPC_casadi_P.HILInitialize_DIChannels
                    section.data(2).logicalSrcIdx = 93;
                    section.data(2).dtTransOffset = 5;

                    ;% MPC_casadi_P.HILInitialize_DOChannels
                    section.data(3).logicalSrcIdx = 94;
                    section.data(3).dtTransOffset = 20;

                    ;% MPC_casadi_P.HILInitialize_EIChannels
                    section.data(4).logicalSrcIdx = 95;
                    section.data(4).dtTransOffset = 36;

                    ;% MPC_casadi_P.HILInitialize_EIQuadrature
                    section.data(5).logicalSrcIdx = 96;
                    section.data(5).dtTransOffset = 39;

                    ;% MPC_casadi_P.HILInitialize_POChannels
                    section.data(6).logicalSrcIdx = 97;
                    section.data(6).dtTransOffset = 40;

                    ;% MPC_casadi_P.HILInitialize_OOChannels
                    section.data(7).logicalSrcIdx = 98;
                    section.data(7).dtTransOffset = 42;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 37;
            section.data(37)  = dumData; %prealloc

                    ;% MPC_casadi_P.HILInitialize_Active
                    section.data(1).logicalSrcIdx = 99;
                    section.data(1).dtTransOffset = 0;

                    ;% MPC_casadi_P.HILInitialize_AOTerminate
                    section.data(2).logicalSrcIdx = 100;
                    section.data(2).dtTransOffset = 1;

                    ;% MPC_casadi_P.HILInitialize_AOExit
                    section.data(3).logicalSrcIdx = 101;
                    section.data(3).dtTransOffset = 2;

                    ;% MPC_casadi_P.HILInitialize_DOTerminate
                    section.data(4).logicalSrcIdx = 102;
                    section.data(4).dtTransOffset = 3;

                    ;% MPC_casadi_P.HILInitialize_DOExit
                    section.data(5).logicalSrcIdx = 103;
                    section.data(5).dtTransOffset = 4;

                    ;% MPC_casadi_P.HILInitialize_POTerminate
                    section.data(6).logicalSrcIdx = 104;
                    section.data(6).dtTransOffset = 5;

                    ;% MPC_casadi_P.HILInitialize_POExit
                    section.data(7).logicalSrcIdx = 105;
                    section.data(7).dtTransOffset = 6;

                    ;% MPC_casadi_P.HILInitialize_CKPStart
                    section.data(8).logicalSrcIdx = 106;
                    section.data(8).dtTransOffset = 7;

                    ;% MPC_casadi_P.HILInitialize_CKPEnter
                    section.data(9).logicalSrcIdx = 107;
                    section.data(9).dtTransOffset = 8;

                    ;% MPC_casadi_P.HILInitialize_CKStart
                    section.data(10).logicalSrcIdx = 108;
                    section.data(10).dtTransOffset = 9;

                    ;% MPC_casadi_P.HILInitialize_CKEnter
                    section.data(11).logicalSrcIdx = 109;
                    section.data(11).dtTransOffset = 10;

                    ;% MPC_casadi_P.HILInitialize_AIPStart
                    section.data(12).logicalSrcIdx = 110;
                    section.data(12).dtTransOffset = 11;

                    ;% MPC_casadi_P.HILInitialize_AIPEnter
                    section.data(13).logicalSrcIdx = 111;
                    section.data(13).dtTransOffset = 12;

                    ;% MPC_casadi_P.HILInitialize_AOPStart
                    section.data(14).logicalSrcIdx = 112;
                    section.data(14).dtTransOffset = 13;

                    ;% MPC_casadi_P.HILInitialize_AOPEnter
                    section.data(15).logicalSrcIdx = 113;
                    section.data(15).dtTransOffset = 14;

                    ;% MPC_casadi_P.HILInitialize_AOStart
                    section.data(16).logicalSrcIdx = 114;
                    section.data(16).dtTransOffset = 15;

                    ;% MPC_casadi_P.HILInitialize_AOEnter
                    section.data(17).logicalSrcIdx = 115;
                    section.data(17).dtTransOffset = 16;

                    ;% MPC_casadi_P.HILInitialize_AOReset
                    section.data(18).logicalSrcIdx = 116;
                    section.data(18).dtTransOffset = 17;

                    ;% MPC_casadi_P.HILInitialize_DOPStart
                    section.data(19).logicalSrcIdx = 117;
                    section.data(19).dtTransOffset = 18;

                    ;% MPC_casadi_P.HILInitialize_DOPEnter
                    section.data(20).logicalSrcIdx = 118;
                    section.data(20).dtTransOffset = 19;

                    ;% MPC_casadi_P.HILInitialize_DOStart
                    section.data(21).logicalSrcIdx = 119;
                    section.data(21).dtTransOffset = 20;

                    ;% MPC_casadi_P.HILInitialize_DOEnter
                    section.data(22).logicalSrcIdx = 120;
                    section.data(22).dtTransOffset = 21;

                    ;% MPC_casadi_P.HILInitialize_DOReset
                    section.data(23).logicalSrcIdx = 121;
                    section.data(23).dtTransOffset = 22;

                    ;% MPC_casadi_P.HILInitialize_EIPStart
                    section.data(24).logicalSrcIdx = 122;
                    section.data(24).dtTransOffset = 23;

                    ;% MPC_casadi_P.HILInitialize_EIPEnter
                    section.data(25).logicalSrcIdx = 123;
                    section.data(25).dtTransOffset = 24;

                    ;% MPC_casadi_P.HILInitialize_EIStart
                    section.data(26).logicalSrcIdx = 124;
                    section.data(26).dtTransOffset = 25;

                    ;% MPC_casadi_P.HILInitialize_EIEnter
                    section.data(27).logicalSrcIdx = 125;
                    section.data(27).dtTransOffset = 26;

                    ;% MPC_casadi_P.HILInitialize_POPStart
                    section.data(28).logicalSrcIdx = 126;
                    section.data(28).dtTransOffset = 27;

                    ;% MPC_casadi_P.HILInitialize_POPEnter
                    section.data(29).logicalSrcIdx = 127;
                    section.data(29).dtTransOffset = 28;

                    ;% MPC_casadi_P.HILInitialize_POStart
                    section.data(30).logicalSrcIdx = 128;
                    section.data(30).dtTransOffset = 29;

                    ;% MPC_casadi_P.HILInitialize_POEnter
                    section.data(31).logicalSrcIdx = 129;
                    section.data(31).dtTransOffset = 30;

                    ;% MPC_casadi_P.HILInitialize_POReset
                    section.data(32).logicalSrcIdx = 130;
                    section.data(32).dtTransOffset = 31;

                    ;% MPC_casadi_P.HILInitialize_OOReset
                    section.data(33).logicalSrcIdx = 131;
                    section.data(33).dtTransOffset = 32;

                    ;% MPC_casadi_P.HILInitialize_DOFinal
                    section.data(34).logicalSrcIdx = 132;
                    section.data(34).dtTransOffset = 33;

                    ;% MPC_casadi_P.HILInitialize_DOInitial
                    section.data(35).logicalSrcIdx = 133;
                    section.data(35).dtTransOffset = 34;

                    ;% MPC_casadi_P.HILRead_Active
                    section.data(36).logicalSrcIdx = 134;
                    section.data(36).dtTransOffset = 35;

                    ;% MPC_casadi_P.HILWrite_Active
                    section.data(37).logicalSrcIdx = 135;
                    section.data(37).dtTransOffset = 36;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% MPC_casadi_P.uArm0Disarm2_CurrentSetting
                    section.data(1).logicalSrcIdx = 136;
                    section.data(1).dtTransOffset = 0;

                    ;% MPC_casadi_P.XYFigure_Mode
                    section.data(2).logicalSrcIdx = 137;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (MPC_casadi_B)
        ;%
            section.nData     = 44;
            section.data(44)  = dumData; %prealloc

                    ;% MPC_casadi_B.Product1
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% MPC_casadi_B.analogpower
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% MPC_casadi_B.motorencoder
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% MPC_casadi_B.HILRead_o3
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% MPC_casadi_B.Integrator1
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 7;

                    ;% MPC_casadi_B.Unwrap22
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 8;

                    ;% MPC_casadi_B.Integrator1_g
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 9;

                    ;% MPC_casadi_B.Product1_p
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 10;

                    ;% MPC_casadi_B.Integrator
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 11;

                    ;% MPC_casadi_B.Unwrap224
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 12;

                    ;% MPC_casadi_B.Product
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 13;

                    ;% MPC_casadi_B.Product_d
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 14;

                    ;% MPC_casadi_B.Product1_i
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 15;

                    ;% MPC_casadi_B.Product_m
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 16;

                    ;% MPC_casadi_B.Product1_n
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 17;

                    ;% MPC_casadi_B.Unwrap21
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 18;

                    ;% MPC_casadi_B.Product_b
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 19;

                    ;% MPC_casadi_B.Product_e
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 20;

                    ;% MPC_casadi_B.Product1_b
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 21;

                    ;% MPC_casadi_B.Product_p
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 22;

                    ;% MPC_casadi_B.Product1_g
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 23;

                    ;% MPC_casadi_B.Gain3
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 24;

                    ;% MPC_casadi_B.Integrator5
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 25;

                    ;% MPC_casadi_B.Integrator6
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 26;

                    ;% MPC_casadi_B.Integrator3
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 27;

                    ;% MPC_casadi_B.switch_l
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 28;

                    ;% MPC_casadi_B.desired
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 29;

                    ;% MPC_casadi_B.measured
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 30;

                    ;% MPC_casadi_B.commandsaturation
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 31;

                    ;% MPC_casadi_B.SteeringBias
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 32;

                    ;% MPC_casadi_B.RT_m
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 33;

                    ;% MPC_casadi_B.Unwrap21_o
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 87;

                    ;% MPC_casadi_B.Integrator1_f
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 88;

                    ;% MPC_casadi_B.Product_g
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 89;

                    ;% MPC_casadi_B.Product1_b3
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 90;

                    ;% MPC_casadi_B.Product_f
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 91;

                    ;% MPC_casadi_B.Product1_ij
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 92;

                    ;% MPC_casadi_B.Kim
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 93;

                    ;% MPC_casadi_B.FromWorkspace1
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 94;

                    ;% MPC_casadi_B.w
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 103;

                    ;% MPC_casadi_B.u
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 105;

                    ;% MPC_casadi_B.z_next
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 107;

                    ;% MPC_casadi_B.z_ref
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 109;

                    ;% MPC_casadi_B.w_ref
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 121;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% MPC_casadi_B.Compare
                    section.data(1).logicalSrcIdx = 44;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 8;
        sectIdxOffset = 2;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (MPC_casadi_DW)
        ;%
            section.nData     = 20;
            section.data(20)  = dumData; %prealloc

                    ;% MPC_casadi_DW.Buffer_CircBuf
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% MPC_casadi_DW.HILInitialize_AIMinimums
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 108;

                    ;% MPC_casadi_DW.HILInitialize_AIMaximums
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 113;

                    ;% MPC_casadi_DW.HILInitialize_FilterFrequency
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 118;

                    ;% MPC_casadi_DW.HILInitialize_POSortedFreqs
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 121;

                    ;% MPC_casadi_DW.HILInitialize_POValues
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 123;

                    ;% MPC_casadi_DW.HILInitialize_OOValues
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 125;

                    ;% MPC_casadi_DW.Unwrap22_PreviousInput
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 127;

                    ;% MPC_casadi_DW.Unwrap22_Revolutions
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 128;

                    ;% MPC_casadi_DW.Unwrap224_PreviousInput
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 129;

                    ;% MPC_casadi_DW.Unwrap224_Revolutions
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 130;

                    ;% MPC_casadi_DW.Unwrap21_PreviousInput
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 131;

                    ;% MPC_casadi_DW.Unwrap21_Revolutions
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 132;

                    ;% MPC_casadi_DW.RT_Buffer0
                    section.data(14).logicalSrcIdx = 16;
                    section.data(14).dtTransOffset = 133;

                    ;% MPC_casadi_DW.XYFigure_XBuffer
                    section.data(15).logicalSrcIdx = 17;
                    section.data(15).dtTransOffset = 187;

                    ;% MPC_casadi_DW.XYFigure_YBuffer
                    section.data(16).logicalSrcIdx = 18;
                    section.data(16).dtTransOffset = 1000187;

                    ;% MPC_casadi_DW.Unwrap21_PreviousInput_d
                    section.data(17).logicalSrcIdx = 19;
                    section.data(17).dtTransOffset = 2000187;

                    ;% MPC_casadi_DW.Unwrap21_Revolutions_o
                    section.data(18).logicalSrcIdx = 20;
                    section.data(18).dtTransOffset = 2000188;

                    ;% MPC_casadi_DW.idx
                    section.data(19).logicalSrcIdx = 21;
                    section.data(19).dtTransOffset = 2000189;

                    ;% MPC_casadi_DW.z_ref_internal
                    section.data(20).logicalSrcIdx = 22;
                    section.data(20).dtTransOffset = 2000190;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% MPC_casadi_DW.HILInitialize_Card
                    section.data(1).logicalSrcIdx = 23;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% MPC_casadi_DW.HILRead_PWORK
                    section.data(1).logicalSrcIdx = 24;
                    section.data(1).dtTransOffset = 0;

                    ;% MPC_casadi_DW.HILWrite_PWORK
                    section.data(2).logicalSrcIdx = 25;
                    section.data(2).dtTransOffset = 1;

                    ;% MPC_casadi_DW.Scope_PWORK.LoggedData
                    section.data(3).logicalSrcIdx = 26;
                    section.data(3).dtTransOffset = 2;

                    ;% MPC_casadi_DW.V_PWORK.LoggedData
                    section.data(4).logicalSrcIdx = 27;
                    section.data(4).dtTransOffset = 5;

                    ;% MPC_casadi_DW.Xpos_PWORK.LoggedData
                    section.data(5).logicalSrcIdx = 28;
                    section.data(5).dtTransOffset = 6;

                    ;% MPC_casadi_DW.Yaw_PWORK.LoggedData
                    section.data(6).logicalSrcIdx = 29;
                    section.data(6).dtTransOffset = 7;

                    ;% MPC_casadi_DW.Ypos_PWORK.LoggedData
                    section.data(7).logicalSrcIdx = 30;
                    section.data(7).dtTransOffset = 8;

                    ;% MPC_casadi_DW.Scope_PWORK_m.LoggedData
                    section.data(8).logicalSrcIdx = 31;
                    section.data(8).dtTransOffset = 9;

                    ;% MPC_casadi_DW.FromWorkspace1_PWORK.TimePtr
                    section.data(9).logicalSrcIdx = 32;
                    section.data(9).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 13;
            section.data(13)  = dumData; %prealloc

                    ;% MPC_casadi_DW.Buffer_inBufPtrIdx
                    section.data(1).logicalSrcIdx = 33;
                    section.data(1).dtTransOffset = 0;

                    ;% MPC_casadi_DW.Buffer_outBufPtrIdx
                    section.data(2).logicalSrcIdx = 34;
                    section.data(2).dtTransOffset = 1;

                    ;% MPC_casadi_DW.Buffer_bufferLength
                    section.data(3).logicalSrcIdx = 35;
                    section.data(3).dtTransOffset = 2;

                    ;% MPC_casadi_DW.HILInitialize_DOStates
                    section.data(4).logicalSrcIdx = 36;
                    section.data(4).dtTransOffset = 3;

                    ;% MPC_casadi_DW.HILInitialize_QuadratureModes
                    section.data(5).logicalSrcIdx = 37;
                    section.data(5).dtTransOffset = 19;

                    ;% MPC_casadi_DW.HILInitialize_InitialEICounts
                    section.data(6).logicalSrcIdx = 38;
                    section.data(6).dtTransOffset = 22;

                    ;% MPC_casadi_DW.HILInitialize_POModeValues
                    section.data(7).logicalSrcIdx = 39;
                    section.data(7).dtTransOffset = 25;

                    ;% MPC_casadi_DW.HILInitialize_POAlignValues
                    section.data(8).logicalSrcIdx = 40;
                    section.data(8).dtTransOffset = 27;

                    ;% MPC_casadi_DW.HILInitialize_POPolarityVals
                    section.data(9).logicalSrcIdx = 41;
                    section.data(9).dtTransOffset = 29;

                    ;% MPC_casadi_DW.HILRead_EncoderBuffer
                    section.data(10).logicalSrcIdx = 42;
                    section.data(10).dtTransOffset = 31;

                    ;% MPC_casadi_DW.sfEvent
                    section.data(11).logicalSrcIdx = 43;
                    section.data(11).dtTransOffset = 32;

                    ;% MPC_casadi_DW.sfEvent_l
                    section.data(12).logicalSrcIdx = 44;
                    section.data(12).dtTransOffset = 33;

                    ;% MPC_casadi_DW.sfEvent_lt
                    section.data(13).logicalSrcIdx = 45;
                    section.data(13).dtTransOffset = 34;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% MPC_casadi_DW.HILInitialize_POSortedChans
                    section.data(1).logicalSrcIdx = 46;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% MPC_casadi_DW.Integrator1_IWORK
                    section.data(1).logicalSrcIdx = 47;
                    section.data(1).dtTransOffset = 0;

                    ;% MPC_casadi_DW.Integrator1_IWORK_i
                    section.data(2).logicalSrcIdx = 48;
                    section.data(2).dtTransOffset = 1;

                    ;% MPC_casadi_DW.Integrator1_IWORK_g
                    section.data(3).logicalSrcIdx = 49;
                    section.data(3).dtTransOffset = 2;

                    ;% MPC_casadi_DW.Integrator1_IWORK_d
                    section.data(4).logicalSrcIdx = 50;
                    section.data(4).dtTransOffset = 3;

                    ;% MPC_casadi_DW.Integrator1_IWORK_gg
                    section.data(5).logicalSrcIdx = 51;
                    section.data(5).dtTransOffset = 4;

                    ;% MPC_casadi_DW.Integrator1_IWORK_l
                    section.data(6).logicalSrcIdx = 52;
                    section.data(6).dtTransOffset = 5;

                    ;% MPC_casadi_DW.XYFigure_IWORK
                    section.data(7).logicalSrcIdx = 53;
                    section.data(7).dtTransOffset = 6;

                    ;% MPC_casadi_DW.Integrator1_IWORK_a
                    section.data(8).logicalSrcIdx = 54;
                    section.data(8).dtTransOffset = 8;

                    ;% MPC_casadi_DW.FromWorkspace1_IWORK.PrevIndex
                    section.data(9).logicalSrcIdx = 55;
                    section.data(9).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% MPC_casadi_DW.is_active_c4_MPC_casadi
                    section.data(1).logicalSrcIdx = 56;
                    section.data(1).dtTransOffset = 0;

                    ;% MPC_casadi_DW.is_active_c1_MPC_casadi
                    section.data(2).logicalSrcIdx = 57;
                    section.data(2).dtTransOffset = 1;

                    ;% MPC_casadi_DW.is_active_c2_MPC_casadi
                    section.data(3).logicalSrcIdx = 58;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 11;
            section.data(11)  = dumData; %prealloc

                    ;% MPC_casadi_DW.HILInitialize_DOBits
                    section.data(1).logicalSrcIdx = 59;
                    section.data(1).dtTransOffset = 0;

                    ;% MPC_casadi_DW.Unwrap22_FirstSample
                    section.data(2).logicalSrcIdx = 60;
                    section.data(2).dtTransOffset = 16;

                    ;% MPC_casadi_DW.Unwrap224_FirstSample
                    section.data(3).logicalSrcIdx = 61;
                    section.data(3).dtTransOffset = 17;

                    ;% MPC_casadi_DW.Unwrap21_FirstSample
                    section.data(4).logicalSrcIdx = 62;
                    section.data(4).dtTransOffset = 18;

                    ;% MPC_casadi_DW.XYFigure_IsFull
                    section.data(5).logicalSrcIdx = 63;
                    section.data(5).dtTransOffset = 19;

                    ;% MPC_casadi_DW.Unwrap21_FirstSample_o
                    section.data(6).logicalSrcIdx = 64;
                    section.data(6).dtTransOffset = 20;

                    ;% MPC_casadi_DW.doneDoubleBufferReInit
                    section.data(7).logicalSrcIdx = 65;
                    section.data(7).dtTransOffset = 21;

                    ;% MPC_casadi_DW.doneDoubleBufferReInit_b
                    section.data(8).logicalSrcIdx = 66;
                    section.data(8).dtTransOffset = 22;

                    ;% MPC_casadi_DW.doneDoubleBufferReInit_f
                    section.data(9).logicalSrcIdx = 67;
                    section.data(9).dtTransOffset = 23;

                    ;% MPC_casadi_DW.idx_not_empty
                    section.data(10).logicalSrcIdx = 68;
                    section.data(10).dtTransOffset = 24;

                    ;% MPC_casadi_DW.z_ref_internal_not_empty
                    section.data(11).logicalSrcIdx = 69;
                    section.data(11).dtTransOffset = 25;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 254373485;
    targMap.checksum1 = 3046548651;
    targMap.checksum2 = 823941308;
    targMap.checksum3 = 3780393622;

